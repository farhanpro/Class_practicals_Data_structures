#include <iostream>
#include <stdlib.h>
using namespace std;
class stack
{
	public :

		int arr[5];
		int top;
	stack()
	{
			top=-1;
	}
	void push(int x)
	{
			if(top>4)
		{	
			cout<<"OverFlow : " <<endl;
			return;
		}
	 		arr[++top]=x;
	}
	void pop()
	{
			if(top<0)
		{
			cout<<"UnderFlow : "<<endl;
			return;
		}
			arr[top--];
	}
	void display()
	{	
			for(int i=top;i>=0;i--)
		{
			cout<<arr[i]<<endl;
		}
	}
};


	int main()
{
			int ch;
			int item;
			stack s;
			while(1)
	{
			cout<<"\n 1.Push  2.Pop 3.Display 4.Exit : "<<endl;
			cin>>ch;
			switch(ch)
		{
		
			case 1:
			cout<<"Enter the Element : "<<endl;
			cin>>item;
			s.push(item);
			break;
			case 2:
		 	s.pop();
			break;
			case 3:
			s.display();
			break;
			case 4:
			exit(0);

		
		}
	}		
			return 0;
}
