using Microsoft.AspNetCore.Components.Web;
using Microsoft.AspNetCore.Components.WebAssembly.Hosting;
using BitPlayApp;
using BitPlayApp.Services.Abstracts;
using BitPlayApp.Services.Concretes;

var builder = WebAssemblyHostBuilder.CreateDefault(args);
builder.RootComponents.Add<App>("#app");
builder.RootComponents.Add<HeadOutlet>("head::after");

builder.Services.AddScoped(sp => new HttpClient { BaseAddress = new Uri(builder.HostEnvironment.BaseAddress) });
builder.Services.AddHttpClient("FirebaseApi", option =>
{
    option.BaseAddress = new Uri("https://qr-menu-a2b77-default-rtdb.europe-west1.firebasedatabase.app/");
    option.DefaultRequestHeaders.Add("Accept", "application/json");
});
builder.Services.AddHttpClient("FirebaseApiAuth", option =>
{
    option.DefaultRequestHeaders.Add("Accept", "application/json");
});
builder.Services.AddHttpClient("BitcoinApi", option =>
{
    option.DefaultRequestHeaders.Add("Accept", "application/json");
});

builder.Services.AddScoped<IAuthenticationService, AuthenticationService>();
builder.Services.AddScoped<IBitcoinService, BitcoinService>();
builder.Services.AddScoped<IAccountService, AccountService>();
builder.Services.AddScoped<IProccessService, ProccessService>();

await builder.Build().RunAsync();
