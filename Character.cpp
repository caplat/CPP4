#include "Character.hpp"

Character::Character():name_("Unknown"){

    for(int i = 0; i < 4; i++){
        inventory[i] = NULL;
        // pocket_dimension[i] = NULL;
    }
}

Character::Character(std::string const & name): name_(name){

    for(int i = 0; i < 4; i++){
        inventory[i] = NULL;
        // pocket_dimension[i] = NULL;
    }
}

Character::Character(Character const & src): name_(src.name_){

    for(int i = 0; i < 4; i++){
        if(src.inventory[i] != NULL)
            inventory[i] = src.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    // for(int i = 0; i < 4; i++){
    //     if(src.pocket_dimension[i] != NULL)
    //         pocket_dimension[i] = src.pocket_dimension[i]->clone();
    //     else
    //         pocket_dimension[i] = NULL;
    // }
}

Character & Character::operator=(const Character & rhs){

    if(this == &rhs)
        return(*this);
    name_ = rhs.name_;
    for(int i = 0; i < 4; i++){
        delete inventory[i];
        inventory[i] = NULL;
        if(rhs.inventory[i] != NULL)
            inventory[i] = rhs.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
    // for(int i = 0; i < 4; i++){
    //     delete pocket_dimension[i];
    //     pocket_dimension[i] = NULL;
    //     if(rhs.pocket_dimension[i] != NULL)
    //         pocket_dimension[i] = rhs.pocket_dimension[i]->clone();
    //     else
    //         pocket_dimension[i] = NULL;
    // }
    return(*this);
}

Character::~Character(){

     for(int i = 0; i < 4; i++){
        delete inventory[i];
        inventory[i] = NULL;
        // delete pocket_dimension[i];
        // pocket_dimension[i] = NULL;
    }
}

std::string const& Character::getName()const{

    return name_;
}

void Character::equip(AMateria* m){

    for(int i = 0; i < 4; i++){
        if(inventory[i] == NULL){
            inventory[i] = m;
            return;
        }
    }
    std::cout << "l'equipement est plein,impossible d equiper" << std::endl;
}

void Character::unequip(int idx){

    if(idx >= 0 && idx < 4 && inventory[idx] != NULL){
        // for(int i = 0; i < 4; i++){
        //     if(pocket_dimension[i] == NULL){
        //         pocket_dimension[i] = inventory[idx];
        //         inventory[idx] = NULL;
        //         break;
        //     }
        // }
        inventory[idx] = NULL;
    }
}

void Character::use(int idx, ICharacter & target){

    if(idx >= 0 && idx < 4 && inventory[idx] != NULL)
        inventory[idx]->use(target);
}