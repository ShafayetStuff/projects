#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef string str;

int main()
{
   int n(0),k,sc,p(0);
   cin>>n>>k;
    while(n--){
        cin>>sc;
        if(sc>k){
            p++;
        }
        else if(sc==k){
            p++;
         }
    }
    cout<<p;
}