/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:07:41 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 16:53:49 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog(){_type = "Dog"; std::cout << "Dog constructor called" << std::endl;
	brain = new Brain();};
Dog::~Dog(){std::cout << "Dog destructor called" << std::endl;
	delete brain;};

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
	brain = new Brain(*other.brain);}

Dog& Dog::operator=(const Dog &other){
	if (this != &other){
		Animal::operator=(other);
		Brain* temp = new Brain(*other.brain);
		delete brain;
		brain = temp;}
	return *this;}

void Dog::makeSound() const {std::cout << "Woof Woof" << std::endl;};