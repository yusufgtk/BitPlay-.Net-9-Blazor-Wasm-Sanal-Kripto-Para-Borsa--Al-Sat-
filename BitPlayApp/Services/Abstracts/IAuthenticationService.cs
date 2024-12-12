using BitPlayApp.Models;

namespace BitPlayApp.Services.Abstracts;

public interface IAuthenticationService
{
    Task<RegisterResponseModel> RegisterAsync(RegisterModel registerModel);
    Task<LoginResponseModel> LoginAsync(LoginModel loginModel);
}

