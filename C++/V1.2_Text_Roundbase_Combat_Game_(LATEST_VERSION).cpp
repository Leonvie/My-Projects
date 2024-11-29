#include <iostream>
#include <unistd.h> // this is for the function ''Sleep();''
#include <string>
#include <ctime>  // this is needed for the randomizer if your attack will successfully hit or not
#include <complex>
#include <limits>

/* 
 CHANGELOGS AND FUTURE UPDATES: 
  
-  Create an Enemy class [Yes] 
-  Create a Player class [Yes] 
-  Give it Health, Damage, and percentages depending on its health 
    if it chooses to attack, block or heal  [] 
-  Create a Player Class with Health, Damage  [YES] 
-  the game has to be round based and switch between the enemy and the Player [Yes] 
-  add an Input to the game, so that you can choose between Normal attack, strong attack and heavy [Yes] 
-  Idea how to add percentages = Make math, basically let it pick a number between 1 and 100 
    if it's a number under 80 (like 50,30,61) then the attack is successful, if it gets a number above 80 
    let the system do 0 dmg [Yes] 
-   add a name selection for the player [] 
-   Fix the Bug, create the randomized stuff inside of the player class, create new classes for normal,strong,heavy attacks and combine them with the percentages [YES] 
-   BUG = It executes the all the attacks, because of the if statement inside of the attacks, because attack equals <60 or >60 [FIXED] 
 */

class Player {
public:
    //----------------------------------------------------------------------- Variables (Stats)
    int plr_DMG = 15;
    int plr_DMG2 = 30;
    int plr_DMG3 = 50;

    int plr_health = 100;
    std::string plr_name = "Player1";

    //----------------------------------------------------------------------- Actions (Attack, usw.)
    void plr_attack1(int &enemy_health) {
        std::cout << plr_name << " is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << '.' << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
        enemy_health -= plr_DMG;
        std::cout << "You made [" << plr_DMG << " DMG]!" << std::endl;
        std::cout << "Goblin has [" << enemy_health << " HP] left!!" << std::endl;
    }
    void plr_attack2(int &enemy_health) {
        std::cout << plr_name << " is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << '.' << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
        enemy_health -= plr_DMG2;
        std::cout << "You made [" << plr_DMG2 << " DMG]!" << std::endl;
        std::cout << "Goblin has [" << enemy_health << " HP] left!!" << std::endl;
    }
    void plr_attack3(int &enemy_health) {
        std::cout << plr_name << " is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << '.' << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
        enemy_health -= plr_DMG3;
        std::cout << "You made [" << plr_DMG3 << " DMG]!" << std::endl;
        std::cout << "Goblin has [" << enemy_health << " HP] left!!" << std::endl;
    }
};

class Enemy {
public:
    //------------------------- Variables (Stats)
    int enemy_DMG = 15;
    int enemy_health = 100;
    std::string enemy_name = "Goblin";

    //------------------------- Actions (Attack, usw.)
    void enemy_attack(int &plr_health) {
        std::cout << enemy_name << " is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << "." << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
        plr_health -= enemy_DMG;
        std::cout << "The Goblin made [" << enemy_DMG << " DMG]!" << std::endl;
        std::cout << "Player has [" << plr_health << " HP] left!!" << std::endl;
    }
};

int main() {
    //Calling in the classes
    Enemy goblin1;
    Player player1;
    //-----------------------

    std::string action;
    bool player_turn = true;
    bool Input = false;

    //-----------------------------------------

    while (!Input) {
        if (player_turn) {
            std::cout << "How would you like to Attack?" << std::endl;
            std::cout << "- Normal" << std::endl;
            std::cout << "- Strong" << std::endl;
            std::cout << "- Heavy" << std::endl;
            std::cin >> action;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please input your action." << std::endl;
                continue;
            }

            if (action == "Normal" || action == "normal") {                                                 // NORMAL ATTACK!
                int normal_attack = (rand() % 100) + 1;
                if (normal_attack <= 80) {
                    player1.plr_attack1(goblin1.enemy_health);   // Add a new variable with 10 Dmg in here (currently 15)
                } else {
                    std::cout << "You missed your Normal-Attack!" << std::endl;
                }
                player_turn = false;

            } else if (action == "Strong" || action == "strong") {                                          // STRONG ATTACK!
                int strong_attack = (rand() % 100) + 1;
                if (strong_attack <= 60) {
                    player1.plr_attack2(goblin1.enemy_health);   // Add a new variable with 20 Dmg in here (currently 15)
                } else {
                    std::cout << "You missed your Strong-Attack!" << std::endl;
                }
                player_turn = false;

            } else if (action == "Heavy" || action == "heavy") {                                            // HEAVY ATTACK!
                int heavy_attack = (rand() % 100) + 1;
                if (heavy_attack <= 40) {
                    player1.plr_attack3(goblin1.enemy_health);   // Add a new variable with 50 Dmg in here (currently 15)
                } else {
                    std::cout << "You missed your Heavy-Attack!" << std::endl;
                }
                player_turn = false;

            } else {
                std::cout << "Invalid action! Please choose Normal, Strong, or Heavy." << std::endl;
            }

            if (goblin1.enemy_health <= 0) {
                std::cout << "You won!!!!" << std::endl;
                return 0;
            }
        }

        if (!player_turn) {
            sleep(3);
            goblin1.enemy_attack(player1.plr_health);
            player_turn = true;
            if (player1.plr_health <= 0) {
                std::cout << "You died!" << std::endl;
                return 0;
            }
        }
    }
}
