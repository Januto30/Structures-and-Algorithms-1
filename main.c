#include "menu.h"
#include <stdio.h>

int main() {
    int a = 1;
    while (a != 0) {
        int option1, option2;
        menu();
        option1 = select_option();
        print_option(option1);
    }
    return 0;
}