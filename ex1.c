#include <stdio.h>
int main()
{
    double x[9];
    double y[9];
    int i,p;
    i=0;
    p=0;
    double k=0;
    double m=0;
    double n;
    double s;
    for(i=0;i<10;i++)
    {
        x[i]=getchar();
        if(x[i]==' ')
        {
            break;
        }
        k=k*10+(x[i]-'0');

    }
    if(x[i]==' ')
    {
        for(p=0;p<10;p++)
        {
            y[p]=getchar();
            if(y[p]=='\n')
            {
                break;
            }
            m=m*10+(y[p]-'0');

        }
        if(y[p]=='\n')
        {
          n=k+m;
          s=n*n;
        }
    }
    printf("the result is:%0.2f\n",s);
}