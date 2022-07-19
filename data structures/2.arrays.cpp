#include <iostream>

class array {
private:
	int index;
	int data[10];

public:	
	array()
	{
		index = 0;
	}

	bool isFull() 
	{
		return index == 10;
	}

	void makeempty()
	{
		index = 0;
	}

	// ---------------------------- Insertion
	void insertdata(int n)
	{
		if (isFull())
		{
			return;
		}
		else
		{
			data[index] = n;
			index++;
		}
	}

	void insertFirst(int n)
	{
		for (int i = index; i >= 0; i--)
		{
			data[i] = data[i - 1];
		}
		data[0] = n;
		index++;
	}

	void insertAtPosition(int p, int n)
	{
		for (int i = index; i >= p; i--)
		{
			data[i] = data[i - 1];
		}
		data[p-1] = n;
		index++;

	}
	// ---------------------------- Delete
	void deleteNoSorting(int n)
	{
		for (int i = 0; i < index; i++)
		{
			if (data[i] == n) 
			{
				data[i] = data[index - 1];
				index--;
			}
			
		}
	}

	void deleteSortData(int n)
	{
		for (int i = 0; i < index; i++)
		{
			if (data[i] == n)
			{
				if (data[i] == data[index - 1])
				{
					data[i] = data[index];
				}
				else
				{
					for (int j = i; j < index; j++)
					{
						data[j] = data[j + 1];

					}
				}
				index--;
			}
		}
	}

	// ----------------------------  Printing
	void show()
	{
		for (int i = 0; i < index; i++)
		{
			std::cout << data[i] << std::endl;
		}
	}
};

int main()
{

	array x;
	x.insertdata(3);
	x.insertdata(6);
	x.insertdata(7);
	x.insertdata(99);
	x.insertdata(11);
	x.insertdata(4);
	


	x.insertFirst(4);
	
	x.insertAtPosition(3, 1);
	
	x.deleteNoSorting(99);

	x.deleteSortData(6);

	//x.makeempty();
	x.show();


	std::cin.get();

}


