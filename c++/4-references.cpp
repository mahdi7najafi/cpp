#include <iostream>


int main()
{

	/* 
		References is like pointers. It is a way for us to reference an existing variable, but references does not occupy any memory. 
		References have to reference an already created variable.  it is an alias. you only have the variable, not the reference (alias).
			
	*/

	int a = 5;
	int& ref = a;

	std::cin.get();
}


