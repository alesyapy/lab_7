#pragma once
#include "json.hpp"
#include <fstream>
#include <exception>
#include "Service.h" 

using json = nlohmann::json;

class JsonService : public Service {
public:
    virtual Weather getWeather(std::string s) override;
    virtual ~JsonService() {};
};


