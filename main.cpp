#include <memory>
#include <stdlib.h>
#include <string> 
#include "dollartoeuroconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "metertofeetconverter.hpp"
#include "metertomileconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include "dollartoswissfrancconverter.hpp"
//#include "factory.hpp"
#include "decorator.hpp"
#include "unitconverter.hpp"
#include "temparaturconverter.hpp"
#include "inverse.hpp"





int main(int argc, char* argv[])
{
 // std::string conversion = argv[1];
 // std::string value = argv[2];
  
 // auto myConverter = Factory::instance()->create(conversion);
  
//   std::cout << myConverter->toString() << " has converted "<< std::stod(value) << " to " << myConverter->convert(std::stod(value)) <<"  //"<<std::endl;
  std::shared_ptr<UnitConverter> a = std::make_shared<Inverse>(std::make_shared<MeterToMileConverter>());
  std::shared_ptr<UnitConverter> b = std::make_shared<MeterToMileConverter>();
  std::cout<<" "<<b->convert(a -> convert(30))<<std::endl;
  
  /*
   * TODO
   *
   * use desired conversion here
   *
  */
 /* if(conversion == "DollarToEuro")
  {
     auto myConverter = std::make_shared<DollarToEuroConverter>();
     std::cout << myConverter->toString() << " has converted "<< std::stod(value) << " Dollar to " << myConverter->convert(std::stod(value)) <<" Euros!"<<std::endl;
  }
  
  if(conversion == "DollarToPound")
  {
    auto myConverter1 = std::make_shared<DollarToPoundConverter>();
    std::cout << myConverter1->toString() << " has converted "<< std::stod(value) << " Dollar to " << myConverter1->convert(std::stod(value)) <<" Pound!"<<std::endl;
  }

  if(conversion == "DollarToSwissFranc")
  {
     auto myConverter6 = std::make_shared<DollarToSwissFrancConverter>();
     std::cout << myConverter6->toString() << " has converted "<< std::stod(value) << " Dollar to " << myConverter6->convert(std::stod(value)) <<" SwissFranc!"<<std::endl;
  }
   
  if(conversion == "MeterToFeet")
  {
    auto myConverter2 = std::make_shared<MeterToFeetConverter>();
    std::cout << myConverter2->toString() << " has converted "<< std::stod(value) << " Meter to " << myConverter2->convert(std::stod(value)) <<" Feet!"<<std::endl;
  }
 
  if(conversion == "MeterToMile")
  {
    auto myConverter3 = std::make_shared<MeterToMileConverter>();
    std::cout << myConverter3->toString() << " has converted "<< std::stod(value) << " Meter to " << myConverter3->convert(std::stod(value)) <<" Mile!"<<std::endl;
  }

  if(conversion == "CelsiusToFahrenheit")
  {
    auto myConverter4 = std::make_shared<CelsiusToFahrenheitConverter>();
    std::cout << myConverter4->toString() << " has converted "<< std::stod(value) << " Celsius to " << myConverter4->convert(std::stod(value)) <<" Fahrenheit!"<<std::endl;
  }

  if(conversion == "CelsiusToKelvin")
  {
    auto myConverter5 = std::make_shared<CelsiusToKelvinConverter>();
    std::cout << myConverter5->toString() << " has converted "<< std::stod(value) << " Celsius to " << myConverter5->convert(std::stod(value)) <<" Kelvin!"<<std::endl;
  }*/

  return 0;
}



