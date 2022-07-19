#include <iostream>

#define LOG(x) std::cout << x << std::endl;


int main()
{
	int var = 8;
	//void* ptr = nullptr; 
	int* ptr = &var;
	//pointer is just a memory address. it is an integer refer to the address of a variable in memory. 
	//now how to access the value of a pointer: check below:
	*ptr = 10;
	LOG(var);
	std::cin.get();
	/* 
		the type of a pointer is meaningless and is just for us to tell compiler how to work with variable. pointers are in the memory, so thats why you can have another pointer
		addressing the other pointer. or triple or more. 
	*/
}


