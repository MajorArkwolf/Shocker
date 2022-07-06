#pragma once
#include "ITimer.hpp"
#include <Chronos.h>

class TimeClient : ITimer {
    public:
    TimeClient() = default;
    void Init() override;

    private:
    int id = 0;

};