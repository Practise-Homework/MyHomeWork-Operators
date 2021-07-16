#include "Reload.h"
#include <iostream>
#include <iomanip>

#pragma region Constructor & Destructor Area
Reload::Reload(){}

Reload::Reload(int c,  int d){ a = c; b = d;}
Reload::~Reload(){}

#pragma endregion

#pragma region Overload Binary Operator
int Reload::operator+(const Reload &className)
{
  return (className.a + className.b);
}

int Reload::operator-(const Reload &className)
{
  return (className.a - className.b);
}

int Reload::operator/(const Reload &className)
{
  return (className.a / className.b);
}

int Reload::operator*(const Reload &className)
{
	return (className.a * className.b);
}
#pragma endregion

#pragma region Overload Boolean Operators

// ƒл€ простых условий с использование логических операторов, € не буду громоздить конструкцию if/else
// » потому предпочту использовать его сокращенную запись через тернарник. 

bool Reload::operator<=(const Reload & name)
{
	return (this->a <= name.a && this->b <= name.b) ? true : false;
}

bool Reload::operator>=(const Reload & name)
{
	return (this->a>=name.a && this->b >= name.b) ? true : false;
}

bool Reload::operator==(const Reload &name)
{
  return (this->a == name.a && this->b == name.b) ? true : false;
}

bool Reload::operator!=(const Reload &name)
{
  return !(this->a == name.a && this->b == name.b) ? true : false;
}

std::ostream & operator<<(std::ostream& out, Reload & className)
{
	/*std::cout << "Entry the values of fraction and to use boolean operators for compares its "<< std::endl
		      << " It's must to be next symbol like as '<' , '>', '==' , '!='" << std::endl
			  << "Usage: 1.0 >= 2.0 and press enter for saw result as true or false ...";*/

	out << std::boolalpha << (className.a == className.b) << std::endl
		<< std::boolalpha << (className.a != className.b) << std::endl
		<< std::boolalpha << (className.a >= className.b) << std::endl
		<< std::boolalpha << (className.a <= className.b) << std::endl;
	 

	out << className.a << " + " << className.b << " = " << (className.a + className.b) << std::endl
		<< className.a << " - " << className.b << " = " << (className.a - className.b) << std::endl
		<< className.a << " / " << className.b << " = " << (className.a / className.b) << std::endl
		<< className.a << " * " << className.b << " = " << (className.a * className.b) << std::endl;
	return out;
}

std::istream & operator>>(std::istream& in, Reload& className)
{
	std::cout << std::endl << "Enter digit value: ";
	 in >> className.a >> className.b;
	return in;
}

#pragma endregion