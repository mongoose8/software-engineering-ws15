#ifndef METERTOFEETCONVERTER_H
#define METERTOFEETCONVERTER_H


#include "lengthconverter.hpp"

class MeterToFeetConverter : public lengthconverter {
  public:
    MeterToFeetConverter(){}
    MeterToFeetConverter(std::shared_ptr<UnitConverter> decorate):lengthconverter{decorate}{}
    double convert(double inMeters);
    std::string toString() const;
    void print() const;
};

#endif // METERTOFEETCONVERTER_H
