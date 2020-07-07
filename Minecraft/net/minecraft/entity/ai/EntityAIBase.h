#pragma once
#include <cstdint>

class EntityAIBase
{
public:
    virtual bool shouldExecute() = 0;
    virtual bool shouldContinueExecuting();
    bool isInterruptible();
    virtual void startExecuting();
    virtual void resetTask();
    virtual void updateTask();
    void setMutexBits(int32_t mutexBitsIn);
    int32_t getMutexBits() const;

private:
    int32_t mutexBits;
};
