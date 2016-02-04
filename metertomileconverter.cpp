#include "metertomileconverter.hpp"

#include <string>



/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double MeterToMileConverter::convert(double inMeters){

    if (inMeters < 0)
  {
    throw std::out_of_range("value is negative!");
  }

  if(decorate == nullptr)
     return inMeters*0.00062;
  else
  return decorate->convert(inMeters*0.00062);
}

std::string MeterToMileConverter::toString() const{
  return "Meter to Mile Converter";
}

void MeterToMileConverter::print() const{
  std::cout << toString();
}
