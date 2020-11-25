#include"rfs.h"
int mm(int a[10])
{
    int m,j;
    m=a[0];
    for(j=0;j<10;j++)
    {
        if(a[j]>m)
        m=a[j];
    }
    return m;
}