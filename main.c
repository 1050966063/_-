#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("��������������\n");
    int n,i=0,j=0,a[100],max=0,t;
    scanf("%d",&n);
    printf("��������%d������\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        t=a[i];
        if(t>max)  max=t;
        for(j=i+1;j<n;j++)
        {
            t=t+a[j];
            if(t>max) max=t;
        }
    }
    printf("����ֶκ�Ϊ%d\n",max);
    return 0;
}
