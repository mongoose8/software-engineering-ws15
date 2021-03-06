#include "dollartoeuroconverter.hpp"
#include <memory>
#include <string>



/*In: double value of dollars
 *Out: Euro value of input dollars as of 9.10.15
 */
double DollarToEuroConverter::convert(double inputDollars){

    if (inputDollars < 0)
  {
    throw std::out_of_range("value is negative!");
  }
  if(decorate == nullptr)
     return inputDollars*0.88;
  else
  return decorate->convert(inputDollars*0.88);
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout << toString();
}




