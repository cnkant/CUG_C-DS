#include <stdio.h>
struct student
{
    char name[20];
    int sex;
    int score;
};
int main()
{
    struct student st,m,w;
    FILE *fp;
    fp=fopen("file1.txt","r");
    w.score=0;
    m.score=100;
    while(!feof(fp))
    {
        fscanf(fp,"%s%d%d",st.name,&st.sex,&st.score);
        printf("name:%s sex:%d score:%d\n",st.name,st.sex,st.score);
        if(!st.sex)
        {
            if(st.score>w.score)
                w=st;
        }
        if(st.sex)
        {
            if(st.score<m.score)
                m=st;
        }
        printf("%d %d\n",w.score,m.score);
    }
    fclose(fp);
    printf("\n%d %d",w.score,m.score);
    return 0;
}
