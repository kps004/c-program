/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[10000],c[10000],t;
    int a[10000],n,i,j,k,l,p=0,q,m;
//gets(s);
//gets(c);
scanf("%[^\n]",s);
scanf("\n");
scanf("%[^\n]",c);
for(l=0;s[l]!='\0';l++);
for(k=0;c[k]!='\0';k++);
printf("hello");
for(i=0;i<l;i++)
{
    if(s[i]==' ')
    {   n=0;
        m=0;
        q=i++;
        p++;
        while((s[q]!=' ')&&(m<=k))
        {
            if(c[m]==s[q])
            {
                n++;
            }
            q++;
            m++;
        }
        i=q-2;
        
      if(n==k)
      {
          printf("%d",p+1);
          break;
      }
    }
    
}

    return 0;
}
