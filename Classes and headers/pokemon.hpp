#ifndef POKEMON_H
#define POKEMON_H

#include <string>
using namespace std;

class pokemon{
    

    public :
        string getName();
        void setName(string newName);
        //int pokemon::getLevel();
        //void setLevel(int level);
        int conta(int a, int b);   

        private: 
        string name;
        int level; 
};
#endif 