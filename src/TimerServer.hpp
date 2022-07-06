#pragma once
#include "ITimer.hpp"

class TimeServer : ITimer {
    public:
    TimeServer() = default;
    void Init() override;

    private:
    int m_clients[10] = {};
};