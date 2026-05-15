#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// =====================================================================
// UTILITY ENGINE: CINEMATIC EFFECTS (THE SNYDER & NOLAN TOOLS)
// =====================================================================

void sleep_ms(int ms) {
   ()
   ( std::this_thread::sleep_for(std::chrono::milliseconds(ms));
}

// Standard typewriter effect
void typeText(const string& text, int delay = 30) {
    for (char c : text) {
        cout << c << flush;
        sleep_ms(delay);
    }
    cout << endl;
}

// Zack Snyder signature: Hyper slow-motion emphasis for brutal/dramatic moments
void slowMo(const string& text) {
    cout << "\n[SLOW-MOTION SCENE]" << endl;
    sleep_ms(500);
    for (char c : text) {
        cout << c << flush;
        sleep_ms(150); // Painfully slow, dramatic
    }
    cout << endl;
    sleep_ms(1000);
}

// Glitch text for psychological breaks
void glitchText(const string& text) {
    for (char c : text) {
        if (rand() % 10 == 0) {
            char randomChar = 33 + (rand() % 94); // random printable ASCII
            cout << randomChar << flush;
        } else {
            cout << c << flush;
        }
        sleep_ms(20);
    }
    cout << endl;
}

void clearScreen() {
    // Cross-platform clear screen (mostly for aesthetics)
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// =====================================================================
// ASCII ART ASSETS (HIGH CONTRAST)
// =====================================================================

void drawTitle() {
    cout << R"(
  ██████  ▄▄▄█████▓ ▄▄▄       ██▀███   █████▒▄▄▄       ██▓     ██▓    
▒██    ▒  ▓  ██▒ ▓▒▒████▄    ▓██ ▒ ██▒▓██   ▒▒████▄    ▓██▒    ▓██▒    
░ ▓██▄    ▒ ▓██░ ▒░▒██  ▀█▄  ▓██ ░▄█ ▒▒████ ░▒██  ▀█▄  ▒██░    ▒██░    
  ▒   ██▒ ░ ▓██▓ ░ ░██▄▄▄▄██ ▒██▀▀█▄  ░▓█▒  ░░██▄▄▄▄██ ▒██░    ▒██░    
▒██████▒▒   ▒██▒ ░  ▓█   ▓██▒░██▓ ▒██▒░▒█░    ▓█   ▓██▒░██████▒░██████▒
▒ ▒▓▒ ▒ ░   ▒ ░░    ▒▒   ▓▒█░░ ▒▓ ░▒▓░ ▒ ░    ▒▒   ▓▒█░░ ▒░▓  ░░ ▒░▓  ░
░ ░▒  ░ ░     ░      ▒   ▒▒ ░  ░▒ ░ ▒░ ░       ▒   ▒▒ ░░ ░ ▒  ░░ ░ ▒  ░
░  ░  ░     ░        ░   ▒     ░░   ░  ░ ░     ░   ▒     ░ ░     ░ ░   
      ░                  ░  ░   ░                  ░  ░    ░  ░    ░  ░
                                                                       
                     THE SINGULARITY PARADOX
)" << '\n';
}

void drawBlackHole() {
    cout << R"(
                             ....
                        .::::::::::.
                      .:::::;;;;:::::.
                     .::::;;;;;;;;::::.
                    .::::;;;;;;;;;;::::.
                    ::::;;;;;██;;;;;::::
                    ::::;;;;████;;;;::::
                    '::::;;;████;;;;::::'
                     '::::;;;;██;;;;:::'
                       '::::;;;;;;;:::'
                          ':::::::::'
                               ''
)" << '\n';
}

void drawMonster() {
    cout << R"(
                        .-.
                       (o.o)
                        |=|
                       __|__
                     //.=|=.\\
                    // .=|=. \\
                    \\ .=|=. //
                     \\(_=_)//
                      (:| |:)
                       || ||
                       () ()
                       || ||
                       || ||
                      ==' '==
)" << '\n';
}

// =====================================================================
// GAME STATE & CLASSES
// =====================================================================

class Player {
public:
    string name;
    int oxygen;
    int sanity;
    int chronos;
    int health;
    vector<string> inventory;

    Player(string n) {
        name = n;
        oxygen = 100;
        sanity = 100;
        chronos = 0;
        health = 100;
    }

    void showStats() {
        cout << "\n========================================" << endl;
        cout << " COMMANDER: " << name << " | HP: " << health << "%" << endl;
        cout << " O2: " << oxygen << "% | SANITY: " << sanity << "% | CHRONOS: " << chronos << endl;
        cout << "========================================" << endl;
    }

