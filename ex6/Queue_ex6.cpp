
/*#include <stdio.h>
#include <stdlib.h>
C related header stuff*/
#include <iostream>
#define SIZE 5

using namespace std;

class Placement
{
private:
    signed int front, rear;
    
public:

int main()
{
		Placement()
		{
		std::queue dataTransfer; //my queue made to keep data and transfer it
		signed int front = -1, back = -1;
		int i = 0;
		}
	
			/*while( queue != full )
			{
				dataTransfer.push(i);
				i++;
			}*/
			
			
			if( back != 5 )
			//while( back != 5 )
			{
				back++;
				dataTransfer[back] = i;
			}
			
			else
			{
				cout << "The queue is seemingly full.\n" << endl;
			}
			
///////////////////* break *//////////////////////////////////
			
			if( front == 0 )
			{
				cout << "The queue is empty.\n" << endl;
			}
			
			else
			{
				iNew = dataTransfer[front];
			}
			
			
		return 0;
	
}
}