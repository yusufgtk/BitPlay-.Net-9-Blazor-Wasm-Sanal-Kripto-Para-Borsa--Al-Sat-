namespace BitPlayApp
{
    public static class ProccessStateManager
    {
        public static bool _proccessState;

        public static bool ProccessState 
        {
            get => _proccessState;
            set
            {
                if(true == value)
                {
                    _proccessState = value;
                    NotifyStateChanged();
                }
            }
        }

        public static event Action? OnChange;

        public static void NotifyStateChanged()
        {
            OnChange?.Invoke();
        }
    }
}
