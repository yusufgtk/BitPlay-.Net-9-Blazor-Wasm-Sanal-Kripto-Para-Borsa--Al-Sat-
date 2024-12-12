
using System.ComponentModel.DataAnnotations;

namespace BitPlayApp.Models
{
    public class SellBitcoinModel
    {
        [Required(ErrorMessage = "Zourunlu Alan!")]
        [Range(minimum: 0.000001, maximum: 1000000)]
        public decimal BTCAmount { get; set; } = 0.000000m;

        [Required(ErrorMessage = "Zourunlu Alan!")]
        [Range(minimum: 1, maximum: 100000000, ErrorMessage = "Minimum işlem tutarı 1$'dır.")]
        public decimal USDAmount { get; set; } = 0.00m;

        [Range(minimum: 0.01, maximum: 1000000)]
        public decimal Commission { get; set; } = 0.00m;
    }
}
