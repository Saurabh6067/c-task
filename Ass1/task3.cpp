#include <stdio.h>

int main() {
    
	int days = 1329;
	int year,mod,weeks,day;
	year=days/365;
	mod=days%365;
	weeks=mod/7;
	day=234%7;
	printf("Year :%d \n",year);
	printf("Weeks :%d\n",weeks);
	printf("Days :%d",day);

    return 0;
}

