#include <iostream>
#include <windows.h>
#include "Cpu.h"
#include "Gpu.h"
#include "System.h"

using namespace std;

int main() {
    Cpu cpu;
    cout << cpu.getProcessorArchitecture() << endl;
    cout << cpu.getNumberOfProcessors() << endl;
    cout << cpu.getCpuName() << endl;
    System sys;
    cout << sys.getComputerName() << endl;
    cout<<sys.getUserName()<<endl;
    cout << sys.getOsVersion() << endl;
    Gpu gpu;
    cout << gpu.getGpuName() << endl;


    return 0;
}