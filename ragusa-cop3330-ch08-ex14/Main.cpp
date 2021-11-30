#include<iostream>
#include"Header.h"

using namespace std;
/*
Can we declare a non-reference function argument const (e.g., void f(const int);)? What might that mean? Why might
we want to do that? Why don’t people do that often? Try it; write a couple of small programs to see what works.

Yes, we can, below is a multiply function that takes in two const integers a, and b.
The const, ensures that these integers cannot be changed by the function.
In large code with many different functions using consts can provide an extra level of safety in the code, preventing possible errors.
The reason this specific method is not used often is because both a, and b are call by value parameters.
This means that the the original variable can not be changed by the function, and instead a copy of the original is made in the function.
The use of consts are much more valuable in call by reference parameters such as vectors, because any changes made by the function, will be visible in the original object.


*/


int main()
{
	multiply(5,5);

	square(2);

	const float pi = 3.14;

	multiplyByPI(pi, 25);


}

void multiply(const int a,const int b)
{
	cout << a * b<< endl;
}

void square(const int a)
{
	cout << a * a<<endl;
}

void multiplyByPI(const float pi,float a)
{
	cout<< a * pi<<endl;

}






