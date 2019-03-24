/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char s[1000],c[1000];
    int i,sec,count,p,q,r,j,k,l,m,n,z;
    scanf("%[^\n]",s);
    scanf("\n");
    scanf("%[^\n]",c);
    for(l=0;s[l]!='\0';l++);
    for(m=0;c[m]!='\0';m++);
    for(i=0;i<l;i++)
    {
        if(s[i]==' ')
        {
            n=i+1;
            k=0;
            while(s[n]!=' ')
            {
                n++;
            }
        z=n;
        for(sec=0;sec<m;sec++)
        {
            if(c[sec]==' ')
            {
                p=sec+1;
                q=0;
                while(c[p]!=' ')
                {
                    p++;
                }
                for(r=p;r>sec;r--)
                {
                    if(s[z]==c[r])
                    {
                        k++;
                        z++;
                    }
                }
            }
        }
            
            
            
            
            
            
         i=n-1;   
        }
        
    }

    return 0;
}
