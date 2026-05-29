
#ifndef SYSFETCH_SYSTEM_H
#define SYSFETCH_SYSTEM_H

#include <string>
#include <windows.h>
#include <Lmcons.h>

class System {
public:
    static std::string getComputerName();
    static std::string getUserName();
    static std::string getOsVersion();
};


#endif //SYSFETCH_SYSTEM_H
