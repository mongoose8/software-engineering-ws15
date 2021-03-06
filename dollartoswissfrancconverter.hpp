#ifndef DOLLARTOSWISSFRANCCONVERTER_H
#define DOLLARTOSWISSFRANCCONVERTER_H

#include "unitconverter.hpp"
#include "currencyconverter.hpp"

class DollarToSwissFrancConverter : public currencyconverter {
  public:
    DollarToSwissFrancConverter(){}
    DollarToSwissFrancConverter(std::shared_ptr<UnitConverter> decorate):currencyconverter{decorate}{}
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOSWISSFRANCCONVERTER_H
