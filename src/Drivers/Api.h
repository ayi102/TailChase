#ifndef DRIVERS_API_H
#define DRIVERS_API_H
namespace Drivers
{
class Api
{
    public:
        Api();
    
    public:
        virtual void start() = 0;
        virtual void stop() = 0;
};
};
#endif