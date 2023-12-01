#include <stdio.h>
#include <math.h>

int main() {
	float g;
	float a;
	float x;
	float q;
	float t;
	float e;
	float z;
	for(a=2;a<=4;a= a + 1.3) {
		for(x=1;x<=3;x = x + 1.3) {
			q = sqrt(tan((a - x)/x));
			t = log((a * a)/x);
			e = atan((x * cbrt(a))/(a + 2,5));
			g = fmin(q,t);
			z = fmin(g,e);
			printf("\n x = %f a = %f z = %f \n",x,a,z);
		}
		}
	return 0;
}
