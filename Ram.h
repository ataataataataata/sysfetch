
#ifndef SYSFETCH_RAM_H
#define SYSFETCH_RAM_H
#include "Cpu.h"


class Ram {
private:
    MEMORYSTATUSEX statex;
public:
    Ram();
    DWORDLONG getRamSize();
    DWORDLONG getUsedRam();
    DWORD getMemoryLoad();
};



#endif //SYSFETCH_RAM_H
