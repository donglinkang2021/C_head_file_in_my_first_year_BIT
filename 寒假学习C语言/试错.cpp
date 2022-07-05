#include<iostream>
#include<cstdio>

using namespace std;

int* f(int x){
	int* y=&x;
	return y;
}
 int main(){
 	cout<<*f(0)<<endl; 
 }
