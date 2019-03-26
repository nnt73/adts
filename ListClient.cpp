#include <iostream>
#include "List.h"

using namespace std;

int main()
{
  
 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
 List mylist;
	for (int i = 1; i < 11; i++)
	{
		L1.insert(i, 1);
	}
	
	for (int i = 1; i < 11; i++)
	{
		L2.insert(i, 1);
	}
	L1.display();
	L2.display();
}
