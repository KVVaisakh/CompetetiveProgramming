#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)  scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
          for(j=0;j<i-1;j++)
          {
            if(a[j]>a[i])
            {
              printf("NO\n");
              goto end;
            }
          }
        }
        printf("YES\n");
        end:;
    }
}
