namespace BitPlayApp.Models
{
    public static class StateManager
    {
        public static string ThemeColor { get; set; } = "bg-light";
        public static string TextColor { get; set; } = "text-dark";

        public static void ChangeTheme()
        {
            if (ThemeColor == "bg-light")
            {
                ThemeColor = "bg-black";
                TextColor = "text-light";
            }
            else
            {
                ThemeColor = "bg-light";
                TextColor = "text-dark";
            }
        }
    }
}