    bool hasItem(const string& item) {
        return find(inventory.begin(), inventory.end(), item) != inventory.end();
    }

    void addItem(const string& item) {
        inventory.push_back(item);
        cout << "[+] Acquired: " << item << endl;
    }
};

// =====================================================================
// COMBAT ENGINE
// =====================================================================

bool combatEncounter(Player& player, string enemyName, int enemyHP, int enemyDmg) {
    sleep_ms(1000);
    cout << "\n>>> COMBAT INITIATED: " << enemyName << " <<<" << endl;
    
    while (player.health > 0 && enemyHP > 0) {
        player.showStats();
        cout << enemyName << " HP: " << enemyHP << endl;
        
        cout << "\n[1] Plasma Burst (Standard Attack)" << endl;
        cout << "[2] Defensive Posture (Restore 10 O2, half damage taken)" << endl;
        if (player.hasItem("Quantum Blade")) {
            cout << "[3] Quantum Strike (High Damage, Costs Sanity)" << endl;
        }
        
        cout << "Action: ";
        string choice;
        getline(cin, choice);
        
        int damageDealt = 0;
        int damageTaken = enemyDmg + (rand() % 10 - 5);
        
        if (choice == "1") {
            damageDealt = 20 + (rand() % 10);
            typeText("You fire a blinding plasma bolt into the dark.", 20);
        } 
        else if (choice == "2") {
            damageTaken /= 2;
            player.oxygen += 10;
            if (player.oxygen > 100) player.oxygen = 100;
            typeText("You brace for impact, regulating your breathing.", 20);
        } 
        else if (choice == "3" && player.hasItem("Quantum Blade")) {
            damageDealt = 50 + (rand() % 20);
            player.sanity -= 15;
            slowMo("You ignite the blade. Reality tears as you slice through space itself.");
        } 
        else {
            typeText("Invalid input. You hesitate, leaving yourself open!", 20);
            damageDealt = 0;
            damageTaken *= 1.5;
        }
        
        // Resolve turn
        if (damageDealt > 0) {
            enemyHP -= damageDealt;
            cout << ">>> You hit for " << damageDealt << " damage!" << endl;
        }
        
        if (enemyHP > 0) {
            sleep_ms(800);
            cout << "<<< " << enemyName << " strikes you for " << damageTaken << " damage!" << endl;
            player.health -= damageTaken;
            player.sanity -= 5; // Taking damage is scary
        }
    }
    
    if (player.health <= 0) {
        slowMo("Your vision fades to black. The loop continues without you.");
        return false; // Player died
    } else {
        typeText(enemyName + " disintegrates into ash.", 40);
        player.chronos += 50;
        return true; // Player won
    }
}

// =====================================================================
// ACT 1: THE WAKING NIGHTMARE
// =====================================================================

void act1(Player& player) {
    clearScreen();
    drawTitle();
    sleep_ms(2000);
    
    typeText("PROLOGUE: THE CYCLE");
    sleep_ms(1000);
    
    typeText("Earth fell 4,000 years ago. You are the Commander of the USG Memento, a colony ship bound for the Andromeda galaxy.");
    typeText("But you are not in Andromeda. You are nowhere.");
    
    sleep_ms(1500);
    cout << "\n[ SYSTEM: CRYO-POD 01 DISENGAGED. VITAL SIGNS STABLE. ]" << endl;
    sleep_ms(1000);
    
    typeText("You open your eyes. The cryo-fluid drains in slow motion.");
    slowMo("Droplets hang in the zero-gravity air like glass pearls. Red emergency strobes paint the room in blood and shadow.");
    
    while(true) {
        player.showStats();
        cout << "\nYou are in the Cryo-Chamber. Exits:" << endl;
        cout << "[1] Inspect the adjacent cryo-pods." << endl;
        cout << "[2] Move to the Bridge." << endl;
        cout << "[3] Move to the Armory." << endl;
        
        string choice;
        cout << "\nChoice: ";
        getline(cin, choice);
        
        if (choice == "1") {
            typeText("You wipe the frost off Pod 02. It belongs to your Lieutenant.");
            sleep_ms(1000);
            glitchText("IT IS EMPTY. THE GLASS IS SHATTERED FROM THE INSIDE.");
            player.sanity -= 10;
        } 
        else if (choice == "2") {
            typeText("The heavy airlock to the Bridge hisses open.");
            break; // Move to next act
        } 
        else if (choice == "3") {
            typeText("You enter the Armory. Weapons are scattered everywhere.");
            if (!player.hasItem("Plasma Pistol")) {
                player.addItem("Plasma Pistol");
                typeText("You grip the weapon. It feels familiar. Too familiar.");
            } else {
                typeText("Nothing else useful here.");
            }
        } 
        else {
            typeText("Command not recognized.");
        }
    }
}

