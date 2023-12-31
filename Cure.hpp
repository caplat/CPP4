#ifndef CURE_HPP
# define CURE_HPP
#include "AMateria.hpp"
#include "Character.hpp"

class Cure: public AMateria{

public:

    Cure();
    Cure(Cure const & src);
    Cure& operator=(Cure const & rhs);
    virtual ~Cure();
    virtual Cure* clone()const;
    void use(ICharacter& target);

};

#endif