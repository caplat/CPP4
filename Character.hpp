#ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter{

private:

    std::string name_;
    AMateria* inventory[4];

public:

    Character();
    Character(std::string const & name);
    Character(Character const & src);
    Character& operator=(Character const & rhs);
    ~Character();

};

#endif