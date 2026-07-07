/*
    https://vjudge.net/contest/827950#problem/A
*/

#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    int n,x; cin>>n>>x;
    vector<int> vt;
    for (int i = 0; i < n; i++)
    {
        int temp; cin>>temp;
        vt.push_back(temp);
    }

    sort(vt.begin(),vt.end());
    
    int sum = 0;
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(sum+vt[i]>=10){
            count++;sum=0;
        }else{
            sum+=vt[i];
        }
    }
    cout<<count<<endl;
    return 0;
}
