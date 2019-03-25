/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{

int i,j,k,l=0,r=0,m,n=0,p=0,q=0,z=0;
char s[10000],a[1000],c[]="and";
scanf("%[^\n]",s);
while(s[l]!='\0')
{
    l++;
}

for(i=0;i<l;i++)
{
    
   m=0;
    if((s[i]=='a')&&(s[i+1]=='n')&&(s[i+2]=='d'))
    {
    
        q=i-2;
            while(s[q]!=' ')
            {
                a[m]=s[q];
                m++;
                q--;
                if(q==0){
                break;}
                
            }
        
        p=i+4;
        while(s[p]!=' ')
        {
            s[q]=s[p];
            q++;
            p++;
        }
        r=0;
        p=i+4;
         m--;
        while((s[p]!=' ')&&(m>=0))
        {
            s[p]='\0';
            p++;
        }
        p=i+4;
         while((s[p]!=' ')&&(m>=0))
        {
            s[p]=a[m];
            m--;
            p++;
        }
    //    s[p]=a[m];
        i=p-1;
    }
}

printf("%s",s);
    return 0;
}
