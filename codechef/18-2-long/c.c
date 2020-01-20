#include <stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long n,m,x,k,e=0,o=0,xe,xo,i;
        scanf("%ld%ld%ld%ld",&n,&m,&x,&k);
        char s[k];
        scanf("%s",&s);
        if(m*x<n || k<n)   printf("no");
        else
        {
            for(i=0;i<k;i++)
                if(s[i]=='E')   e++;
                else            o++;
            if(m%2)
            {
                if(((m/2)+1)*x>o)   xo=o;
                else                xo=((m/2)+1)*x;
            }
            else
            {
                if((m/2)*x>o)       xo=o;
                else                xo=(m/2)*x;
            }
            if((m/2)*x>e)       xe=e;
            else                xe=(m/2)*x;
            if(n>(xe+xo))       printf("no");
            else                printf("yes");
        }
        printf("\n");
    }
    return 0;
}
