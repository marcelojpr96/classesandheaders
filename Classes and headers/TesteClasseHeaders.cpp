#include <iostream>
#include "pokemon.hpp"
#include "song.hpp"
using namespace std;


int main(){

    //string sname = "abra";
    //pokemon abra(sname);
    //abra.setName("Abra");
    //cout << abra.getName();
    /*Song back_to_black ;
    back_to_black.add_artist("Magic");
    cout << back_to_black.get_artist();*/

    pokemon poke;
    poke.setName("Abra");
    cout << poke.conta(2,5);
    //cout << poke.getName();
}