#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,b,c,d,e,f,g,h,i,k,l,m,p;
	int year,month,day;

	printf("Enter Year: ");
	scanf("%d", &year);

	printf("in %d, Easter is ", year);

	a = year % 19;
	b = year / 100;
	c = year % 100;
	d = b / 4;
	e = b % 4;
	f = (b+8) / 25;
	g = (b-f+1) / 3;
	h = (19*a+b-d-g+15) % 30;
	i = c / 4;
	k = c % 4;
	l = (32+2*e+2*i-h-k)%7;
	m = (a+11*h+22*l) / 451;
	month = (h+l-7*m+114) / 31;
	p = (h+l-7*m+114) % 31;
	day = p + 1;
	if (month == 3) {
		printf("March");
	} else {
		printf("April");
	}
	printf(" %d\n",day);
	return EXIT_SUCCESS;
}