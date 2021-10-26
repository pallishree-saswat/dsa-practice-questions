// isPrime.cpp
#include <iostream>
using namespace std;

int main() {

int n;
cin>>n;


int divider =2;


 while( divider <= n-1){
 	
 	if(n % divider == 0)
 	 {
 		cout<<"not prime";
	 }
 
 
 divider = divider +1;
 
 }
 

cout<<"is prime"<<endl;





	return 0; // return 0 inside of main means exit
}
