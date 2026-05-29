
#ifndef SYSFETCH_RAM_H
#define SYSFETCH_RAM_H
#include "Cpu.h"


class Ram {
public:
    static DWORDLONG getRamSize();
    static DWORDLONG getUsedRam();
    static DWORD getMemoryLoad();
};



#endif //SYSFETCH_RAM_H
