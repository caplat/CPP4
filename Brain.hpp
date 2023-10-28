#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain{

public:

    Brain();
    Brain(Brain const & src);
    Brain& operator=(Brain const & rhs);
    ~Brain();

private:

    std::string ideas_[100];

};

#endif