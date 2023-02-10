#include <iostream>
#include <utility>
using namespace std;

void player_turn(){

}

void bot_turn(){

}

void gameplay(){
    bool endgame = false;
    while (endgame == false)
    {
        player_turn();
        bot_turn();
    }
}