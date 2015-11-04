#include "metertomileconverter.hpp"

#include <string>

MeterToMileConverter::MeterToMileConverter()
{
}

/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double MeterToMileConverter::convert(double inMeters){
  return inMeters*0.00062;
}

std::string MeterToMileConverter::toString() const{
  return "Meter to Mile Converter";
}

void MeterToMileConverter::print() const{
  std::cout << toString();
}
