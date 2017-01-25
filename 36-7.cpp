#include <iostream>
#include "stdio.h"
using namespace std;
void last_print(int,int);

int main(){
 	int h;
 	int m;
 	cout<<"Enter the number of hours: ";
 	cin>>h;
 	cout<<"Enter the number of minutes: ";
 	cin>>m;
 	cout<<"Time:";
	last_print(h,m);
}

void last_print(int h,int m){
	printf("%d : %d",(h,m));
}
