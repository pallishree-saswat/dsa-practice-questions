#include<iostream>
using namespace std;

   int search(int a[],int n, int target) {
        int s =0;
        int e=n-1;
        while(s<=e){
        int mid = (s+e)/2;
            if(a[mid] == target)
            {
                return mid;
            }
            else if(a[s] <= a[mid])
             {
                if(target >= a[s] and target <= a[mid])
                {
                    e= mid-1;
                }
                else{
                    s= mid+1;
                }
            }
            
            else{
                if(target>=a[mid] and target <= a[e])
                {
                    s = mid+1;
                }
                else{
                    e= mid-1;
                }
            }
            
     
        }
           return -1;
    }
    
    int main()
    {
    	int n = 5;
    	int a[] = {4,5,1,2,3};
    	
    	cout<<search(a,n,2);
    	
    	return 0;
	}
    
    
