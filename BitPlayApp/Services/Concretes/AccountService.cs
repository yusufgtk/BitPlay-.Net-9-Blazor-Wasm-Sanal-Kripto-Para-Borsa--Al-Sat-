using Microsoft.Extensions.Options;
using Newtonsoft.Json;
using BitPlayApp.Models;
using BitPlayApp.Services.Abstracts;
using System.Net.Http.Headers;
using System.Security.Principal;
using System.Text;

namespace BitPlayApp.Services.Concretes
{
    public class AccountService : IAccountService
    {
        private const string apiName = "FirebaseApi";
        private readonly IHttpClientFactory _httpClientFactory;
        public AccountService(IHttpClientFactory httpClientFactory)
        {
            _httpClientFactory = httpClientFactory;
        }

        public async Task<bool> CreateAccountAsync(AccountModel accountModel, string idToken)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            httpClient.DefaultRequestHeaders.Add("Accept", "application/json");
            //httpClient.DefaultRequestHeaders.Authorization = new AuthenticationHeaderValue("Bearer", idToken);

            var content = new StringContent(JsonConvert.SerializeObject(accountModel), Encoding.UTF8, "application/json");

            var response = await httpClient.PostAsync($"accounts/{accountModel.UserId}.json?auth={idToken}", content);
            if (response.IsSuccessStatusCode)
            {
                var data = await response.Content.ReadAsStringAsync();
                Console.WriteLine(data);
                Console.WriteLine(response.StatusCode);
                Console.WriteLine(response.Content);
                return true;
            }    
            return false;
        }

        public async Task<AccountModel> GetAccountByUserIdAsync(string userId, string idToken)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);

            var response = await httpClient.GetAsync($"accounts/{userId}.json?auth={idToken}");
            if(response.IsSuccessStatusCode)
            {
                string content = await response.Content.ReadAsStringAsync();
                Console.WriteLine($"İçerik: {content}");
                Console.WriteLine($"hata kodu: {response.StatusCode}");
                var account = JsonConvert.DeserializeObject<Dictionary<string, AccountModel>>(content);
                if (account != null && account.Any())
                {
                    // İlk değeri döndür
                    return account.Values.First() ?? new AccountModel();
                }
            }
            return new AccountModel();  
        }

        public async Task<bool> UpdateAccountByUserIdAsync(AccountModel accountModel, string userId, string idToken)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);

            string uniqId;
            var response2 = await httpClient.GetAsync($"accounts/{userId}.json?auth={idToken}");
            if (response2.IsSuccessStatusCode)
            {
                string data2 = await response2.Content.ReadAsStringAsync();
                var root = JsonConvert.DeserializeObject<Dictionary<string, AccountModel>>(data2);
                if (root != null && root.Any())
                {
                    uniqId = root.Keys.FirstOrDefault() ?? "";
                    var content = new StringContent(JsonConvert.SerializeObject(accountModel), Encoding.UTF8, "application/json");
                    var response = await httpClient.PatchAsync($"accounts/{userId}/{uniqId}.json?auth={idToken}", content);

                    if (response.IsSuccessStatusCode)
                    {
                        var data = await response.Content.ReadAsStringAsync();
                        Console.WriteLine(data);
                        Console.WriteLine(response.StatusCode);
                        Console.WriteLine(response.Content);
                        return true;
                    }
                    return false;
                }
                
            }
            return false;
            
        }
    }
}
