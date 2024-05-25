#ifndef POLIMORFISMO2_ZOMBIE_H
#define POLIMORFISMO2_ZOMBIE_H
#include <iostream>
class Zombie {
public:
    Zombie();
    Zombie(Zombie &rhs);
    Zombie(float height, float weight, int yearsSinceDeath);
    virtual ~Zombie();

    float getHeight();
    float getWeight();
    int getYearsSinceDeath();


    void setHeight(float height);
    void setWeight(float weight);
    void setYearsSinceDeath(int yearsSinceDeath);


    virtual void makeSound();

private:

    float height;
    float weight;
    int yearsSinceDeath;

};
#endif //POLIMORFISMO2_ZOMBIE_H
