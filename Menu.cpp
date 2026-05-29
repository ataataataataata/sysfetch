
#include "Menu.h"

#include <iostream>
#include "Uptime.h"

std::vector<std::string> Menu::getInfo() {
    return {
        System::getUserName() + "@" + System::getComputerName(),
        "---------------------------",
        "OS: " + System::getOsVersion(),
        "CPU: " + Cpu::getCpuName(),
        "GPU: " + Gpu::getGpuName(),
        "Memory: " + std::to_string(Ram::getUsedRam()) + "/" + std::to_string(Ram::getRamSize()) + " (" + std::to_string(Ram::getMemoryLoad()) + "% in use)",
    };
}

std::vector<std::string> Menu::getLogo() {
    return {
        win10art01,
        win10art02,
        win10art03,
        win10art04,
        win10art05,
        win10art06,
        win10art07,
        win10art08,
        win10art09,
        win10art10,
        win10art11,
        win10art12,
        win10art13,
        win10art14,
        win10art15,
        win10art16,
        win10art17,
        win10art18,
        win10art19,
        win10art20,
    };
}

void Menu::print() {
    auto logo = getLogo();
    auto info = getInfo();

    for (int i = 0; i < logo.size(); i++) {
        if (i < info.size()) {
            std::cout << BLUE << logo[i] << RESET << "    " << CYAN << info[i] << RESET << std::endl;
        } else {
            std::cout << BLUE << logo[i] << RESET << std::endl;
        }
    }
}


