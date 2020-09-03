struct Character {
    const char* name;
    int level;
    int race; // 0=Human, 1=Elf, 2=Orc, 3=Minotaur

    // Player Stats
    int str; // Strength - Affects physical-based attacks
    int dex; // Dexterity - Affects control over attacks
    int spt; // Spirit - Affects magic-based attacks

    // Armor
    int helmet;
    int armor;
    int gloves;
    int pauldron;
    int leggings;

    //Weapons
    int weapon;
    int subweapon;

    //Accessories
    int rightRing;
    int leftRing;
    int necklace;
    int bracelet;
};