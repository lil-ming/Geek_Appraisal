#include <stdio.h>
#include <stdlib.h>
//������ʽ��y(n+1) = y(n)*[1-h+(h^2)/2]**t 
void f(double y1); 
double dy , y2 , y1 , x = 0 , a , h = 0.001 ;        
int main()
{
	printf("Enter the parameter 'a'\n");
	scanf("%lf",&a) ;
	y1 = a;
	printf("      x            y      \n");
	f(y1);
	return 0;
}

void f(double y1)                                      //���������� dy 
{
	y2 = y1*(1-h+(h*h)/2);
	dy = y1 - y2;
	printf("  %.10lf     %.10lf  \n", x  , y2 );
	y1 = y2;
	x += h;
	if(dy > 0.001*h)                                   //�ж�����Ƿ�ﵽ��׼ 
	{
		f( y1);                                        
	}			
}
