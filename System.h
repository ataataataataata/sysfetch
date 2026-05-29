
#ifndef SYSFETCH_SYSTEM_H
#define SYSFETCH_SYSTEM_H

#include <string>
#include <windows.h>
#include <Lmcons.h>

class System {
public:
    std::string getComputerName();
    std::string getUserName();
    std::string getOsVersion();
};


#endif //SYSFETCH_SYSTEM_H
