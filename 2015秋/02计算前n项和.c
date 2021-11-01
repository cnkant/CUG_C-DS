/*计算2/1,3/2,5/3,8/5,13/8,21/13...的和*/

#include <stdio.h>
int main()
{
    double calSequence(int);
    int n;
    double sum;
    printf("输入n的值：");
    scanf("%d",&n);
    sum=calSequence(n);
    printf("前%d项和为%.2f\n",n,sum);
    return 0;
}
double calSequence(int n)
{
    int i;
    double temp,sum=0,up=2,down=1;
    for(i=1;i<=n;i++)
    {
        printf("sum=%.2f+%d/%d\n",sum,(int)up,(int)down);
        temp=up;
        sum+=up/down;
        up=up+down;
        down=temp;
    }
    return sum;
}
