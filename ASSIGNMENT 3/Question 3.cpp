#include<stdio.h>
int main()
{

    int j=0,m=0;
    int i;
    int a[3];
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            j++;
        }
        else if(a[i]<b[i])
        {
            m++;
        }
    }
    
    printf("%d %d",j,m);

}
