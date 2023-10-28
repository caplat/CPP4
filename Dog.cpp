#include "Dog.hpp"

Dog::Dog():type_("Dog"),dog_brain_(new Brain()){

    std::cout << "Dog default constructor" <<  std::endl;

}

Dog::Dog(Dog const & src): Animal(src), Brain(src){

    std::cout << "Dog copy constructor called"  << std::endl;
}

Dog & Dog::operator=(Dog const & rhs){

    std::cout << "Dog copy assignment operator called" << std::endl;

    if(this == &rhs)
        return(*this);
    Animal::operator=(rhs);
    Brain::operator=(rhs);
    return(*this);
}

Dog::~Dog(){

    delete dog_brain_;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()const{

    std::cout << "*Dog sound*" << std::endl;
}

std::string Dog::getType()const{

    return type_;
}