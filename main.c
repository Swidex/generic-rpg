#include <stdio.h>
#include <string.h>
#include "characterStr.h"
#include "newGame.h"

void loadSave() {
    printf("\nFinished loading save!\n");
}

int mainMenu() {
    printf("\nWelcome to unnamedRPG!\nWould you like to create a new game or load into save?\n1 - New Game\n2 - Load Save\n3 - Exit\n");
    int newOrLoad;
    mainMenuSelection:
    printf("\n> ");
    scanf("%d",&newOrLoad);
    if (newOrLoad>=1 && newOrLoad<=3) {
        if (newOrLoad==1) {
            printf("\nCreating New Game...");
            newGame();
        }
        if (newOrLoad==2) {
            printf("\nLoading Save...");
            loadSave();
        }
        if (newOrLoad==3) {
            printf("\nExiting Game...");
        }
    } else {
        printf("Invalid Input, Please try again!\n");
        goto mainMenuSelection;
    }
    return 0;
}

int main() {
    mainMenu();
}
