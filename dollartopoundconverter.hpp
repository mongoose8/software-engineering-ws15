#ifndef DOLLARTOPOUNDCONVERTER_H
#define DOLLARTOPOUNDCONVERTER_H

#include "unitconverter.hpp"
#include "currencyconverter.hpp"

class DollarToPoundConverter : public currencyconverter {
  public:
    DollarToPoundConverter(){}
    DollarToPoundConverter(std::shared_ptr<UnitConverter> decorate):currencyconverter{decorate}{}
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};

#endif // DOLLARTOPOUNDCONVERTER_H
