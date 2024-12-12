using Newtonsoft.Json;
using BitPlayApp.Models;
using BitPlayApp.Services.Abstracts;
using System.Text;

namespace BitPlayApp.Services.Concretes
{
    public class AuthenticationService : IAuthenticationService
    {
        private const string apiKey = "xxxxxxxxx";
        private const string apiName = "FirebaseApiAuth";
        private readonly IHttpClientFactory _httpClientFactory;
        public AuthenticationService(IHttpClientFactory httpClientFactory)
        {
            _httpClientFactory = httpClientFactory;
        }

        public async Task<LoginResponseModel> LoginAsync(LoginModel loginModel)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            var content = new StringContent(JsonConvert.SerializeObject(new
            {
                email = loginModel.Email,
                password = loginModel.Password,
                returnSecureToken = true
            }), Encoding.UTF8, "application/json");

            string baseUrl = "https://identitytoolkit.googleapis.com/v1/accounts:signInWithPassword?key=";
            string url = baseUrl + apiKey;
            var response = await httpClient.PostAsync(url, content);
            if(response.IsSuccessStatusCode)
            {
                string data = await response.Content.ReadAsStringAsync();
                Console.WriteLine(data);
                return JsonConvert.DeserializeObject<LoginResponseModel>(data) ?? new LoginResponseModel();
            }
            return new LoginResponseModel();
            
        }

        public async Task<RegisterResponseModel> RegisterAsync(RegisterModel registerModel)
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            var content = new StringContent(JsonConvert.SerializeObject(new
            {
                email = registerModel.Email,
                password = registerModel.Password,
                returnSecureToken = false
            }), Encoding.UTF8, "application/json");

            string baseUrl = "https://identitytoolkit.googleapis.com/v1/accounts:signUp?key=";
            string url = baseUrl + apiKey;
            var response = await httpClient.PostAsync(url, content);
            if (response.IsSuccessStatusCode)
            {
                string data = await response.Content.ReadAsStringAsync();
                Console.WriteLine(data);
                return JsonConvert.DeserializeObject<RegisterResponseModel>(data) ?? new RegisterResponseModel();
            }
            return new RegisterResponseModel(); 
        }
        
    }
}
