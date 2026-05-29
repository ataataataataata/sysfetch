#include <iostream>
#include <windows.h>
#include "Cpu.h"
#include "Gpu.h"
#include "System.h"

using namespace std;

int main() {

    cout << Cpu::getProcessorArchitecture() << endl;
    cout << Cpu::getNumberOfProcessors() << endl;
    cout << Cpu::getCpuName() << endl;

    cout << System::getComputerName() << endl;
    cout<<System::getUserName()<<endl;
    cout << System::getOsVersion() << endl;

    cout << Gpu::getGpuName() << endl;


    return 0;
}