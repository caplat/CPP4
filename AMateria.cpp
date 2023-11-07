#include "AMateria.hpp"

AMateria::AMateria(): type_("Unknown"){

}

AMateria::AMateria(std::string const & type): type_(type){

}

AMateria::AMateria(AMateria const & src): type_(src.type_){

}

AMateria & AMateria::operator=(const AMateria & rhs){

    if(this == &rhs)
        return(*this);
    type_ = rhs.type_;
    return(*this);
}

AMateria::~AMateria(){

}

std::string const & AMateria::getType()const{

    return type_;
}

void AMateria::use(ICharacter& target){

    (void) target;
    return;
}


