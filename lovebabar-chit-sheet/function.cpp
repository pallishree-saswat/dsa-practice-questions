#include<iostream>
using namespace std;




void mergesort(int a[], int b[], int m, int n)
{
    int i=m -1;
    int j= n-1;
    int k = m+n-1;


    while(i>=0 and  j>= 0)
    {
        if(a[i] > b[j])
        {
            a[k] = a[i];
            k--;
            i--;
        }
        else{
            a[k] = b[j];
            k--;
            j--;
        }
    }

    while(j>= 0)
    {
        a[k] = b[j];
        k--;
        j--;
    }
}




int main () {
int a[100] = {1,2,4,5,6,7,9};
int b[] = {3,5,8,10};
int m = 8;
int n =4;

mergesort(a,b,m,n);
for(int i=0; i<m+n; i++)
{
    cout<<a[i];
}
    return 0;
}
