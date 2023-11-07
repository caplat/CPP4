#include "Cure.hpp"

Cure::Cure():AMateria("cure"){

}

Cure::Cure(Cure const & src): AMateria(src){

}

Cure & Cure::operator=(const Cure & rhs){

    if(this == &rhs)
        return(*this);
    AMateria::operator=(rhs);
    return(*this);
}

Cure::~Cure(){

}

Cure* Cure::clone()const{

    return new Cure(*this);
}

void Cure::use(ICharacter& target){

    std::cout << "*heals " << target.getName() << "'s wounds*" << std::endl;
}