#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class wasteful{ // making class for wasteful
	public:
		void display(int m[5]);
		long digit[100],n, x, t, j, factor[100], rem[100], marks[10],m[10]; 
};
int main() 
{
	int marks[10]={11, 12, 33, 44, 55, 66, 77, 88, 99, 111}; // giving value of marks array
	wasteful number; 
	number.display (marks); // calling the display process below
	return 0;
}

void wasteful::display(int marks[10]) // process for getting the wasteful number out of the values already given in int main()
{
	cout<<"IDENTIFYING THE WASTEFUL NUMBERS:"<<endl;
	
	for (int i=0; i<10; i++)
	{
		
		for (i=0;i<10; i++)
			{
			digit[i]=0;
			n=marks[i];
			x=n;
			for (;n!=0;)
				{
				n=n/10;
				digit[i]++;
				}
			t=0;
			j=2;
			factor[i]=0;
			for (;x!=0;)
				{
				if (x%j==0)
					{
					x=x/j;
					rem[t]=j;
					t++;
					factor[i]++;
					if(x==1)
						{
						break;
						}
					}
			else
				{
				j++;
				}
			}
		}
		for (i=0; i<10; i++)
			{
			if (factor[i]>digit[i])
				{
				cout<<"Wasteful Number:"<<marks[i]<<endl;
				}
			}
		}
}
