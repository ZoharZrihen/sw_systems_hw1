#include <stdio.h>
#include "myMath.h"

int main(){
	double x;
	printf("Please enter a real number: ");
	scanf("%lf",&x);
	printf("The value of f(x)=e^x+x^3-2 at the point %0.4lf is: %0.4lf\n",x,sub(add(Exp(x),Pow(x,3)),2));
	printf("The value of f(x)=3x+2x^2 at the point %0.4lf is: %0.4lf\n",x,add(mul(x,3),mul(Pow(x,2),2)));
	printf("The value of f(x)=(4x^3)/5-2x at the point %0.4lf is: %0.4lf\n",x,sub(div(mul(Pow(x,3),4),5),mul(x,2)));
	return 0;
}
