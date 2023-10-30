#include "Cat.hpp"

Cat::Cat():type_("Cat"),cat_brain_(new Brain()){

    std::cout << "Cat default constructor" <<  std::endl;
}

Cat::Cat(Cat const & src): type_(src.type_), cat_brain_(new Brain(*(src.cat_brain_))){

    std::cout << "Cat copy constructor called"  << std::endl;
}

Cat & Cat::operator=(Cat const & rhs){

    std::cout << "Cat copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    type_ = rhs.type_;
    delete cat_brain_;
    cat_brain_ = new Brain(*(rhs.cat_brain_));
    return(*this);
}

Cat::~Cat(){

    delete cat_brain_;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()const{

    std::cout << "*Cat sound*" << std::endl;
}

std::string Cat::getType()const{

    return type_;
}