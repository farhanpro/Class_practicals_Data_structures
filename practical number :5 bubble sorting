#include "stdafx.h"
#include "iostream"
using namespace std;


int main()
{
	int arr[20],number, i, j,step,temp;
	cout << "Enter the Length of array (Max 19): ";//asking for softcoded value
	cin >> number;//recieving the soft coded value
	for (i = 0;i < number;i++) //loop created to recieve elements in the array 
	{
		cout << "\nEnter the Element of the array : ";
		cin >> arr[i];//here loop will recieve its elements
	}
	for (j = 0;j <  number - 1;j++) //outer loop
	{
		for (i = 0;i < (number - j) - 1;i++) //inner loop
		{
			if (arr[i] > arr[i + 1]) //this checks wether the first element is greater than second or not
			{
				temp = arr[i];	//if yes then it assing temp variable the value of element in the array(greater value goes into temp variable) 
				arr[i] = arr[i + 1]; //then the arr[i](current variabl) takes the smaller value
				arr[i + 1] = temp;//here we give back the value from the temp variable to the next variable
				step = 1; //step==1 if second loop is executed
			}
			if (step == 0)  //step==0 if second loop is not executed means all the values are in ascending order
			{
				break;//first loop will break
			}
			
		}
	}

	cout << "\nElements arranged in asending form ";
	for (i = 0;i <number;i++) //loop created to display all the elements of the array
	{
		cout <<"|"<<arr[i]<<"|";
	}

	return 0;
}

/*This programe is for bubble sorting in ascending order 
  to get in the decending order just change 
  if(arr[i]>arr[i+1]) to if(arr[i]<arr[i+1]
  */
