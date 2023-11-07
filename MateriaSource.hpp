#ifndef MateriaSource_HPP
# define MateriaSource_HPP
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{

public:

    MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource& operator=(MateriaSource const & rhs);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);

private:

    AMateria* grimoire[4];
};

#endif