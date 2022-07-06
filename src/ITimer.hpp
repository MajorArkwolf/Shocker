#pragma once

class ITimer {
    public:
    virtual ~ITimer {};
    virtual void Init() = 0;
};