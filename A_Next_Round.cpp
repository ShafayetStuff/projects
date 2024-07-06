#include <bits/stdc++.h>
#include<string.h>
using namespace std;
typedef string str;
//unfinished, out of my knowledge

int main()
{
   int n(0),k,sc,p(0);
   cin>>n>>k;
    while(n--){
        cin>>sc;
        if(sc>k){
            p++;
        }
        else if(k<2 && sc>=k){
            p++;
         }
         else if (sc==sc && sc>0){
            p++;
         }
    }
    cout<<p;
}