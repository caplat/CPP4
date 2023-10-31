#include "Ice.hpp"

Ice::Ice():AMateria("ice"){

}

Ice::Ice(Ice const & src): AMateria(src){

}

Ice & Ice::operator=(const & rhs){

    if(this == &rhs)
        return(*this);
    AMateria::operator=(rhs);
    return(*this);
}

Ice::~Ice(){

}

Ice* Ice::clone()const{

    return new Ice(*this);
}

void Ice::use(ICharacter& target){

    std::cout << "*shoots an ice bolt at " << this->name_ << " *" << std::endl;
}