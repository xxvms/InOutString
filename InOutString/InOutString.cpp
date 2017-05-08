// InOutString.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>



int main()
{
	std::string fullName, nickname, address;
	std::string greeting("Hello ");

	std::cout << "Enter your full name: ";
	std::getline(std::cin, fullName); // reads spaces between words
	std::cout << "Please provide your nickname:";
	std::cin >> nickname;

	greeting += nickname; // append name to greeting

	std::cout << "Enter your address on separate lines " << std::endl;
	std::cout << "To finish press $ and Enter" << std::endl;
	std::getline(std::cin, address, '$'); //reads multiple lines


	std::cout << greeting << std::endl;
	std::cout << "Your name is: " << fullName << std::endl;
	std::cout << "Your address is: " << std::endl;
	std::cout << address << std::endl;
	
	system("pause");
    return 0;
}

