#pragma once
#include <iostream>
#include<string>
#include "Animal.h"
using namespace std;

class AnimalsInZoo{
    public:
        AnimalsInZoo(Animal a);
        AnimalsInZoo();
        void display();

    private: 
        int numAnimals = 0;
        Animal animal;

};