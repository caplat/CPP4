#include "Character.hpp"

Character::Character():name_("Unknown"){

    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(std::string const & name): name_(name){

    for(int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

Character::Character(Character const & src): name_(src.name_){

    for(int i = 0, i < 4; i++){
        if(src.inventory[i] != NULL)
            inventory[i] = src.inventory[i]->clone();
        else
            inventory[i] = NULL;
    } 
}

Character & Character::operator=(const & rhs){

    if(this == &rhs)
        return(*this);
    name_ = rhs.name_;
    for(int i = 0; i < 4; i++){
        delete inventory[i];
        inventory[i] = NULL;
    }
    for(int i = 0; i < 4; i++){
        if(rhs.inventory[i] != NULL)
            inventory[i] = rhs.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }

    return(*this);

}

Character::~Character(){

     for(int i = 0; i < 4; i++)
        delete inventory[i];
}

std::string const Character::getName()const{

    return name_;
}

void Character::equip(AMateria* m){

    for(int i = 0; i < 4; i++){
        if(inventory[i] == NULL)
            inventory[i] = m;
        return;
    }
}

void Character::unequip(int idx){

    if(idx >= 0 && idx < 4){
        delete inventory[idx];
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter & target){

    if(idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
}