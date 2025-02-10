/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkirmizi <tkirmizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/08 20:07:22 by taha              #+#    #+#             */
/*   Updated: 2025/02/10 17:59:27 by tkirmizi         ###   ########.fr       */
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


	std::cout << "\n ========= TEST 1 =========\n" << std::endl;
	std::cout << "=== Animal -> Dog -> Brain Constructor Test ===" << std::endl;
	const Animal* dog = new Dog();
	std::cout << "\n=== Animal -> Cat -> Brain Constructor Test ===" << std::endl;
	const Animal* cat = new Cat();
	std::cout << "\n === Dog- > Brain -> Animal -> Destructor Test ===" << std::endl;
	delete dog;
	std::cout << "\n === Cat -> Brain -> Animal -> Destructor Test ===" << std::endl;
	delete cat;

	std::cout << "\n ========= TEST 2 =========" << std::endl;
	// Copy Constructor Testi (Derin Kopyalama Kontrolü)
	Dog* originalDog = new Dog();
	Dog* copyDog = new Dog(*originalDog);
	delete originalDog;
	delete copyDog;

	Animal* animals[4];
	for (int i = 0; i < 2; i++)
		animals[i] = new Dog();
	for (int i = 2; i < 4; i++)
		animals[i] = new Cat();

	for (int i = 0; i < 4; i++)
		delete animals[i];

	return 0;
}
