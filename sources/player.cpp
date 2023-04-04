// #pragma once
#include "../sources/player.hpp"
#include <iostream>
#include "card.hpp"
#include <vector>
#include <algorithm>
#include "card.cpp"


using namespace std;
using namespace ariel;

//vector <card> deck;

const int typs = 4;
const int val = 13; 

 Player::Player(string name){
    this->name = name;
    this->cards_go = 0;//new player has no cards lose

 }


Player::Player(){
    // card c1;
    // deck.clear();

    // char su[] {'C','D','H','S'};

    // for(int i =0 ; i < 14 ; i++){
    //     for(int j =0; j < 4; j++){

    //         deck.push_back(card(su[j],i));
    //     }

    // }

    // shuffle();

}//default constractor 



// Player Player::fullSize(){//create 26 cards with the player 
//     Player p1;

//     Type1 typ [typs] = {clubs,diamonds,hearts,spades};
//     Value valu [val] = {two ,three,four,five,six,seven,eight,nine,ten,jack,queen,king,ace};

//     for (int i = 0; i < typs; i++)
//     {
//         for(int j = 0 ; j < val; j++){

//             p1.addCard(card(typ[i],valu[j]));
//         }
//     }
//     return p1;

    
// }

// void pleyer :: shuffle (){
    
//     random_shuffle(deck.begin(),deck.end);
// }

int Player :: cardsGo(){
    return this->cards_go;
}

void Player :: setCardsGo (int cards){
    this->cards_go = cards;
}

int Player::cardesTaken(){
    return this->cards_win;
}

int Player::stacksize(){
    return this->cards_go;
}

int Player :: cardsWin (){
    return this->cards_win;
}

void Player :: setCardsWin(int cards){
    this->cards_win +=cards;
}

void Player::setName(string name){
    this->name = name;
}

vector <card> Player :: getDeck(){
    return this->cards;
}


string Player::getName(){
    
    return this->name;
}
 //void Player::addCard(card c1){}

//  card Player::playCard(int c){
//     card c1; 
//     return c1;
//  }



 bool Player::isPlaying(){
    return this->playing;
 }

 void Player::setStatusPlay(bool turn ){
    this->playing = turn;
 }

 void Player :: setDeck(int number){
    for (int i = 0; i < number; i++)
    {
        card *c1 = new card();
        this->cards.push_back(*c1);
    }
    
 }
