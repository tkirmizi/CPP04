/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 14:01:10 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 14:01:29 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <string>
#include <iostream>

class Animal{
	protected:
		std::string _type;
	public:
		Animal():_type("default"){};
		Animal(std::string type)
			:_type(type){};
		virtual ~Animal(){std::cout << "Animal destructor called" << std::endl;};
		Animal(const Animal &other){*this = other;}
		Animal& operator=(const Animal &other)
		{
			if (this != &other)
				this->_type = other._type;
			return *this;
		}
		std::string getType() const{return _type;};
		virtual void makeSound() const {std::cout << "Animal sound" << std::endl;};
};

#endif