#ifndef AMATERIA_HPP
# define AMATERIA_HPP
#include <iostream>

class AMateria{

protected:

    std::string type_;

public:

    AMateria();
    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    AMateria& operator=(AMateria const & rhs);
    virtual ~AMateria();
    std::string const & getType() const;

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif