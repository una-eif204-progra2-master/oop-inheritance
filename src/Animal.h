//
// Created by Maikol Guzman Alan on 2/24/22.
//

#ifndef OOP_INHERITANCE_ANIMAL_H
#define OOP_INHERITANCE_ANIMAL_H
/**
 * Base Class
 */
class Animal {
public:
    /**
     * Basic Constructor
     */
    Animal();

    /**
     * Basic Destructor
     */
    virtual ~Animal();

    /**
     * Method eat
     */
    void eat();

    /**
     * Method sleep
     */
    void sleep();
};


#endif //OOP_INHERITANCE_ANIMAL_H
