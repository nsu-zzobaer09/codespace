/*
    http://vjudge.net/contest/830884#problem/A
*/

#include<bits/stdc++.h>
using namespace std;


int searchf(vector<int> arr,int start, int end,int s){
    int mdp = round(((start+end)/2.0));
    if(arr[mdp]==s) return mdp;
    if(start<=end&&start>=0){
        if (arr[mdp]>s)
        {
            return searchf(arr,start,mdp-1,s);
        }
        if(arr[mdp]<s){
            return searchf(arr,mdp+1,end,s);
        }
    } 
    return -1;
}

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int n,q;
    cin>>n>>q;
    vector<int> arr;

    for (int i = 0; i < n; i++){
        int tmp; cin>>tmp;
        arr.push_back(tmp);
    }
    for (int i = 0; i < q; i++)
    {
        int s; cin>>s;
        cout<<searchf(arr,0,n-1,s)<<endl;
    }
    
    return 0;
}

