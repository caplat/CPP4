#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // meta->makeSound();
    
    // delete i;
    // delete j;
    // delete meta;
    {
        const Animal* j = new Dog();
        // const Animal* i = new Cat();

        delete j;
        // delete i;
    }
    // int nb_animals = 50;
    // Animal* animal_arr[nb_animals];
    // for(int i = 0; i < nb_animals; i++){
    //     if(i < nb_animals / 2)
    //         animal_arr[i] = new Dog();
    //     else
    //         animal_arr[i] = new Cat();
    // }
    // for(int i = 0;i < nb_animals; i++){
    //     delete animal_arr[i];
    // }
    
    return 0;
}