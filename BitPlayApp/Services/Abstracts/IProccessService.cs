using BitPlayApp.Models;

namespace BitPlayApp.Services.Abstracts
{
    public interface IProccessService
    {
        Task<bool> CreateProccess(ProccessModel proccess, string userId, string token);
        Task<List<ProccessModel>> GetAllProccess(string userId, string token);
    }
}
