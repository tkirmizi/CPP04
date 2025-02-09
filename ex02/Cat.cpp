/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:05:35 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 16:54:32 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(){_type = "Cat"; std::cout << "Cat constructor called" << std::endl;
	brain = new Brain();};

Cat::~Cat(){std::cout << "Cat destructor called" << std::endl;
	delete brain;};
	Cat::Cat(const Cat &other) : Animal(other) {
		std::cout << "Cat copy constructor called" << std::endl;
		brain = new Brain(*other.brain);}

Cat& Cat::operator=(const Cat &other){
	if (this != &other) {
		Animal::operator=(other);
		Brain* temp = new Brain(*other.brain);
		delete brain;
		brain = temp;}
		return *this;}

void Cat::makeSound() const {std::cout << "Meow Meow" << std::endl;};
