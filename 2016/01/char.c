#include <stdio.h>
int main()
{
    char str[80],max,*p,*q;
    q=p=str;
    gets(p);
    max=*p++;
    while(*p)
    {
        if(max<*p++)
        {
            max=*p;
            q=p;
        }
        p++;
    }
    while(q>str)
    {
        //*q=*--q;  �������У���Ϊ--q֮��=ǰ���*qҲ�����*(q-1)�����������ֵ
        *q=*(q-1);
        q--;
    }
    *q=max;
    puts(str);
    return 0;
}
