#include <stdio.h>
#include <string.h>

const char* getRaceName(int id) {
    if (id==0) {
        return "human";
    }
    if (id==1) {
        return "elf";
    }
    if (id==2) {
        return "orc";
    }
}