#include <iostream>
#include <string>

int main()
{
	std::string InputString;
	std::cout << "Enter something" << "\n";
	std::cin >> InputString;

	std::cout << "String: " << InputString << "\n";
	std::cout << "FirstChepter: " << InputString.front() << "\n";
	std::cout << "LastChepter: " << InputString.back() << "\n";

	std::cin;
	return 0;

}