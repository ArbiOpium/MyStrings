#include <iostream>
#include "MyString.h"

using namespace std;

int main() 
{
	MyString stringExample("BARROWS");
	cout << "Len = " << stringExample.MyStrLen() << endl;
	stringExample.Print();

	stringExample.Input();
	stringExample.Print();

	MyString stringExample2("SKOFF");

	stringExample += " Amigo!";
	stringExample.Print();

	MyString stringExample3;
	stringExample3 = "Holla, " + stringExample2;
	stringExample3.Print();

	MyString::GetCountLiveObj();
	MyString::GetCountCreatedObj();

	MyString str{ 'H', 'o', 'l', 'a', ',', ' ', 'A', 'm', 'i', 'g', 'o', '!' };
	str.Print();

	return 0;
}