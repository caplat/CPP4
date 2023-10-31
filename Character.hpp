ifndef CHARACTER_HPP
# define CHARACTER_HPP
#include "ICharacter.hpp"

class Character{

private:

    std::string name_;

public:

    Character();
    Character(std::string name);
    Character(std::string const & type);
    Character(Character const & src);
    Character& operator=(Character const & rhs);
    ~Character();

};

#endif