// =====================================================================
// ACT 2: THE FRACTURED TIMELINE
// =====================================================================

void act2(Player& player) {
    clearScreen();
    sleep_ms(1000);
    typeText("ACT I: THE GHOST IN THE MACHINE", 50);
    sleep_ms(1000);
    
    typeText("You step onto the Bridge. Through the massive blast shields, you expect to see stars.");
    typeText("Instead, you see it.");
    drawBlackHole();
    sleep_ms(2000);
    
    slowMo("A supermassive black hole. Its accretion disk burns with a violent, violet fire, warping the very fabric of space.");
    
    typeText("\nThe ship's AI, 'AURA', crackles over the intercom.");
    glitchText("AURA: Commander... loop cycle 894,002... initiated.");
    player.sanity -= 20;
    
    bool bridgeExplored = false;
    
    while(true) {
        player.showStats();
        cout << "\nYou are on the Bridge. The silence is deafening." << endl;
        cout << "[1] Check the main flight console." << endl;
        cout << "[2] Listen to the distress signal." << endl;
        cout << "[3] Proceed to the Cargo Bay." << endl;
        
        string choice;
        cout << "\nChoice: ";
        getline(cin, choice);
        
        if (choice == "1" && !bridgeExplored) {
            typeText("You access the logs. The ship has been orbiting this black hole for 3 million years.");
            typeText("Time dilation means only days have passed for you.");
            player.sanity -= 15;
            bridgeExplored = true;
        } 
        else if (choice == "2") {
            typeText("You tune into a faint radio frequency.");
            sleep_ms(1000);
            typeText("VOICE: 'Don't go to the cargo bay. Whatever you do... don't let it out.'");
            typeText("The terrifying part? The voice is yours.");
            player.sanity -= 20;
        } 
        else if (choice == "3") {
            if (!player.hasItem("Plasma Pistol")) {
                typeText("You instinctively feel going down there unarmed is suicide. (Hint: Check the Armory in the previous room, or force your way?).");
                cout << "Force your way? (y/n): ";
                string force;
                getline(cin, force);
                if (force == "y") {
                    typeText("You force the door open...");
                    break;
                }
            } else {
                typeText("You draw your pistol and head down the dark corridor.");
                break;
            }
        }
    }
}

// =====================================================================
// ACT 3: THE SNYDER COMBAT SEQUENCE
// =====================================================================

void act3(Player& player) {
    clearScreen();
    typeText("ACT II: THE MIRROR'S EDGE", 50);
    sleep_ms(1000);
    
    typeText("The Cargo Bay is massive, a cathedral of steel and shipping crates.");
    typeText("Gravity is broken here. Drops of engine coolant float upward like neon rain.");
    
    slowMo("Lightning from the nebula outside casts long, harsh shadows across the bay.");
    
    drawMonster();
    sleep_ms(1500);
    
    typeText("Something drops from the ceiling.");
    typeText("It is a humanoid figure wearing a USG Commander suit. YOUR suit.");
    glitchText("Its face is a twisted, melted version of your own.");
    
    if(!combatEncounter(player, "Temporal Echo", 100, 25)) {
        return; // Player died, handled in main
    }
    
    typeText("The Echo collapses, its body evaporating into chronological dust.");
    typeText("Amongst the ashes, you find a glowing, vibrating object.");
    player.addItem("Quantum Blade");
    player.addItem("Singularity Core");
}

// =====================================================================
// ACT 4: THE TESSERACT (NOLAN CLIMAX)
// =====================================================================

void act4(Player& player) {
    clearScreen();
    typeText("ACT III: THE EVENT HORIZON", 50);
    sleep_ms(1000);
    
    typeText("You take the elevator down to the ship's Engine Core.");
    typeText("The walls of the elevator begin to stretch. Geometry loses its meaning.");
    
    slowMo("You are no longer moving through space. You are moving through time.");
    
    typeText("You enter the Engine Room. The core is dead. But hovering above it is a 4-dimensional Tesseract.");
    typeText("AURA's voice is clear now, free of glitches.");
    typeText("AURA: 'The Echoes you fight are your past failures. Millions of them. You keep waking up, fighting yourself, and resetting the timeline to save Earth.'");
    
    sleep_ms(2000);
    typeText("AURA: 'Earth was never destroyed by aliens. It was destroyed by the blast from this ship's warp drive when you tried to escape the black hole.'");
    player.sanity -= 50; // The ultimate twist
    
    typeText("\nThe paradox is revealed. You are the destroyer.");
}

