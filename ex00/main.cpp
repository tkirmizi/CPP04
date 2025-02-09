/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:07:22 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 14:01:09 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>



class Dog : public Animal{
	public:
		Dog(){_type = "Dog";};
		~Dog(){};
		Dog(const Dog &other){*this = other;};
		Dog& operator=(const Dog &other){
			if (this != &other)
				this->_type = other._type;
				return *this;
		}
		void makeSound() const override {std::cout << "Woof Woof" << std::endl;};
};

class Cat : public Animal{
	public:
		Cat(){_type = "Cat";};
		~Cat(){};
		Cat(const Cat &other){*this = other;};
		Cat& operator=(const Cat &other){
			if (this != &other)
				this->_type = other._type;
				return *this;
		}
		void makeSound() const override {std::cout << "Meow Meow" << std::endl;};
};


class WrongAnimal{
	public:
		WrongAnimal(){};
		~WrongAnimal(){};
		WrongAnimal(const WrongAnimal &other){*this = other;};
		WrongAnimal& operator=(const WrongAnimal &other){return *this;}
		void makeSound() const {std::cout << "WrongAnimal sound" << std::endl;};
};


class WrongCat : public WrongAnimal{
	public:
		WrongCat(){};
		~WrongCat(){};
		WrongCat(const WrongCat &other){*this = other;};
		WrongCat &operator=(const WrongCat &other){return *this;};
		void makeSound() const {std::cout << "WrongCat sound" << std::endl;};
};


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n===========TEST-2===============" << std::endl;
	WrongAnimal *wrong = new WrongCat();
	std::cout << "Expected output: WrongAnimal sound" << std::endl;
	std::cout << "    Output:      ";
	wrong->makeSound();
	return 0;
}