#include<stdio.h>
void main()
{
    int a,b,c,g;
    printf("\n Enter the three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            g=a;
        }
        else
        {
            g=c;
        }
    }
    else
    {
        if(b>c)
        {
            g=b;
        }
        else
        {
            g=c;
        }
    }
  printf("Greater Number= %d",g);
    }




