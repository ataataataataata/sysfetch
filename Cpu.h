
#ifndef SYSFETCH_CPU_H
#define SYSFETCH_CPU_H
#include <string>
#include <windows.h>


class Cpu {
public:

    static DWORD getNumberOfProcessors();
    static WORD getProcessorArchitecture();
    static std::string getCpuName();

};


#endif //SYSFETCH_CPU_H
