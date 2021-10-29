//将第i个字母变成第26-i+1个字母，非字母字符不变

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j;
    char c,str[100];
    gets(str);
    printf("ÃÜÂëÎª£º%s\n",str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>='A'&&str[i]<='Z')
        {
            j=str[i]-64;
            c=65+(26-j);
            str[i]=c;
        }
        else if(str[i]>='a'&&str[i]<='z')
        {
            j=str[i]-96;
            c=97+(26-j);
            str[i]=c;
        }
    }
    printf("Ô­ÎÄÎª£º%s\n",str);
    return 0;
}
