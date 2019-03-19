/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[10000],n,i,j,p,min;
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        
        min=a[i];
        for(j=i;j<n;j++)
        {
            if(min>=a[j])
            {
                min=a[j];
                p=j;
            }
        }
        printf("%d ",p+1);
        a[p]=a[i];
        a[i]=min;
    }
    printf("\n\n");
/*for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}*/
    return 0;
}
