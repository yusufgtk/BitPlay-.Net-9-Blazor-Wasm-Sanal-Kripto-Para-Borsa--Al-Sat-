namespace BitPlayApp.Models
{
    public class ProccessModel
    {
        public string? Id { get; set; }
        public string? ProccessName { get; set; }
        public string? CryptoName { get; set; }
        public decimal Amount { get; set; }
        public decimal Rate { get; set; }
        public decimal Total { get; set; }
        public string? CreatedTime { get; set; }
        public string? UserId { get; set; }
        public decimal AfterProccessBalance { get; set; }
    }
}
