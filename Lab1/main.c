#include "pch.h"
#include <stdio.h>

int main(void)
{
	float r;
	float a;
	float S;
	const float P = 3.14;

	printf("r=");
	scanf_s("%f=", &r);
	printf("a=");
	scanf_s("%f=", &a);
	S = P * r*r - a * a;
	printf("plosad` =%f\n", S);

	return 0;
}
