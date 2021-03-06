#include "dollartoswissfrancconverter.hpp"

#include <string>


/*In: double value of dollars
 *Out: Yen value of input dollars as of 3.11.15
 */
double DollarToSwissFrancConverter::convert(double inputDollars){


    if (inputDollars < 0)
  {
    throw std::out_of_range("value is negative!");
  }
  if(decorate == nullptr)
     return inputDollars*0.9941;
  else
  return decorate->convert(inputDollars*0.9941);
}

std::string DollarToSwissFrancConverter::toString() const{
  return "Dollar to SwissFranc Converter";
}

void DollarToSwissFrancConverter::print() const{
  std::cout << toString();
}
