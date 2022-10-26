#include <stdio.h>
#include <stdlib.h>
#include<math.h> 
int main()
 
//y(n+1) = y(n)*(1-h)**t
{	
	FILE *fp=NULL;
 		fp=fopen("E:\\task1.random parameter a","w");
	int t = 0;
	double x = 0 ;
	double a , y1, y2, steplength;
	steplength = 0.001 ;
	printf( "Please enter the parameter :¡°a ¡±\n" ) ;
	scanf("%lf", &a ) ;
	y1 = a*( - steplength ) ;
	y2 = a*pow((1-steplength),2); 
	printf("        x                      y      \n");
	printf("  0.0000000000000         %.15lf      \n" , a);
	for ( double y = a ; y1 - y2 > 0.001*steplength ; t++ ) 
  	{
   		x += steplength ;
		y1 = a*pow((1 - steplength + (1/2) * steplength * steplength ), t ) ;
   		y2 = a*pow((1 - steplength + (1/2) * steplength * steplength ), t + 1 );
   		printf( "  %.15lf     %.15lf  \n ", x  , y2 );
   		if ( t % 100 == 0)
   		{	
 			fprintf( fp , "%lf\t%.10lf\n" , x ,y2 ) ;
		}
		
    }	
    printf( "The final value is %.15lf" , y2 );
	return 0;
	
 
}
