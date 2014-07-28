#include <iostream>
#include <time.h>

char* pass; //declares the password publicly so that its accessible independently from the recursive genPass method

void genPass (int curSize)
{
	for (char i = '0'; i < '3'; i++)
	{
		pass [curSize - 1] = i;
		if (curSize > 0) //the recursion continues as long as the current size (index) is greater than 0
			genPass (curSize--); //sends in the previous index
		else //stops the recursion when the password generation stops
			std::cout << pass << std::endl; //displays the generated password when the each character is generated
	}
}

int main ()
{
	int size; //stores the size of the password
	//prompt for the size
	std::cout << "Please enter the length of the password: ";
	std::cin >> size;
	//sets the size of the character array;
	pass = new char[size];

	//generates the passwords and shows them on the screen
	genPass (size);
	return 0;
}
