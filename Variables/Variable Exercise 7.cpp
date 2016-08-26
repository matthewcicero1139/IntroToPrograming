#include <iostream>
int main()
{
	char a = 'a';
	int aNum = a;
	//(int)a;
	char b = 'c';
	int bNum = b;

	std::cin >> a;
	std::cin >> b;

	//	std::cout << (a * 1) * (b *1) << std::endl;
	std::cout << a * 1 / 2 << std::endl;
	std::cout << b * 1 / 2 << std::endl;
	std::cout << (a + b) / 2 << std::endl;

	//	int d = 10;
	//	int j = 2;

	//	std::cout << d / j << std::endl;


	system("pause");
}

//Uppercases numbers are lower than lowercase numbers.
//Doesnt matter if put in reverse.
