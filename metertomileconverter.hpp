#ifndef METERTOMILECONVERTER_H
#define METERTOMILECONVERTER_H

#include "unitconverter.hpp"
#include "lengthconverter.hpp"

class MeterToMileConverter : public lengthconverter {
  public:
    MeterToMileConverter();
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERTOMILECONVERTER_H
