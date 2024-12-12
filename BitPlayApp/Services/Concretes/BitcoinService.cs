using Microsoft.Extensions.Http;
using Newtonsoft.Json;
using BitPlayApp.Models;
using BitPlayApp.Services.Abstracts;

namespace BitPlayApp.Services.Concretes
{
    public class BitcoinService : IBitcoinService
    {
        private const string apiName = "BitcoinApi";
        private readonly IHttpClientFactory _httpClientFactory;
        public BitcoinService(IHttpClientFactory httpClientFactory)
        {
            _httpClientFactory = httpClientFactory;
        }
        public async Task<BitcoinResponseModel> GetBitcoinPrice()
        {
            var httpClient = _httpClientFactory.CreateClient(apiName);
            var url = "https://min-api.cryptocompare.com/data/price?fsym=BTC&tsyms=USD";
            var response = await httpClient.GetAsync(url);
            if(response.IsSuccessStatusCode)
            {
                string content = await response.Content.ReadAsStringAsync();
                return JsonConvert.DeserializeObject<BitcoinResponseModel>(content) ?? new BitcoinResponseModel();
            }
            return new BitcoinResponseModel();
        }
    }
}
