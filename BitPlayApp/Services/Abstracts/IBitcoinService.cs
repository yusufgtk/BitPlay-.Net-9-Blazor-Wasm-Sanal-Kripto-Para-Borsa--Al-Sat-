using BitPlayApp.Models;

namespace BitPlayApp.Services.Abstracts
{
    public interface IBitcoinService
    {
        Task<BitcoinResponseModel> GetBitcoinPrice();
    }
}
