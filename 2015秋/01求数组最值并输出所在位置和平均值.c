#include <stdio.h>
int main()
{
    int a[4][5],i,j,max_i,max_j,min_i,min_j,max,min,sum;
    double aver;
    printf("输入20个数字：");
    for(i=0;i<4;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    max=min=a[0][0];
    sum=max_i=max_j=min_i=min_j=0;
    for(i=0;i<4;i++)
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
            sum+=a[i][j];
        }
    aver=sum/20.0;
    printf("最大值为%d,行号为%d,列号为%d\n最小值为%d,行号为%d,列号为%d\n平均值为%.2f\n",max,max_i+1,max_j+1,min,min_i+1,min_j+1,aver);

    return 0;
}
