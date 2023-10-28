#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type_("WrongAnimal"){

    std::cout << "WrongAnimal default constructor" <<  std::endl;  
}

WrongAnimal::WrongAnimal(WrongAnimal const & src): type_(src.type_){

    std::cout << "WrongAnimal copy constructor called"  << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs){

    std::cout << "WrongAnimal copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    type_ = rhs.type_;
    return(*this);
}

WrongAnimal::~WrongAnimal(){

    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound()const{

    std::cout << "*WrongAnimal sound*" << std::endl;
}

std::string WrongAnimal::getType()const{

    return type_;
}