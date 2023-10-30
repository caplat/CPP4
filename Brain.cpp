#include "Brain.hpp"

Brain::Brain(){

    ideas_[0] = "Idea of the original";
    std::cout << "Brain default constructor" <<  std::endl;  
}

Brain::Brain(Brain const & src){

    std::cout << "Brain copy constructor called"  << std::endl;
    for (int i = 0; i < 100; i++)
        ideas_[i] = src.ideas_[i];
}

Brain & Brain::operator=(Brain const & rhs){

    std::cout << "Brain copy assignment operator called" << std::endl;
    if(this == &rhs)
        return(*this);
    for (int i = 0; i < 100; i++)
        ideas_[i] = rhs.ideas_[i];
    return(*this);
}

Brain::~Brain(){

    std::cout << "Brain destructor called" << std::endl;
}


void Brain::setIdea(int index,const std::string& idea){

    if(index >= 0 && index < 100){
        ideas_[index] = idea;
    }
    else
        std::cout << "I only have enough memory for 100 ideas" << std::endl;
}

std::string Brain::getIdea(int index)const{

    if(index >= 0 && index < 100)
        return ideas_[index];
    else
        return "";

}