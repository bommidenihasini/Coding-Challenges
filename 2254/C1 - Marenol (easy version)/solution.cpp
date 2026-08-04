#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t = 1;
    cin >> t;
    while (t--) {
       int n;
       cin >> n;
       string s;
       cin >> s;
       string b;
       cin >> b;
       n=s.size();
       int s_even=0,s_odd=0;
       int b_even=0,b_odd=0;
       for(int i=0;i<n;i++){
           if(i%2==0){
             if(s[i]=='1'){
                 s_even++;
             }
             if(b[i]=='1'){
                 b_even++;
             }
           }
           else{
               if(s[i]=='1'){
                   s_odd++;
               }
               if(b[i]=='1'){
                   b_odd++;
               }
           }
       }
       if(s_even==b_even && s_odd==b_odd){
           cout <<"yes"<<endl;
       }
       else{
           cout << "no"<< endl;
       }
    }
    return 0;
}