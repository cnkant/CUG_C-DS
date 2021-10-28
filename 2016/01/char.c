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
        //*q=*--q;  这样不行，因为--q之后=前面的*q也变成了*(q-1)，自身给自身赋值
        *q=*(q-1);
        q--;
    }
    *q=max;
    puts(str);
    return 0;
}
