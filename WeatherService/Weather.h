#pragma once
#include "string"
#include "iostream"
class Weather
{
private:
	std::string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	std::string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100
public:
	Weather(std::string cityName, double longitude, double latitude,
		double temp, std::string weatherDesc, double wind, int cloudCover) : city(cityName), lon(longitude), lat(latitude),
		temperature(temp), weather(weatherDesc), windSpeed(wind), clouds(cloudCover) {};
	void printWeatherDescription();
};

