#ifndef DOLLARTOSWISSFRANCCONVERTER_H
#define DOLLARTOSWISSFRANCCONVERTER_H

#include "unitconverter.hpp"
#include "currencyconverter.hpp"

class DollarToSwissFrancConverter : public currencyconverter {
  public:
    DollarToSwissFrancConverter();
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOSWISSFRANCCONVERTER_H
