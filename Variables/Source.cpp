#include <iostream>
int main()
{
	int number = 5;
	{
		int x = 10;
		number = x;
	}
	printf("%i", number);
	system("pause");
	return 0;
}