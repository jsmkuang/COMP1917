/*
   heron.c
   Using Heron's formula to compute the area of a triangle
   Created by Shuming KUANG
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float a,b,c; // sidelengths of a triangle
	float s;
	float area;

	printf("Enter sidelengths of a triangle: \n");

	scanf("%f %f %f", &a, &b, &c);

	// compute semi-perimeter
	s = (a + b + c) / 2;

	// just check the triangle inequality
	if (a >= b+c || b >= a+c || c >= a+b) {
		printf("Error: triangle inequality violated.\n");
	} else {
		//compute the area using Heron's formula
		area = sqrt(s*(s-a)*(s-b)*(s-c));

		printf("Area = %.2f\n", area);
	}

	return EXIT_SUCCESS;
}