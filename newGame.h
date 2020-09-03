#include <stdio.h>
#include <string.h>
#include "idFetch.h"

void newGame() {
    struct Character playerCharacter;

    setName:
    printf("\nWhat is your name, Adventurer?\n");
    char* tempName;
    printf("\n> ");
    scanf("%s",tempName);
    int confirmName;
    confirmNameSelection:
    printf("\nAre you okay with this?\n");
    printf("1 - Yes\n2 - No\n");
    printf("\n> ");
    scanf("%d",&confirmName);
    if (confirmName==1){
        playerCharacter.name = tempName;
        } else {
        if (confirmName==2) {
            goto setName;
        } else {
            goto confirmNameSelection;
        }
    }

    printf("\nWhat race were you born into, %s?\n",playerCharacter.name);
    int tempRace = 0;
    printf("1 - Human (Balanced Stats)\n2 - Elf (Spirit-Focused Stats)\n3 - Orc (Strength-Focused Stats)\n");
    setRace:
    printf("\n> ");
    scanf("%d",&tempRace);
    if (tempRace>=1 && tempRace<=4) {
        if (tempRace==1) {
            printf("\nYou have selected: Human\n");
        }
        if (tempRace==2) {
            printf("\nYou have selected: Elf\n");
        }
        if (tempRace==3) {
            printf("\nYou have selected: Orc\n");
        }
    } else {
        printf("Invalid Input, Please try again!\n");
        goto setRace;
    }
    int confirmRace = 0;
    confirmRaceSelection:
    printf("\nAre you okay with this?\n");
    printf("1 - Yes\n2 - No\n");
    printf("\n> ");
    scanf("%d",&confirmRace);
    if (confirmRace==1) {
        if (tempRace==1) {
            playerCharacter.race = 0;
            playerCharacter.str = 4;
            playerCharacter.spt = 4;
            playerCharacter.dex = 2;
        }
        if (tempRace==2) {
            playerCharacter.race = 1;
            playerCharacter.str = 2;
            playerCharacter.spt = 6;
            playerCharacter.dex = 2;
        }
        if (tempRace==3) {
            playerCharacter.race = 2;
            playerCharacter.str = 6;
            playerCharacter.spt = 2;
            playerCharacter.dex = 2;
        }
    } else {
        if (confirmRace==2) {
            goto setRace;
        } else {
            goto confirmRaceSelection;
        }
    }
    
    printf("\nYour parents named you %s.\nYou were born in a town named Otaco as a/an %s.\n",
        playerCharacter.name,
        getRaceName(playerCharacter.race)
    );
}