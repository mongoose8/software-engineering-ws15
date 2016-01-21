#ifndef FACTORY_HPP
#define FACTORY_HPP
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include "unitconverter.hpp"
#include "dollartoeuroconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "dollartoswissfrancconverter.hpp"
#include "metertomileconverter.hpp"
#include "metertofeetconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"


using namespace std;
class Factory {
 public:
 std::shared_ptr<UnitConverter> create(std::string const& c);
 static std::shared_ptr<Factory> instance();
 private:
 std::map<std::string, std::shared_ptr<UnitConverter>> converters = {
                {"DollarToEuro", std::make_shared<DollarToEuroConverter>()},
                {"DollarToPound", std::make_shared<DollarToPoundConverter>()},
                {"DollarToSwissFranc", std::make_shared<DollarToSwissFrancConverter>()},
                {"MeterToMile", std::make_shared<MeterToMileConverter>()},
                {"MeterToFeet", std::make_shared<MeterToFeetConverter>()},
                {"CelsiusToFahrenheit", std::make_shared<CelsiusToFahrenheitConverter>()},
                {"CelsiusToKelvin", std::make_shared<CelsiusToKelvinConverter>()}};
 static std::shared_ptr<Factory> instance_;
};



#endif // FACTORY_HPP
