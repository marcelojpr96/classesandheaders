#include "pokemon.hpp"
#include <string>
using namespace std;

string newname;

string pokemon::getName(){
    return name;
};

void pokemon::setName(string newname){
    name = newname;
};
/*
int pokemon::getLevel(){
    return level;
};
void pokemon::setLevel(int newlvl){
    level = newlvl;
};*/

int pokemon::conta(int um,int dois){
    int num = um * dois;
    return num;
};
