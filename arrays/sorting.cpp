
#include<iostream>
using namespace std;


//Sorting algorithms
//Selection sort
void selection_sort(int a[], int n)
{
	for(int i=0; i<=n-1; i++)
	{
		//find out the smallest element in unsorted array
		int min = i;
		for(int j =i; j<=n-1; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		
		swap(a[i], a[min]);
		
	}
}

//bubble_sort 
void bubble_sort(int a[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<(n-i-1); j++)
		{
			if(a[j] > a[j+1])
			{
				swap(a[j], a[j+1]);
			}
		}
	}
}
 





 



int main()
{

int n;
cin>>n;

int a[n];

for(int i =0; i<n; i++)
{
	cin>>a[i];
}

//selection_sort(a, n);
bubble_sort(a, n);


for(int i=0; i<n; i++)
{
	cout<<a[i]<<", ";
}





return 0;
}