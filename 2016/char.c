#include <stdio.h>
#include <stdlib.h>
#define Num 100
struct student
{
    char num[20];//ѧ��
    char name[20];//����
    float score[3];//3�ſγɼ�
    double aver;//ƽ���ɼ�
};
int n;//����
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
    printf("��������¼��ͬѧ��������");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("��ʼ�����%d��ͬѧ����Ϣ��",i+1);
        scanf("%s%s%f%f%f",&q->num,&q->name,&q->score[0],&q->score[1],&(*q).score[2]);
        q->aver=(q->score[0]+q->score[1]+q->score[2])/3;
        q++;
    }
}
//����ƽ���ɼ��Ӹߵ������򣬲���ѡ�����򷨣����Ӷ�O(n^2)
void sort(struct student *stu)
{
    struct student max,*q=stu;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        k=i;//��¼���ֵ���±�
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
    printf("\n����ƽ���ɼ��Ӹߵ��������Ľ�����£�\n");
    for(int i=0;i<n;i++)
    {
        printf("ѧ�ţ�%-15s ������%-10s�ɼ�1��%-5.1f�ɼ�2��%-5.1f�ɼ�����%-5.1fƽ���֣�%-5.2lf\n",q->num,q->name,q->score[0],q->score[1],(*q).score[2],q->aver);
        q++;
    }
}
