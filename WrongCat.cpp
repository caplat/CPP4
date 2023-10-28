#include "WrongCat.hpp"

WrongCat::WrongCat():type_("WrongCat"){

    std::cout << "WrongCat default constructor" <<  std::endl;

}

WrongCat::WrongCat(WrongCat const & src): type_(src.type_){

    std::cout << "WrongCat copy constructor called"  << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs){

    std::cout << "WrongCat copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    type_ = rhs.type_;
    return(*this);
}

WrongCat::~WrongCat(){

    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()const{

    std::cout << "*WrongCat sound*" << std::endl;
}

std::string WrongCat::getType()const{

    return type_;
}