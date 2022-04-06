#include <iostream>
#include <string>

int main()
{
	std::string name;
	

	std::cout << "enter your name" << "\n";
	
	std::cin >> name;

	std::cout <<"String " << name << "\n";
	std::cout <<"Size " << name.size() << "\n";
	std::cout <<"FirstChar " << name[0] << "\n";
	std::cout <<"LastChar " << name[name.size()-1] << "\n";


	std::cin;
	return 0;

}