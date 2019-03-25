#include <stdio.h>

int main()
{
    char s[1000],c[1000];
    int i,sec,count,p,q,r,j=0,k,l,m,n,z;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%[^\n]",c);
    for(l=0;s[l]!='\0';l++);
    for(m=0;c[m]!='\0';m++);
    for(i=0;i<l;i++)
    {
        if(s[i]==c[j])
        {
            s[i]='\0';
            j++;
            
        }
         
    }
    for(i=0;i<l;i++)
    {
     if(s[i]!='\0')
     {
         printf("%c",s[i]);
     }
    }

    return 0;
}
