#include <iostream>

class Player {
public:	
	int x, y;
	int speed;

	void Move(int xa, int ya)
	{
		x += xa * speed;
		y += ya * speed;
	}
	
	void print() 
	{
		std::cout <<  x << std::endl;
		std::cout <<  y << std::endl;
	}
		
};
/*
	if you want to have a function outside a class, you just need to specify the reference.


void Move(Player& player, int xa, int ya)
{
	player.x += xa * player.speed;
	player.y += ya * player.speed;
}

 calling inside main():

 Move(player, 1, -1);

 */
/*
	if you use struct instead of a class, the only difference is that class by default is private and you cannot call its functions for example without using, public: keyword. 
	On the other hand, struct is public and you can access its component without using public keyword. But if you want to make it private you can do so by defining a private: keyword. 
	struct is same as class, but the difference is in the visibility. If you want your structs to work like class, you can use the following code at the begining of your code:
	#define struct class
	this make structs work like class, and make it private.

*/

int main()
{
	
	// instantiating. 

	Player player;
	
	player.x = 2;
	player.y = 3;
	player.speed = 10;


	player.Move(2, 4);
	
	player.print();

	std::cin.get();
 
}


