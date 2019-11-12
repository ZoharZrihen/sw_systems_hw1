#include "myMath.h"

double posPow(double x,int y){
	if (y == 1) return x;
	return x*posPow(x,y-1);
}

double Pow(double x, int y){
	double ans=1;
	if (x == 0) return 0;
	if (y>0) ans=posPow(x,y);
	else if (y<0) ans=1/posPow(x,-y);
	return ans;

}
double Exp(int x){
	double ans=1;
	if (x>0) ans=posPow(E,x);
	else if (x<0) ans=1/posPow(E,-x);
	return ans;
}




