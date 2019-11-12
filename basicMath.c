#include <stdio.h>
#include "myMath.h"


float add(float x,float y){
	return (x+y);}
float sub(float x, float y){
	return add(x,-y);}
double mul(double x, int y){
	return (x*y);}
double div(double x, int y){
	if (y == 0)	{
		printf("Cannot divide by 0\n");
		return y;}
	else return (x/y);}

