#include <stdio.h>
int main(){
	double y=0;
	int d=1;
	double a=1,b,x;
	printf("a=");
	printf("x     y     \n");
	b=0.9990005*a;
	y=b+1.0;
	for(x=0.001;y-b>0.000001;d+=1)
	{
		x=0.001*d;
		y=b;
		printf("%f   %f\n",x,y);
		a=y;
		b=0.9990005*a;
		
	}
	return 0;
}
 


 
