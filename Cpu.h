
#ifndef SYSFETCH_CPU_H
#define SYSFETCH_CPU_H
#include <windows.h>


class Cpu {
public:
    SYSTEM_INFO systemInfo;

    Cpu();
    DWORD getNumberOfProcessors();
    WORD getProcessorArchitecture();
    

};


#endif //SYSFETCH_CPU_H
