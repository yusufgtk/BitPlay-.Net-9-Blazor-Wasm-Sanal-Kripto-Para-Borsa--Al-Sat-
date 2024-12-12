using System.ComponentModel.DataAnnotations;

namespace BitPlayApp.Models
{
    public class LoginModel
    {
        [Required(ErrorMessage = "Zorunlu alan!")]
        [DataType(DataType.EmailAddress, ErrorMessage = "Email formatında olması gerekiyor!")]
        public string? Email { get; set; }

        [Required(ErrorMessage = "Zorunlu alan!")]
        [DataType(DataType.Password)]
        public string? Password { get; set; }
    }
}
