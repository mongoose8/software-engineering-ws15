#include "tinytest.h"
#include "dollartoeuroconverter.hpp"
#include "dollartoswissfrancconverter.hpp"
#include "dollartopoundconverter.hpp"
#include "metertofeetconverter.hpp"
#include "metertomileconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "celsiustokelvinconverter.hpp"
#include <memory>

int dollarToEuroTest()
{
  auto myConverter = std::make_shared<DollarToEuroConverter>();
  double dollar1 = 2000;
  double euro1 = myConverter->convert(dollar1);
  double test = 1760;
  TINYTEST_EQUAL_EPSILON(test, euro1);
  
  double dollar2 = 435;
  double euro2 = myConverter->convert(dollar2);
  double test2 = 400;
  TINYTEST_EQUAL_EPSILON(test2, euro2);
  
  double dollar3 = 0;
  double euro3 = myConverter->convert(dollar3);
  double test3 = 0;
  TINYTEST_EQUAL_EPSILON(test3, euro3);

  return 1;
  
}

int dollarToPoundTest()
{
  auto myConverter = std::make_shared<DollarToPoundConverter>();
  double dollar1 = 10000;
  double Pound1 = myConverter->convert(dollar1);
  double test = 6490;
  TINYTEST_EQUAL_EPSILON(test, Pound1);
  
  double dollar2 = 2743;
  double Pound2 = myConverter->convert(dollar2);
  double test2 = 1780.207;
  TINYTEST_EQUAL_EPSILON(test2, Pound2);
  
  double dollar3 = 0;
  double Pound3 = myConverter->convert(dollar3);
  double test3 = 0;
  TINYTEST_EQUAL_EPSILON(test3, Pound3);

  return 1;
}

int dollarToSwissFrancTest()
{
  auto myConverter = std::make_shared<DollarToSwissFrancConverter>();
  double dollar1 = 2940;
  double franc1 = myConverter->convert(dollar1);
  double test = 2922.654;
  TINYTEST_EQUAL_EPSILON(test, franc1);
  
  double dollar2 = 2743;
  double franc2 = myConverter->convert(dollar2);
  double test2 = 2726.8163;
  TINYTEST_EQUAL_EPSILON(test2, franc2);
  
  double dollar3 = 105;
  double franc3 = myConverter->convert(dollar3);
  double test3 = 104;
  TINYTEST_EQUAL_EPSILON(test3, franc3);

  return 1;
}

int meterToFeetTest()
{
  auto myConverter = std::make_shared<MeterToFeetConverter>();
  double meter1 = 3520;
  double feet1 = myConverter->convert(meter1);
  double test = 11548.5568;
  TINYTEST_EQUAL_EPSILON(test, feet1);
  
  double meter2 = 100;
  double feet2 = myConverter->convert(meter2);
  double test2 = 328.084;
  TINYTEST_EQUAL_EPSILON(test2, feet2);
  
  double meter3 = 0;
  double feet3 = myConverter->convert(meter3);
  double test3 = 0;
  TINYTEST_EQUAL_EPSILON(test3, feet3);

  return 1;
}

int meterToMileTest()
{
  auto myConverter = std::make_shared<MeterToMileConverter>();
  double meter1 = 100;
  double mile1 = myConverter->convert(meter1);
  double test = 0.062;
  TINYTEST_EQUAL_EPSILON(test, mile1);
  
  double meter2 = 5678;
  double mile2 = myConverter->convert(meter2);
  double test2 = 3.52036;
  TINYTEST_EQUAL_EPSILON(test2, mile2);
  
  double meter3 = 1;
  double mile3 = myConverter->convert(meter3);
  double test3 = 0;
  TINYTEST_EQUAL_EPSILON(test3, mile3);

  return 1;
}

int celsiusToFahrenheitTest()
{
  auto myConverter = std::make_shared<CelsiusToFahrenheitConverter>();
  double celsius1 = 40;
  double fahrenheit1 = myConverter->convert(celsius1);
  double test = 104;
  TINYTEST_EQUAL_EPSILON(test, fahrenheit1);
  
  double celsius2 = 25;
  double fahrenheit2 = myConverter->convert(celsius2);
  double test2 = 77;
  TINYTEST_EQUAL_EPSILON(test2, fahrenheit2);
  
  double celsius3 = 0;
  double fahrenheit3 = myConverter->convert(celsius3);
  double test3 = 0;
  TINYTEST_EQUAL_EPSILON(test3, fahrenheit3);

  return 1;

}

int celsiusToKelvinTest()
{
  auto myConverter = std::make_shared<CelsiusToKelvinConverter>();
  double celsius1 = 43;
  double kelvin1 = myConverter->convert(celsius1);
  double test = 316;
  TINYTEST_EQUAL_EPSILON(test, kelvin1);
  
  double celsius2 = 25;
  double kelvin2 = myConverter->convert(celsius2);
  double test2 = 298;
  TINYTEST_EQUAL_EPSILON(test2, kelvin2);
  
  double celsius3 = 0;
  double kelvin3 = myConverter->convert(celsius3);
  double test3 = 273;
  TINYTEST_EQUAL_EPSILON(test3, kelvin3);

  return 1;

}


TINYTEST_START_SUITE(Converter);
  TINYTEST_ADD_TEST(dollarToEuroTest);
  TINYTEST_ADD_TEST(dollarToPoundTest);
  TINYTEST_ADD_TEST(dollarToSwissFrancTest);
  TINYTEST_ADD_TEST(meterToFeetTest);
  TINYTEST_ADD_TEST(meterToMileTest);
  TINYTEST_ADD_TEST(celsiusToFahrenheitTest);
  TINYTEST_ADD_TEST(celsiusToKelvinTest);
TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(Converter);

