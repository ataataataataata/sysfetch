
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

std::string System::getOsVersion() {
    OSVERSIONINFOEXA osVersionInfo;
    osVersionInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFOEXA);
    GetVersionExA((LPOSVERSIONINFOA)&osVersionInfo);
    std::string version = std::to_string(osVersionInfo.dwMajorVersion) + "." +
                          std::to_string(osVersionInfo.dwMinorVersion);

    if (osVersionInfo.dwBuildNumber >= 22000) {
        return "Windows 11 (Build " + std::to_string(osVersionInfo.dwBuildNumber) + ")";
    } else {
        return "Windows 10 (Build " + std::to_string(osVersionInfo.dwBuildNumber) + ")";
    }
}
