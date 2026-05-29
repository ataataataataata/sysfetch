
#include "Ram.h"


//Ram Size
DWORDLONG Ram::getRamSize() {
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx(&statex);
    return statex.ullTotalPhys;
}

//Used Ram Size
DWORDLONG Ram::getUsedRam() {
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx(&statex);
    return statex.ullTotalPhys - statex.ullAvailPhys;
}

//Percentage of Usage
DWORD Ram::getMemoryLoad() {
    MEMORYSTATUSEX statex;
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx(&statex);
    return statex.dwMemoryLoad;
}
