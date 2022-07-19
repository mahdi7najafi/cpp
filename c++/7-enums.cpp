#include <iostream>

enum Example
{
	A, B, C
};

int main()
{

	int value = B;
	 
	if (value == B)
	{

	}

	std::cin.get();

}

/*
enum is just an integer, if you dont specify the value, it will start from 0 and increment by one for the next variable.
you can specify the data types for enum using colons and then type.

enum Example : unsinged char
{
	A = 5, B, C
};

Above: B is 6 and C will be 7.

Here is another example:
enum Example : char
{
	A = 4, B, C
};



In the Log class which you can find the source code in the repository you can do the following instead of defining each log level error.

enum Level
{
	Error = 0, Warning, Info
};

and then call it like:

Level m_LogLevel = Info;

*/
