#include<iostream>
using namespace std;

int main()
{

//array - 

//int arr[10];

/*
cout<<arr[0]<<"   ";//10
cout<<arr[2]<<endl;  //30

arr[0] = 100;


cout<<arr[0]; //100
int arr[10] = {10,20,30,40,50};
cout<<sizeof(arr);
//10 * 4 = 40  40/4 =10

int n = sizeof(arr)/sizeof(int);

for(int i =0; i<n; i++)
{
	cout<<arr[i]<<", "; 
}

*/
int n;
cin>>n;

int arr[n];

for(int i =0; i<n; i++)
{
	cin>>arr[i];
}

for(int i =0; i<n; i++)
{
	cout<<arr[i]<<", ";
}







return 0;
}