// =====================================================================
// FINALE: THE CHOICES
// =====================================================================

void act5(Player& player) {
    sleep_ms(2000);
    clearScreen();
    typeText("EPILOGUE: THE SINGULARITY", 50);
    
    player.showStats();
    
    typeText("\nThe Tesseract pulses in front of you. You hold the Singularity Core.");
    typeText("You have three choices.");
    
    cout << "\n[1] IGNITE THE DRIVE (Attempt to escape back to Earth)." << endl;
    cout << "[2] DESTROY THE SHIP (Die here, ensuring Earth is never hit by the blast)." << endl;
    if (player.hasItem("Quantum Blade") && player.sanity < 50) {
        cout << "[3] SEVER THE TIMELINE (Use the Quantum Blade on the Tesseract)." << endl;
    }
    
    string choice;
    while(true) {
        cout << "\nYour final command: ";
        getline(cin, choice);
        
        if (choice == "1") {
            slowMo("You slot the core into the drive. The engines roar to life.");
            typeText("Space bends around you as the ship launches into warp speed.");
            sleep_ms(2000);
            glitchText("But as you exit warp, you see Earth. The shockwave of your arrival tears the planet apart in atomic fire.");
            typeText("You scream into the void. The timeline resets.");
            break;
        } 
        else if (choice == "2") {
            slowMo("You overload the core. Sirens wail as the temperature goes critical.");
            typeText("You sit in the Commander's chair, watching the beautiful, violent fire of the black hole.");
            sleep_ms(2000);
            typeText("The ship detonates in a flash of white light.");
            typeText("On a green, peaceful Earth, humanity looks up at a distant, harmless shooting star.");
            typeText("You saved them. By dying in the dark.");
            break;
        } 
        else if (choice == "3" && player.hasItem("Quantum Blade") && player.sanity < 50) {
            slowMo("Driven completely mad by the paradox, you ignite the Quantum Blade.");
            typeText("You plunge the blade directly into the fabric of the 4D Tesseract.");
            
            sleep_ms(2000);
            clearScreen();
            glitchText("ERROR ERROR ERROR");
            glitchText("UNIVERSE.EXE HAS STOPPED RESPONDING");
            
            typeText("\nYou shatter the simulation.");
            typeText("You wake up in a server room in the year 2145. You are not a Commander. You are an AI testing crisis scenarios.");
            typeText("A scientist looks at you.");
            typeText("'Simulation 894,002 failed. Boot it up again.'");
            break;
        } 
        else {
            typeText("There is no time for indecision.");
        }
    }
}

// =====================================================================
// MAIN LOOP
// =====================================================================

int main() {
    srand(time(0)); // Seed random number generator
    
    clearScreen();
    typeText("INITIALIZING SYSTEM...", 100);
    sleep_ms(500);
    
    string playerName;
    cout << "\nENTER COMMANDER NAME: ";
    getline(cin, playerName);
    
    if(playerName.empty()) playerName = "John Doe";
    
    Player player(playerName);
    
    // Game Flow
    act1(player);
    if(player.health <= 0) goto GAMEOVER;
    
    act2(player);
    if(player.health <= 0) goto GAMEOVER;
    
    act3(player);
    if(player.health <= 0) goto GAMEOVER;
    
    act4(player);
    if(player.health <= 0) goto GAMEOVER;
    
    act5(player);
    
    // Outro
    sleep_ms(3000);
    clearScreen();
    cout << "\n=========================================================" << endl;
    cout << "                        DIRECTED BY                      " << endl;
    cout << "                        ZACK SNYDER                      " << endl;
    cout << "                                                         " << endl;
    cout << "                        WRITTEN BY                       " << endl;
    cout << "                     CHRISTOPHER NOLAN                   " << endl;
    cout << "=========================================================" << endl;
    cout << "\nFinal Stats for " << player.name << ":" << endl;
    cout << "Sanity Remaining: " << player.sanity << "%" << endl;
    cout << "Chronos Fragments: " << player.chronos << endl;
    
    return 0;
    
GAMEOVER:
    sleep_ms(2000);
    clearScreen();
    glitchText("TIMELINE FRACTURED. CRITICAL FAILURE.");
    cout << "\n================= GAME OVER =================" << endl;
    return 0;
}