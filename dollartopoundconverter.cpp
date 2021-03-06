#include "dollartopoundconverter.hpp"

#include <string>


/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double DollarToPoundConverter::convert(double inputDollars){
 
    if (inputDollars < 0)
  {
    throw std::out_of_range("value is negative!");
  }
  if(decorate == nullptr)
     return inputDollars*0.649;
  else
  return decorate->convert(inputDollars*0.649);
}

std::string DollarToPoundConverter::toString() const{
  return "Dollar to Pound Converter";
}

void DollarToPoundConverter::print() const{
  std::cout << toString();
}
