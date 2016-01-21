cmake_minimum_required(VERSION 2.8.3)
project(unitconverter)
set(CMAKE_AUTOMOC ON)
 
#Bring the headers, such as Student.h into the project
#include_directories(include)
 
#However, the file(GLOB...) allows for wildcard additions:
#file(GLOB SOURCES "src/*.cpp")
 
#Generate the shared library from the sources
#add_library(testStudent SHARED ${SOURCES})

add_executable(converter main.cpp)

add_library(factory factory.hpp factory.cpp celsiustofahrenheitconverter.hpp celsiustofahrenheitconverter.cpp celsiustokelvinconverter.hpp celsiustokelvinconverter.cpp command.hpp currencyconverter.hpp decorator.hpp dollartoeuroconverter.hpp dollartoeuroconverter.cpp dollartopoundconverter.hpp dollartopoundconverter.cpp dollartoswissfrancconverter.hpp dollartoswissfrancconverter.cpp inverse.hpp inverse.cpp lengthconverter.hpp metertofeetconverter.hpp metertofeetconverter.cpp metertomileconverter.hpp metertomileconverter.cpp temparaturconverter.hpp tinytest.h unitconverter.hpp unitconverter.cpp )

target_link_libraries(converter factory)

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")
 
#Set the location for library installation -- i.e., /usr/lib in this case
# not really necessary in this example. Use "sudo make install" to apply
#install(TARGETS testStudent DESTINATION /usr/lib)
