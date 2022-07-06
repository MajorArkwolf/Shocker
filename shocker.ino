#include "TimeClient.hpp"
#include "TimerServer.hpp"

#define __SERVER__ 1

#ifdef __SERVER__
    ITimer* timer = new TimeServer();
#elif
    ITimer* timer = new TimeClient();
#endif

void setup() {
    timer->Init();
}

void loop() {
    
}