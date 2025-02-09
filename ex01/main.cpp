/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taha <taha@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:07:22 by taha              #+#    #+#             */
/*   Updated: 2025/02/09 16:58:06 by taha             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <string>
#include <iostream>

int main() {
	// Basic test
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	delete dog;
	delete cat;

	// Deep copy test
	Dog* originalDog = new Dog();
	Dog* copyDog = new Dog(*originalDog);
	delete originalDog;
	delete copyDog;

	// Array test
	Animal* animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animals[i];
	
	return 0;
}