#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>

class Brain{

public:

    Brain();
    Brain(Brain const & src);
    Brain& operator=(Brain const & rhs);
    ~Brain();

    void setIdea(int index,const std::string& idea);
    std::string getIdea(int index)const;

private:

    std::string ideas_[100];

};

#endif