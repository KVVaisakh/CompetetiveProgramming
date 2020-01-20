#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
         int a,c=0;
         for(int i=0;i<5;i++)
         {
              cin>>a;
              if(a)      c++;
         }
         switch(c)
         {
              case 0:cout<<"Beginner\n";     break;
              case 1:cout<<"Junior Developer\n";     break;
              case 2:cout<<"Middle Developer\n";     break;
              case 3:cout<<"Senior Developer\n";     break;
              case 4:cout<<"Hacker\n";     break;
              case 5:cout<<"Jeff Dean\n";     break;
              default: cout<<"error";
         }
    }
    return 0;
}
