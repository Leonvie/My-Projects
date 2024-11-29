#include <iostream>
#include <string>
#include <limits>
//#include <random> //use this inside of the enemy's attack
#include <chrono>
#include <complex.h>
#include <thread>


using namespace std;

/* 
IMPORTANT NOTES : 
-   add a round base combat, if you're finished the enemy will have its round 
-   randomize the enemy's combat with percentages depending on its health 
-   giving the player option between 'normal attack', 'strong attack' and 'heavy attack' 
    each attack has a different percentage to hit successfully otherwise missed. 
    example: normal(10 = 80% Strong = 60%(15 heavy = 30%(30) 
-   ADD HEALING TO THE GAME, SO THAT THE AI CAN DEFEND ITSELF 
 */

//attack percentages
    int normal_attack = 80;
    int strong_attack = 60;
    int heavy_attack = 30;

//The Enemy's Stats:
    int enemy_health = 100;
    int enemy_damage = 100;
    int enemy_blocked = 5;
//------------------------------------

//The Player's Stats:
    int plr_health = 100;
    int plr_damage = 15;
    int plr_block = 5;
    int plr_gold = 0;
    int plr_exp = 0;
//------------------------------------

//General Variables for actions taken:
    string plr_defend;
    string plr_attack;
    string plr_flee;
    string enemy_defend;
    string enemy_attack;
    string enemy_flee;




//------------------------------------
// Functions
//void check_GameOver(int plr_health);
//void check_Victory(int enemy_health);
//void attackEnemy(string player, string plr_attack, int& enemy_health, int plr_damage);
//General actions or main script:
int main() {
    string action;
    bool Input = false;
    bool player_turn = true;
    bool enemy_turn = false;

    //Gameplay state
    while (!Input) {
        if (player_turn) {
            cout << "would you like to Attack, Defend or Flee? (Defend / Flee isn't scripted yet)" << endl;
            cin >> action;

            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Please input your action." << endl;
                continue;
            }
            if (action == "Attack" or "attack") {
                cout << "You're attacking!" << endl;
                this_thread::sleep_for(chrono::seconds(1));
                cout << " ... " << endl;
                enemy_health -= plr_damage;
                this_thread::sleep_for(chrono::seconds(1));
                cout << "You did " << plr_damage << " damage!!" << endl;
                cout << "Enemy's current health is " << enemy_health << endl;
                cout << "" << endl;
                this_thread::sleep_for(chrono::seconds(1));

                // } else if (enemy == enemy_defend) {
                //    enemy_blocked -= plr_damage;
                player_turn = false;
                enemy_turn = true;
                if (enemy_health <= 0) {
                    plr_gold += 15;
                    plr_exp += 25;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "you won!" << endl;
                    cout << "you gained 15 Gold. and 25 Exp. from this." << endl;
                    return 0;
                }
            }

            //Enemy's action time----
            if (enemy_turn) {
                cout << "The enemy is attacking! " << endl;
                this_thread::sleep_for(chrono::seconds(1));
                cout << " ... " << endl;
                plr_health -= enemy_damage;
                this_thread::sleep_for(chrono::seconds(1));
                cout << "the enemy did " << enemy_damage << " damage!! " << endl;
                cout << "Your current health is " << plr_health << endl;
                cout << "" << endl;
                this_thread::sleep_for(chrono::seconds(1));
                enemy_turn = false;
                player_turn = true;
                if (plr_health <= 0) {
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << "Game Over!" << endl;
                    cout << "You got destroyed!" << endl;
                    return 0;
                }
            }
        }
    }
    return 0;
}
