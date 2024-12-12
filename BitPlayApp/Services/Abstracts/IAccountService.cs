using BitPlayApp.Models;

namespace BitPlayApp.Services.Abstracts
{
    public interface IAccountService
    {
        Task<bool> CreateAccountAsync(AccountModel accountModel, string idToken);
        Task<AccountModel> GetAccountByUserIdAsync(string userId, string idToken);
        Task<bool> UpdateAccountByUserIdAsync(AccountModel accountModel, string userId, string idToken);
    }
}
