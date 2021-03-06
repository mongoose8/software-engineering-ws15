#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "unitconverter.hpp"
#include "currencyconverter.hpp"



class DollarToEuroConverter : public currencyconverter {
  public:
    DollarToEuroConverter(){}
    DollarToEuroConverter(std::shared_ptr<UnitConverter> decorate):currencyconverter{decorate}{}
    double convert(double inDollars);
    std::string toString() const;
    void print() const;
};


#endif // DOLLARTOEUROCONVERTER_H
