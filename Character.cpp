#include "Character.hpp"

Character::Character():name_("Unknown"){

}

Character::Character(std::string name): name_(name){


}

Character::Character(Character const & src): name_(src.name_){

}

Character & Character::operator=(const & rhs){

    if(this == &rhs)
        return(*this);
    name_ = rhs.name_;
    return(*this);
}

Character::~Character(){

}

std::string const Character::getName()const{

    return name_;
}