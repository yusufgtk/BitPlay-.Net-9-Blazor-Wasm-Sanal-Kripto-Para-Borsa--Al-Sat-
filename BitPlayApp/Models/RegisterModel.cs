using System.ComponentModel.DataAnnotations;

namespace BitPlayApp.Models;

public class RegisterModel
{
    [Required(ErrorMessage = "Zorunlu alan!")]
    [EmailAddress(ErrorMessage = "Geçersiz e-posta adresi!")]
    public string? Email { get; set; }

    [Required(ErrorMessage = "Zorunlu alan!")]
    [DataType(DataType.Password)]
    [StringLength(20, ErrorMessage = "3-20 uzunlugunda olabilir!", MinimumLength = 3)]
    public string? Password { get; set; }

    [Required(ErrorMessage = "Zorunlu alan!")]
    [DataType(DataType.Password)]
    [StringLength(20, ErrorMessage = "3-20 uzunlugunda olabilir!", MinimumLength = 3)]
    [Compare("Password", ErrorMessage = "Şifreler eşleşmiyor!")]
    public string? RePassword { get; set; }
}

