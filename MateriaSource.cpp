#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){

    for(int i = 0; i < 4; i++)
        grimoire[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src){

    for(int i = 0; i < 4; i++){
        if(src.grimoire[i] != NULL)
            grimoire[i] = src.grimoire[i]->clone();
        else
            grimoire[i] = NULL;
    } 
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs){

    if(this == &rhs)
        return(*this);
    for(int i = 0; i < 4; i++){
        delete grimoire[i];
        grimoire[i] = NULL;
    }
    for(int i = 0; i < 4; i++){
        if(rhs.grimoire[i] != NULL)
            grimoire[i] = rhs.grimoire[i]->clone();
        else
            grimoire[i] = NULL;
    }

    return(*this);
}

MateriaSource::~MateriaSource(){

    for(int i = 0; i < 4; i++)
        delete grimoire[i];
}

void MateriaSource::learnMateria(AMateria *spell){

    for(int i = 0 , i < 4 ,i++){
        if(grimoire[i] != NULL && spell != NULL)
            grimoire[i] = spell->clone();
    }
}

void MateriaSource::createMateria(std::string const & type){

    for(int i; i < 4 ; i++){
        if(grimoire[i]->getType() == type)
            return grimoire[i]->clone();
    }
    return NULL;
}


