
#include "Ram.h"

Ram::Ram() {
    statex.dwLength = sizeof (statex);
    GlobalMemoryStatusEx(&statex);
}

//Ram Size
DWORDLONG Ram::getRamSize() {
    return statex.ullTotalPhys;
}

//Used Ram Size
DWORDLONG Ram::getUsedRam() {
    return statex.ullTotalPhys - statex.ullAvailPhys;
}

//Percentage of Usage
DWORD Ram::getMemoryLoad() {
    return statex.dwMemoryLoad;
}
