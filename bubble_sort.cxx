#include<iostream>
using namespace std;

int main()
{
	int array[9]={6,9,4,3,5,1,2,8,7};
	int n=9,temp=0,i,j;
	for( i=0;i<n;i++)
	{
		cout<<array[i]<<"\t";
	}
	
	//sorting loop
	for(i=0;i<n;i++)
	{
		for( j=0;j<(n-1-i);j++)
		{
			if(array[j]>array[j+1])
			{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		}
	}
	
	cout<<"\n";
	cout<<"After sorting\n";
	for(i=0;i<n;i++)
	{
		cout<<array[i]<<"\t";
	}
}