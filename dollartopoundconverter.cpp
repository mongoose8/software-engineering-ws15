#include "dollartopoundconverter.hpp"

#include <string>


/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double DollarToPoundConverter::convert(double inputDollars){
 
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
