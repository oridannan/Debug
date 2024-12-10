#include <iostream>

struct Password
{
	char value[16];
	bool incorrect;
	Password() : value(""), incorrect(true)
	{
	}
};

int main()
{

	std::cout << "Password length is 16. If you enter more than 16 characters you still pass the check. This happens because strcmp doesnt handle string length." << std::endl;

	std::cout << "Enter your password to continue:" << std::endl;
	Password pwd;
	std::cin >> pwd.value;

	if (!strcmp(pwd.value, "********"))
		pwd.incorrect = false;

	if (!pwd.incorrect)
		std::cout << "Congratulations\n";

	return 0;
}