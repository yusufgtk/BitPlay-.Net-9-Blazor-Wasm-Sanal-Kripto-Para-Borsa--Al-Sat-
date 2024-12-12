using BitPlayApp.Models;
using BitPlayApp.Services.Abstracts;
using Newtonsoft.Json;
using System.Text;

namespace BitPlayApp.Services.Concretes
{
    public class ProccessService : IProccessService
    {
        private const string apiName = "FirebaseApi";
        private readonly IHttpClientFactory _httpClientFactory;
        public ProccessService(IHttpClientFactory httpClientFactory)
        {
            _httpClientFactory = httpClientFactory;
        }

        public async Task<bool> CreateProccess(ProccessModel proccess, string userId, string token)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            var content = new StringContent(JsonConvert.SerializeObject(proccess), Encoding.UTF8, "application/json");
            string url = $"proccesses/{userId}/.json?auth={token}";

            var response = await httpClient.PostAsync(url, content);
            if (response.IsSuccessStatusCode)
            {
                string data = await response.Content.ReadAsStringAsync();
                Console.WriteLine(data);
                return true;
            }
            return false;
        }

        public async Task<List<ProccessModel>> GetAllProccess(string userId, string token)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            string url = $"proccesses/{userId}/.json?auth={token}";
            var response = await httpClient.GetAsync(url);
            if(response.IsSuccessStatusCode)
            {
                string content = await response.Content.ReadAsStringAsync();
                var dict = JsonConvert.DeserializeObject<Dictionary<string, ProccessModel>>(content);
                if(dict != null)
                {
                    Console.WriteLine(dict);
                    Console.WriteLine(dict.Values.ToList());
                    return dict.Values.ToList();
                }
                
            }
            return new List<ProccessModel>();
        }
    }
}
