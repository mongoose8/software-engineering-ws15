#include "factory.hpp"

std::shared_ptr<UnitConverter>  Factory::create(std::string const& c)
{

  return converters[c];
}

std::shared_ptr<Factory> Factory::instance()
{
  
 if(!instance_)
 instance_ = std::make_shared<Factory>();
 return instance_;

}
