#include "Zombie.h"

Zombie::Zombie() = default;

Zombie::Zombie(Zombie &rhs) {
    
    this->height = rhs.height;
    this->weight = rhs.weight;
    this->yearsSinceDeath = rhs.yearsSinceDeath;

}
Zombie::Zombie(float height, float weight, int yearsSinceDeath){
    this->height = height;
    this->weight = weight;
    this->yearsSinceDeath = yearsSinceDeath;
}

Zombie::~Zombie() = default;

void Zombie::makeSound() {
    std::cout << "..." << std::endl;
}

float Zombie::getHeight() {
    return height;
}
float Zombie::getWeight() {
    return weight;
}
int Zombie::getYearsSinceDeath() {
    return yearsSinceDeath;
}

void Zombie::setHeight(float height) {
    this->height = height;
}
void Zombie::setWeight(float weight) {
    this->weight = weight;
}
void Zombie::setYearsSinceDeath(int yearsSinceDeath) {
    this->yearsSinceDeath = yearsSinceDeath;
}
