#ifndef DRIVERS_PUSH_BUTTON_API_H
#define DRIVERS_PUSH_BUTTON_API_H
#include "src/Drivers/Api.h"

namespace Drivers
{
namespace PushButton
{
class Api: public Drivers::Api
{
    public:
        Api();

    public:
        void start();
        void stop();
};
};
};
#endif