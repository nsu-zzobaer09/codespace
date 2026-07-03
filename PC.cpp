/*
    https://vjudge.net/contest/826394#problem/C
*/

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

vector<string> parseStr(string str){
    int len = str.length();
    vector<string> returnArr;

    for (int i=0,j=0; i < len; i++)
    {  

        if (str[i]==',')
        {
            string temp = "";
            while(j<=i)
            {
                temp+=str[i];
                j++;
            }
            returnArr.push_back(temp);
            temp = "";
        }
    }
    return returnArr;
}


int main(int argc, char const *argv[])
{
    string s;
    cin>>s;
    for (auto &&i : parseStr(s))
    {
        cout<<i<<endl;
    }
    
    return 0;
}
