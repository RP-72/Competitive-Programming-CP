#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
typedef long long int ll;
using namespace std;

#define f(abcd,n) for(int abcd=0;abcd<n;abcd++)  
#define  in(n)   cin>>n;
#define print(n) cout<<n;
#define out(n) cout<<n<<"\n";


int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
  
   ll t;
   in(t)
   while(t--){
       ll n;
       in(n);
       ll temp=n;
       ll tp=0;
       while(temp>0){
           temp=temp/2;
           tp++;

       }
       out((ll)(pow(2ll,tp-1ll)-1ll));
   }
    
    return 0;
  

}