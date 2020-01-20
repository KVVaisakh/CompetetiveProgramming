#include<stdio.h>
int main()
{
    int t;
    char c[30];
    scanf("%d",&t);
    scanf("%s",c);
    while(t--)
    {
        char s[100],x;
        int i,j;
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
          if(s[i]=='_')   printf(" ");
          else if(s[i]>=65 && s[i]<=90)  printf("%c",c[s[i]-65]-32);
          else if(s[i]>=97 && s[i]<=122)  printf("%c",c[s[i]-97]);
          else  printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
