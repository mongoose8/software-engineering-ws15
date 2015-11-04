#include "dollartopoundconverter.hpp"

#include <string>

DollarToPoundConverter::DollarToPoundConverter()
{
}

/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double DollarToPoundConverter::convert(double inputDollars){
  return inputDollars*0.649;
}

std::string DollarToPoundConverter::toString() const{
  return "Dollar to Pound Converter";
}

void DollarToPoundConverter::print() const{
  std::cout << toString();
}
