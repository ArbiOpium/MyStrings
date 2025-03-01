#pragma once
#include<iostream>
using namespace std;
class MyString
{
	char* str;
	int length;
	static int countLiveObj;
	static int countCreatedObj;
public:
	MyString();
	MyString(int size);
	MyString(const char* initStr);
	MyString(const MyString& other);
	MyString(MyString&& obj);
	MyString& operator=(MyString&& obj);
	MyString(initializer_list<char> a);
	~MyString();

	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* substr);
	int MyChr(char c);
	int MyStrLen();
	void MyStrCat(MyString& b);
	void MyDelChr(char c);
	int MyStrCmp(MyString& b);

	MyString& operator+=(const char* appendStr);

        void Save(char* filename);

	void Print();
	void Input();

	static void GetCountLiveObj();
	static void GetCountCreatedObj();

	MyString operator=(const MyString& obj);
	MyString operator[](int index);
	void operator()();
	friend ostream& operator<<(ostream& os, MyString obj);
	friend istream& operator>>(istream& is, MyString& obj);
};
ostream& operator<<(ostream& os, MyString obj);
istream& operator>>(istream& is, MyString& obj);
MyString operator+(const char* prefixStr, const MyString& myStr);
