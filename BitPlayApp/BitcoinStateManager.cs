namespace BitPlayApp
{
    public class BitcoinStateManager
    {
        private static decimal _btcSellPrice;

        public static decimal BTCSellPrice
        {
            get => _btcSellPrice;
            set
            {
                if (_btcSellPrice != value)
                {
                    _btcSellPrice = value;
                    NotifyStateChanged();
                }
            }
        }

        // burası değişken değiştiğinde değişkeni dinleyen yapılara değiştiğini haber verir;
        public static event Action? OnChange;

        private static void NotifyStateChanged()
        {
            OnChange?.Invoke();
        }
    }
}
