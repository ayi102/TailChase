#ifndef COMPONENT_PB_MONITOR_H
#define COMPONENT_PB_MONITOR_H

namespace Component
{
    class PbMonitor
    {
        public:
            PbMonitor();

        public:
            void init();
            void start();
            void stop();
            void update();
    };
};
#endif