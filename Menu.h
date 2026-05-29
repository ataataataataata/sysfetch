
#ifndef SYSFETCH_MENU_H
#define SYSFETCH_MENU_H

#include "System.h"
#include "Cpu.h"
#include "Gpu.h"
#include "Ram.h"
#include <vector>
#include "Logo.h"
#include "Colors.h"

class Menu {
    public:
    static std::vector<std::string> getInfo();
    static std::vector<std::string> getLogo();
    static void print();
};


#endif //SYSFETCH_MENU_H
