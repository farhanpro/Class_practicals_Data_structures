#include<iostream>
using  namespace std;
int computing(int n){
		
		if(n==1){
			return 1;
			}
		else {
	int	result =computing (n-1);//4//
		cout<<"Computing :"<<result<<endl;
		cout<<"N is"<<n<<endl;
		return n;
}
	}
int fact(int n)
{
	if(n==1)
	{
		
	cout<<"Reasult for : "<<n<<" is "<<n<<endl;
		return 1; 
	}
	else {
		int result =fact(n-1);
		cout<<"Result for :  "<<n<<" is :"<<n*result<<endl;
		return n*result;
		}
}
int main()
{
	int n;
	cout<<"Enter the number for recursion : "<<endl;
	cin>>n;
	computing(5);
	fact(n);
		
	return 0;
}

