#include<iostream>
using namespace std;



//function
// datatypes functionname {}
//function defination
 void printHello(){
      	cout<<"Helooo c++";
 }


void display(){
	cout<<"I am from display function"<<endl;
	printHello();
}


int square( int n){

	int a = n * n ;
    return a;
}



int main(){
	
	cout<<"Hello world!!!!"<<endl;
//	display();

int n ;
cin>>n;

int result = square(n);

int c = result  + 10;
cout<<c;

	
	return 0;
}



