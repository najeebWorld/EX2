#include "game.hpp"
#include <iostream>
#include "player.hpp"
#include <stdexcept>
#include <string>

#define max_cards = 52;

using namespace std;
using namespace ariel ;

 Game::Game(Player &p1,Player &p2) : playerP1(p1),playerP2(p2){
    if (p1.stacksize() > 0 || p2.stacksize() > 0 ){
        throw invalid_argument("please waite until they finith the game");
    }
    
    if(&p1 == &p2){
        playerP1.setStatusPlay(false);
        playerP2.setStatusPlay(false);
    }
    

    else{
        playerP1.setCardsGo(26);
        playerP2.setCardsGo(26);
        playerP1.setDeck(26);
        playerP2.setDeck(26);
        playerP1.setStatusPlay(true);
        playerP2.setStatusPlay(true);

    }

    
    
 }

void Game::playTurn(){
    if(playerP1.stacksize() == 0 || playerP2.stacksize() == 0)
    {
        throw std::runtime_error("game over");

    }
    if(playerP1.stacksize()==0 && playerP2.stacksize() != 0)
    {
        throw std::runtime_error(playerP1.getName() + "dont have cards");
    }
    if(playerP2.stacksize()==0 && playerP1.stacksize() != 0)
    {
        throw std :: runtime_error(playerP2.getName() + "dont have cards");
    }

    //need to add here defination if they both have the same size of cards

    // try{
    //     card c1 = playe
    // }
}

void Game::printLastTurn(){}

void Game::playAll(){}

void Game::printWiner(){}

void Game::printLog(){}

void Game::printStats(){}
