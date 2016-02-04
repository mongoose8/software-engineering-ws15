#include "factory.hpp"

std::shared_ptr<Factory> Factory::instance_ = nullptr;


std::shared_ptr<UnitConverter>  Factory::create(std::string const& c)
{
   auto it = converters.find(c);
   if(converters.count(c) == 0)
   {
     throw std::invalid_argument("cannot found converter");
     return 0;
    }

  if (it != converters.end()) {
    return it->second;
  } else {
    return nullptr;
  }
}

std::shared_ptr<Factory> Factory::instance()
{
  
 if(!instance_)
 instance_ = std::make_shared<Factory>();
 return instance_;

}
