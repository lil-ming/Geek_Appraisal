#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
int main()
{
    double y[100001];                    
	int n;
	int t=1;
	double h,a,i,j;
	h=0.001;                
	i=h*h/2;               
	j=1-h+i;                
	printf("y(0)=");
	//scanf("%lf",&a);
	a = 1 ;
	printf("    x         y\n");
	y[0]=a;
	for(n=1;n>0;n++)
	{      
		 for(;t<n;t++)
		 {
		 		double k=1-h+i;
		 	j*=k;
		 }
		 y[n]=a*j;
		 printf("%.12lf  %.12lf\n",n*h,y[n]);
		if(y[n-1]-y[n]<0.001*h)
	 	{
	   		break;	                  
		} 
	}
		printf("The final value is %.12lf",y[n]);
		return 0;
}
