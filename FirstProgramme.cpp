#include<iostream>
using namespace std;

int main() {

	char ch;
	cin >> ch;
	cout <<"here: "<< ch << endl;

	int marks;

	cout << "Enter the marks here: " << endl;
	//take input from user
	cin >> marks;

	cout << "Printing marks: " << marks << endl;
	

	int age = 101;
	int car = 12;
	
	if(age >= 18 || car >=1) {
		cout << "License miljaega" << endl;
	}

	cout << !age << endl;
	
	int ab = 20;
	int ba = 10;

	cout << (ab == ba) << endl;
		
	int abc = 3;
	int bca = 2;

	cout << abc + bca << endl;
	cout << abc - bca << endl;
	cout << abc*bca << endl;
	cout << abc/bca << endl;
	cout << bca % abc << endl; 
	// garbage value
	int num;
	num = 12;
	cout << num << endl;

	// int -> 4 byte
	int num1 = 50;
	cout << num1 << endl;

	cout << sizeof(num1) << endl;

	//character -> 1byte
	char ch1 = 'k';
	cout << ch1 << endl;
	cout << sizeof(ch1) << endl;

	//float -> 4 byte
	float point = 1.69;
	cout << point << endl;
	cout << sizeof(point) << endl;

	//long -> 4 byte
	long number = 23;
	cout << number << endl;
	cout << sizeof(number) << endl;
	
	cout << "Love " << endl << "babbar" << '\n';
	cout << "Love Babbar" << endl ;
	cout << endl;
	cout << endl;
	cout << '\n';
	cout << "Lovely Babbar" ;

	
	return 0;
}