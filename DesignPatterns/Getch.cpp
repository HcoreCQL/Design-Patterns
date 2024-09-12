//
//  Getch.cpp
//  DesignPatterns
//
//  Created by Orlando‘s Mac on 2024/9/12.
//

#include "Getch.hpp"
#include <termios.h>
#include <unistd.h>
#include <cstdio>


int getch() {
    struct termios oldt, newt;
    int ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}
