#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<string> set_;

    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin>>temp;

        set_.insert(temp);
    }
    
    int count =0;
    for (auto &&i : set_)
    {
        count++;
    }

    
    cout<<count<<endl;
    return 0;
}
