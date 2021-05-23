/*Generate all sub arrays of an array
a[1,2,3,4]
1
2
3
4

1,2
2,3
3,4

1,2,3
2,3,4

1,2,3,4
*/

#include<iostream>
using namespace std;

int main()
{
	
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i =0; i<n; i++)
	{
		cin>>a[i];
	}
	
	//generate all sub arrays     1,2,3,4
	for(int i =0; i<n; i++)         //1
	{
		for(int j=i; j<n; j++)      //1,2,3,4
		{
			for(int k=i; k<=j; k++)  //1,2,3,4
			{
				cout<<a[k];
			}
			
			cout<<endl;
		}
		
		cout<<endl;
	}
	
	
	
	
	return 0;
}













