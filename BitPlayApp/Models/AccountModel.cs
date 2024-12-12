namespace BitPlayApp.Models
{
    public class AccountModel
    {
        public string? UserId { get; set; }
        public string? UserEmail { get; set; }
        public decimal UsdBalance { get; set; }
        public decimal BtcBalance { get; set; }
    }
}
