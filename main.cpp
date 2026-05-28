#include <iostream>
#include <windows.h>
#include "Cpu.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.

using namespace std;

int main() {
    Cpu cpu;
    cout << cpu.getProcessorArchitecture() << endl;
    cout << cpu.getNumberOfProcessors() << endl;

    return 0;
}