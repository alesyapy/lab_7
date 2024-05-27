#pragma once
#include "Service.h"
#include "pugixml-1.14/src/pugixml.hpp"
class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};

