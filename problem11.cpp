/*
    https://vjudge.net/contest/826394#problem/M
*/


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1, s2;
    cin>>s1>>s2;

    long long l1,l2;
    l1 = s1.size();
    l2 = s2.size();
    
    while (l1--&&l2--)
    {
        if(s1[l1]!=s2[l2]){
            l1++;l2++;
            break;
        }
    }
    cout<<l1+l2<<endl;
}