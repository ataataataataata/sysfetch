
#include "Cpu.h"

Cpu::Cpu() {
    GetSystemInfo(&systemInfo);
}

//CPU Cores
DWORD Cpu::getNumberOfProcessors() {
    return systemInfo.dwNumberOfProcessors;
}

//CPU Architecture
WORD Cpu::getProcessorArchitecture() {
    return systemInfo.dwProcessorType;
}
