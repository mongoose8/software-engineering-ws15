#include "metertofeetconverter.hpp"

#include <string>



/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double MeterToFeetConverter::convert(double inMeters){

    if (inMeters < 0)
  {
    throw std::out_of_range("value is negative!");
  }

  if(decorate == nullptr)
     return inMeters*3.28084;
  else
  return decorate->convert(inMeters*3.28084);
}

std::string MeterToFeetConverter::toString() const{
  return "Meter to Feet Converter";
}

void MeterToFeetConverter::print() const{
  std::cout << toString();
}
