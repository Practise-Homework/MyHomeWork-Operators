#include <iostream>
#include "Reload.h"
#include "Screen.h"
using namespace std;

int main()
{
	Screen get;
		   get.SetWindowName("Overload Binary Operator");
    
	//Reload a(10, 100);
	Reload b(20,15);
  // cout << "Compared two different class: " << endl
		//   << std::boolalpha << (a == b) << std::endl
	 //      << std::boolalpha << (a != b) << std::endl
	 //      << std::boolalpha << (b >= a) << std::endl
	 //      << std::boolalpha << (b <= a) << std::endl  << std::endl << std::endl
	 //      << "Compared properties for first class: "  << endl << a << endl
	 //   << "Compared properties for second class: "  << endl << b << endl
		 //<< "Press any key for exit ... ";

	cout << "Calculate properties for first class: " << std::endl << b << std::endl
		 << "Press any key for exit ... ";
	
	//cout << "Calculate two different class: " 
	//	 << std::endl << a + b << std::endl << a - b << std::endl<<  a * b <<  std::endl << a / b << std::endl
	//	 << "Press any key for exit ... ";
	
	cin.get();
	getc(stdin);
 return 0;
}