#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,e,f;
    float c,d,g,h;
    scanf("%d\t%d",&a,&b);
    scanf("%f\t%f",&c,&d);
    e=a+b;
    f=a-b;
    printf("%d %d",e,f);
    g=c+d;
    h=c-d;
    printf("\n%.1f %.1f",g,h);
    
    return 0;
}
