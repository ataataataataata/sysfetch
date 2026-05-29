
#include "Cpu.h"


//CPU Cores
DWORD Cpu::getNumberOfProcessors() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.dwNumberOfProcessors;
}

//CPU Architecture
WORD Cpu::getProcessorArchitecture() {
    SYSTEM_INFO systemInfo;
    GetSystemInfo(&systemInfo);
    return systemInfo.dwProcessorType;
}

std::string Cpu::getCpuName() {
    HKEY key;

    RegOpenKeyExA(
    HKEY_LOCAL_MACHINE,
    "HARDWARE\\DESCRIPTION\\System\\CentralProcessor\\0",
    0,
    KEY_READ,
    &key
    );

    char buffer[256];
    DWORD size = sizeof(buffer);
    RegQueryValueExA(key,"ProcessorNameString",NULL,NULL,(LPBYTE)buffer,&size);
    return buffer;
}
