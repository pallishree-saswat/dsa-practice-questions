

/*Binary search
//array must be sorted
a[1,2,3,4,5,6,7]  1+ 7 = 8/2 =4 != 5


start = 0
end = n-1
mid = start + end/2;

mid == searching_key --> return mid

mid > key --> end = mid-1;
mid < key --> start = mid +1

*/
#include<iostream>
using namespace std;


int binary_search(int a[], int n, int key)
{
	int start = 0;
	int end = n-1;
	
	while(start <= end)
	{
		int mid = (start + end)/2;
		
		if(a[mid] == key)
		{
			return mid;
		}
		
		else if(a[mid] > key)
		{
			end = mid -1;
		}
		else{
			start = mid +1;
		}
	}
	
	return -1;
	
}




int main()
{

int n;
cin>>n;
int key;

int a[n];


for(int i=0; i<n; i++)
{
	cin>>a[i];
}

cout<<"enter your key---> ";
cin>>key;

cout<<binary_search(a,n,key);



return 0;
}
