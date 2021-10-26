#include <iostream>
using namespace std;

int main()
{
	
	
	int n,row=1,no=1,i;
	
	cin>>n;
	
	
	
	while(row<=n)
	{
		//space print
		for(int space =1; space<=n-row; space++)
		{
			cout<<" ";
		}
			
		//increasing
		for(i=1; i<=row; i++)
		{
			cout<<no;
			//no++;
		}
		 
		
		//decreasing
	
		for(i=1; i<=row-1; i++)
		{
			cout<<no<<"";
			//no--;
		}
		
		cout<<'\n';
		row++;
		
		
		
	}
	
	
	
	return 0;
}
