#include <stdio.h>
int main()
{
    int a[4][5],i,j,max_i,max_j,min_i,min_j,max,min;
    printf("输入20个数字：");
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    max=min=a[0][0];
    max_i=max_j=min_i=min_j=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]>max)
            {
                max=a[i][j];
                max_i=i;
                max_j=j;
            }
            else if(a[i][j]<min)
            {
                min=a[i][j];
                min_i=i;
                min_j=j;
            }
        }
    }
    printf("最大值为%d,下标为(%d,%d)\n最小值为%d,下标为(%d,%d)\n",max,max_i,max_j,min,min_i,min_j);

    return 0;
}
