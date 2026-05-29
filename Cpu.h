
#ifndef SYSFETCH_CPU_H
#define SYSFETCH_CPU_H
#include <string>
#include <windows.h>


class Cpu {
public:
    SYSTEM_INFO systemInfo;

    Cpu();
    DWORD getNumberOfProcessors();
    WORD getProcessorArchitecture();

    std::string getCpuName();

};


#endif //SYSFETCH_CPU_H
