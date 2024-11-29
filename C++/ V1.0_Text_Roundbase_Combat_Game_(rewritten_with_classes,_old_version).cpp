#include <iostream>
#include <unistd.h> // this is for the function ''Sleep();''
#include <string>
#include <random>   // this is needed for the randomizer if you attack will successfully hit or not
#include <complex>
#include <limits>


/* 
1-  Create an Enemy class [] 
2-  Create a Player class [] 
3-  Give it Health, Damage, and percentages depending on its health 
    if it chooses to attack, block or heal  [] 
4-  Create a Player Class with Health, Damage  [] 
5-  the game has to be round based and switch between the enemy and the Player [] 
6-  add an Input to the game, so that you can choose between Normal attack, strong attack and heavy [] 
7-  Idea how to add percentages = Make math, basically let it pick a number between 1 and 100 
    if it's a number under 80 (like 50,30,61) then the attack is successful, if it gets a number above 80 
    let the system do 0 dmg 
8-  add a name selection for Player 
 */

// PERCENTAGES UNUSED YET
int Normal_attackChance = 80;
int Heavy_attackChance = 60;
int Strong_attackChance = 30;
// DAMAGE UNUSED YET
int Normal_attackDMG = 10;
int Heavy_attackDMG = 20;
int Strong_attackDMG = 40;




class Player {
    public:
    //------------------------- Variables (Stats)

        int plr_DMG = 15;
        int plr_health = 100;
        std::string plr_name = "Player1";

    //------------------------- Actions (Attack, usw.)

    void plr_attack(int &enemy_health) {
        std::cout << plr_name << " Is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << '.' << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
        enemy_health -= plr_DMG;
        std::cout << "You made " << plr_DMG << " DMG!" << std::endl;
        std::cout << "Goblin has " << enemy_health << " HP left!!" << std::endl;
    }
    //--------------------------

};


class Enemy {

    //------------------------- Variables (Stats)
    public:
        int enemy_DMG = 15;
        int enemy_health = 100;
        std::string enemy_name = "Goblin";

    //------------------------- Actions (Attack, usw.)

    void enemy_attack(int &plr_health){
        std::cout << enemy_name << " Is attacking!" << std::endl;
        for (int i = 1; i <= 4; i++) {          //----This counts to 4 and then executes the attack
            std::cout << "." << std::endl;
            usleep(500000);                     //---- 0.5 secs
        }
         plr_health -= enemy_DMG;
        std::cout << "The Goblin made " << enemy_DMG << " DMG!" << std::endl;
        std::cout << "Player has " << plr_health << " HP left!!" << std::endl;
    }
    //--------------------------

};






int main() {
    std::string action;
    bool player_turn = true;
    bool Input = false;

    Enemy goblin1;
    Player player1;

    while (!Input) {
        if (player_turn) {
            std::cout << "would you like to Attack, Defend or Flee? (Defend / Flee isn't scripted yet)" << std::endl;
            std::cin >> action;

            if (std::cin.fail()) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Please input your action." << std::endl;
                continue;
            }
            if (action == "Attack" or "attack") {
                //ADD THE EVENTS THAT HAPPEN WHEN YOU CHOOSE TO ATTACK
                sleep(1);
                player1.plr_attack(goblin1.enemy_health);
                player_turn = false;
                if (goblin1.enemy_health <= 0) {
                    std::cout << "You won!!!!" << std::endl;
                    return 0;
                }
            }
        }
        if (!player_turn) {
            sleep(3);
            }
            goblin1.enemy_attack(player1.plr_health);
            player_turn = true;
            if (player1.plr_health <= 0) {
                std::cout << "You died!" << std::endl;
                return 0;
        }

    }
}
