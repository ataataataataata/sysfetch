
#include "System.h"


std::string System::getComputerName() {
    char computerName[MAX_COMPUTERNAME_LENGTH + 1];
    DWORD size = MAX_COMPUTERNAME_LENGTH+1;
    GetComputerNameA(computerName, &size);

    return computerName;
}

std::string System::getUserName() {
    char userName[UNLEN+ 1];
    DWORD size = UNLEN + 1;
    GetUserNameA(userName, &size);

    return userName;
}
