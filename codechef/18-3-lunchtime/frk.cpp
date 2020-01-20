#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n,c=0,i;
    string s;
    cin>>n;
    while(n--)
    {
          i=0;
          cin>>s;
          while(s[i]!='\0')
          {

                    if(s[i]== 'c')
                    {
                         if(s[i+1]!='\0')
                         if(s[i+1]=='h')
                         {
                              c++;
                              goto last;
                         }
                    }
                    else if(s[i]=='h')
                    {
                         if(s[i+1]!='\0')
                         if(s[i+1]=='e')
                         {
                              c++;
                              goto last;
                         }
                    }
                    else if(s[i]=='e')
                    {
                         if(s[i+1]!='\0')
                         if(s[i+1]=='f')
                         {
                              c++;
                              goto last;
                         }
                    }

               i++;
          }
          last:;
    }
    cout<<c;
    return 0;
}
