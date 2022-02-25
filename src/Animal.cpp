//
// Created by Maikol Guzman Alan on 2/24/22.
//

#include "Animal.h"
#include <iostream>
using namespace std;

Animal::Animal() {}

Animal::~Animal() {

}

void Animal::eat() {
    cout << "I can eat!" << endl;
}

void Animal::sleep() {
    cout << "I can sleep!" << endl;
}
