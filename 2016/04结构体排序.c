#include <stdio.h>
#include <stdlib.h>
#define Num 100
struct student
{
    char num[20];//学号
    char name[20];//姓名
    float score[3];//3门课成绩
    double aver;//平均成绩
};
int n;//数量
int main()
{
    void input(struct student *stu);
    void sort(struct student *stu);
    void print(struct student *stu);
    struct student st[Num],*p=&st;
    input(p);
    sort(p);
    print(p);
    return 0;
}
void input(struct student *stu)
{
    struct student *q=stu;
    int i;
    printf("请输入需录入同学的数量：");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("开始输入第%d个同学的信息：",i+1);
        scanf("%s%s%f%f%f",&q->num,&q->name,&q->score[0],&q->score[1],&(*q).score[2]);
        q->aver=(q->score[0]+q->score[1]+q->score[2])/3;
        q++;
    }
}
//按照平均成绩从高到低排序，采用选择排序法，复杂度O(n^2)
void sort(struct student *stu)
{
    struct student max,*q=stu;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        k=i;//记录最大值的下标
        max=*(q+i);
        for(j=i;j<n;j++)
        {
            if((q+j)->aver>max.aver)
            {
                max=*(q+j);
                k=j;
            }
        }
        for(j=k;j>i;j--)
        {
            *(q+j)=*(q+j-1);
        }
        *(q+i)=max;
    }
}
void print(struct student *stu)
{
    struct student *q=stu;
    printf("\n按照平均成绩从高到低排序后的结果如下：\n");
    for(int i=0;i<n;i++)
    {
        printf("学号：%-15s 姓名：%-10s成绩1：%-5.1f成绩2：%-5.1f成绩三：%-5.1f平均分：%-5.2f\n",q->num,q->name,q->score[0],q->score[1],(*q).score[2],q->aver);
        q++;
    }
}
