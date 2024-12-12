﻿namespace BitPlayApp.Models
{
    public class RegisterResponseModel
    {
        public string? Kind { get; set; }
        public string? IdToken { get; set; }
        public string? Email { get; set; }
        public string? RefreshToken { get; set; }
        public string? ExpiresIn { get; set; }
        public string? LocalId { get; set; }
    }
}
