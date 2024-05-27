#include "Weather.h"
#include "JsonService.h"

int main()
{
    setlocale(LC_ALL, "RU");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.printWeatherDescription();
    return 0;
}
