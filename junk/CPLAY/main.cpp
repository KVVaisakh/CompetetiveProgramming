#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[20];
    while(cin>>a)
    {
        int scorea=0,scoreb=0,i;
        for(i=0;i<10;i++)
        {
            if(i%2) scoreb=scoreb+int(a[i])-48;
            else    scorea=scorea+int(a[i])-48;

            if(scorea+5-(i+2)/2<scoreb)
            {
                cout<<"TEAM-B "<<i+1<<endl;
                goto next;
            }
            else if(scoreb+5-(i+1)/2<scorea)
            {
                cout<<"TEAM-A "<<i+1<<endl;
                goto next;
            }
        }
        for(;i<20;i=i+2)
        {

            if(a[i]=='0' && a[i+1]=='1')
            {
                cout<<"TEAM-B "<<i+2<<endl;
                goto next;
            }
            else if(a[i]=='1' && a[i+1]=='0')
            {
                cout<<"TEAM-A "<<i+2<<endl;
                goto next;
            }
        }
        cout<<"TIE\n";
        next:;
    }
    return 0;
}
