#include <stdio.h>
#include <math.h>

int main()
{
	float h,k,f,c,w,z;
	printf("h = ");
	int count = scanf("%f", &h);
	printf("k = ");
	int count1 = scanf("%f", &k);
	printf("f = ");
	int count2 = scanf("%f", &f);
	printf("c = ");
	int count3 = scanf("%f", &c);	
	w = log10(h + pow( f , 2 )) + pow(sin( f/k ), 2) ;
	z= pow(M_E,-c * f) * ((f + sqrt(f + h))/(f-sqrt(fabs(f - c))));
	printf("w=%f z=%f",w,z);
	return 0;
}
