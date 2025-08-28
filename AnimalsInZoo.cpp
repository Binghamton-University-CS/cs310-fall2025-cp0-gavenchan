#include "Animal.h"
#include "AnimalsInZoo.h"
#include <iostream>
using namespace std;


AnimalsInZoo :: AnimalsInZoo(Animal banimal){
    animal = banimal;
    numAnimals = 1;
}

AnimalsInZoo :: AnimalsInZoo(){
    numAnimals = 0;
}

void AnimalsInZoo :: display(){
    cout << "Number of animals: " << numAnimals << endl;
    if (numAnimals > 0){
        animal.display();
    }
}
