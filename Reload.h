#pragma once
#include <ostream>
#include <istream>
#include <iostream>
#include <ostream>

class Reload
{
private: 
	int a,b;
public:
	Reload();
	~Reload();
	explicit Reload(int, int);
  /*---- Reload Binary Operators  ---- */
	 int operator+(const Reload&);
	 int operator-(const Reload&);
	 int operator/(const Reload &);
     int operator*(const Reload&);
  /*------------- End Block------------------*/
	
  /*---- Reload boolean Operators ----*/
	 bool operator<=(const Reload&);
	 bool operator>=(const Reload&);
	 bool operator==(const Reload&);
	 bool operator!=(const Reload&);
	 
	/*----- End Overload boolean operators -----*/
	  
	/*--------Blook of friendly streams--------*/
	  friend std::ostream& operator<<(std::ostream&, Reload &);
	  friend std::istream& operator>>(std::istream&, Reload &);
	/*------------- End Block------------------*/		
};
	   std::ostream& operator<<(std::ostream&, Reload &);
	   std::istream& operator>>(std::istream&, Reload &);
	   
