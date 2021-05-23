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


int target;
cout<<"enter target sum --->";
cin>>target;

int i = 0;
int j = n-1;

while(i< j)
{
	int curr_sum = a[i] + a[j];
	
	if(curr_sum > target)
	{
		j--;
	}
	else if(curr_sum < target)
	{
		i++;
	}
	else if(curr_sum == target){
		cout<<" Pair --->"<<a[i]<<"and "<<a[j]<<endl;
		i++;
		j--;
	}
	
}

	
	

	return 0;
}
