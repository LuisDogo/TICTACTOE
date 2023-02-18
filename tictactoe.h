#include <iostream>
#include <utility>
using namespace std;




void player_turn(char game[3][3]){

}

void bot_turn(char game[3][3]){
    
}

void gameplay(){
    bool endgame = false;
    char game[3][3];
    while (endgame == false)
    {
        player_turn(game);
        bot_turn(game);
    }
}