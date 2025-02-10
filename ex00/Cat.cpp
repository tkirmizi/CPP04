/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:05:35 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 16:16:42 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat(){_type = "Cat"; std::cout << "Cat constructor called" << std::endl;};
Cat::~Cat(){std::cout << "Cat destructor called" << std::endl;};
Cat::Cat(const Cat &other){*this = other; std::cout << "Cat copy constructor called" << std::endl;};
Cat& Cat::operator=(const Cat &other){
	if (this != &other)
		this->_type = other._type;
		return *this;
}
void Cat::makeSound() const {std::cout << "Meow Meow" << std::endl;};
