using BitPlayApp.Models;

namespace BitPlayApp
{
    public static class AccountStateManager
    {
        private static bool _status;

        public static bool Status  
        {
            get => _status;
            set
            {
                if(true == value)
                {
                    _status = value;
                    NotifyStateChanged();
                }
            }
        }

        public static event Action? OnChange;

        private static void NotifyStateChanged()
        {
            OnChange?.Invoke();
        }
    }
}
