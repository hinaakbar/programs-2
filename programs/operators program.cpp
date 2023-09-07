#include<iostream>
using namespace std;
int main()
{
	//logical operators
	cout<<((4>6)&&(8>3))<<"\n";
	cout<<((4<8)||(3>8))<<"\n";
	cout<<!((4<8)||(3>8))<<"\n";
	int a=40;
	int b=56;
	//arithmetic operators
	cout <<"Result of arithmetic operators are"<< "\n";
	cout << "addition of a and b is " << a+b << "\n";
	cout << "subtraction of a and b is " << a-b << "\n";
	cout << "multiplication of a and b is " << a*b << "\n";
	cout << "division of a over  b is " << a/b << "\n";
	cout << "modulus of a over b is " << a%b << "\n";
	cout << "increases the value of a variable by 1 using post increment " << a++ << "\n";
	cout << "increases the value of a variable by 1 using pre increment " << ++a << "\n";
	cout << "decrease the value of b variable by 1 using post decrement " << a-- << "\n";
	cout << "decrease the value of b variable by 1 using pre decrement " << --a << "\n";
	cout << "***********************" << "\n" ;
	//assignment operator 
	cout << "result of assignment and compound assignment operators are " << "\n" ;
	int marks =12;
	cout <<"the marks are " << marks << "\n" ;
	// compound assignment operator 
	marks +=12;
	marks -=4;
	marks *=4;
	marks /=4;
	marks %=4;
	//comparison operator
	cout << (a > b) << "\n" ;
	cout << (a < b) << "\n" ;
	cout << (a >= b ) << "\n" ;
	cout << (a <= b) << "\n" ;
	cout << (a==b ) << "\n" ;
	cout << (a!=b) << "\n ";
	

	
	
	
	
	
	
}
