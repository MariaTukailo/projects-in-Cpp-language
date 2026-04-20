#include <iostream>
#include <cstdlib>
#include "MyString.h"


#define RESET    "\033[0m"
#define RED      "\033[31m"
#define GREEN    "\033[32m"
#define MAGENTA  "\033[35m"
#define CYAN     "\033[36m"


using namespace std;

int main()
{
	system("chcp 1251>nul");
	cout << MAGENTA << "Класс MyString:" << endl << endl;

	MyString str;
	cout << GREEN << "Введите строку(не более 80 символов):" << RESET << endl;
	cin >> str;

	cout << GREEN << "Cтрока 1:" << RESET << endl;
	cout << str;

	MyString str2("Hello");
	cout << GREEN << "Cтрока по умолчанию 2:" << RESET << endl;
	cout << str2;


	cout << MAGENTA << "******************************************************" << endl << endl;

	MyString resalt;
	

	
	if (str > str2)
	{
		resalt = str(1, 3) + str2[0];
	}
	else if (str < str2)
	{
		resalt+="!!!"+str;
	}
	else
	{
		str++;
		--str;
		resalt = str;
	}


	cout << MAGENTA << "******************************************************" << endl << endl;

	cout << GREEN << "Вычислим выражение: " << RESET << endl;
	cout << resalt << endl;
	
	


	return 0;
}


