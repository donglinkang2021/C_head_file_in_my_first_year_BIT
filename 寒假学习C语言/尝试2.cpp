#include<iostream>
#include<cstdio>
using namespace std;

int* f(int x){
	
	int* y=&x; 
	return y;
}
 int main(){
 	//int* a=f(0);
 	int* a=f(1);
 	f(0);
 	cout<<*a<<endl; 
 }
