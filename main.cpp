#include <iostream>
#include <windows.h>
#include "Cpu.h"


using namespace std;

int main() {
    Cpu cpu;
    cout << cpu.getProcessorArchitecture() << endl;
    cout << cpu.getNumberOfProcessors() << endl;

    return 0;
}