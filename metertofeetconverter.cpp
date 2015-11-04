#include "metertofeetconverter.hpp"

#include <string>

MeterToFeetConverter::MeterToFeetConverter()
{
}

/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double MeterToFeetConverter::convert(double inMeters){
  return inMeters*3.28084;
}

std::string MeterToFeetConverter::toString() const{
  return "Meter to Feet Converter";
}

void MeterToFeetConverter::print() const{
  std::cout << toString();
}