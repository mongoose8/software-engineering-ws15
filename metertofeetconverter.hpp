#ifndef METERTOFEETCONVERTER_H
#define METERTOFEETCONVERTER_H

#include "unitconverter.hpp"
#include "lengthconverter.hpp"

class MeterToFeetConverter : public lengthconverter {
  public:
    MeterToFeetConverter();
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERTOFEETCONVERTER_H
