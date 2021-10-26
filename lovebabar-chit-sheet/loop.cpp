// PrintPattern - 1.cpp
#include <iostream>
using namespace std;

int main() {

	int n;
	cin >> n;

	int row = 1, spaces, no=1, i;


   while(row <=n)
   {
   	for(int sp=1; sp<=n-row; sp++)
   	{
   		cout<<" ";
	   }
	   
	   for(i=1; i<=row; i++)
	   {
	   	cout<<i;
	   }
	
	   for(i=1; i<=row-1; i++)
	   {
	   	cout<<i;
	   }
	   
	   cout<<'\n';
	   row++;
   }


	return 0;
}

