#include <iostream>
int main()
{
	int a = 1;
	int b = 2;
	int t = 0;
	t = a;
	a = b;
	b = t;
	

	printf("%i", a);
	printf(",");
	printf("%i", b);
	system("pause");
}