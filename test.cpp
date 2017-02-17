#include <stdio.h>
/*
Example to understand reference vs pointer.
C doesn't have reference variable. But reference can be stored in a pointer.
C++ does have reference variable. Which can't be changed to refer another entity
once initialized.
@author:- purvendra
*/
int main(){
	int x = 10;	
	int y = 15;
	int z = 20;
	int& ref = x; //reference variable to refer x.
	printf("ref before: %d\n", ref);
	ref = y; //it will change the value of x. Reference wouldn't be reassigned to refer y.
	int *ptr = &ref;
	printf("ref = %d\n x = %d\n y = %d\n ptr = %d\n", ref, x, y, *ptr);
	ptr = &z;
	printf("new ptr = %d\n y = %d\n", *ptr, y);
	return 0;
}
