#include "Weather.h"
#include "JsonService.h"
#include "XmlService.h"

int main()
{
    setlocale(LC_ALL, "RU");
    JsonService js;
    Weather w = js.getWeather("weather.json");
    w.printWeatherDescription();
	XmlService xs;
    Weather w = xs.getWeather("weather.xml");
    return 0;
}
