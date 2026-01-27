#include <bits/stdc++.h>
using namespace std;

bool valid(string s)
{
    int count = 0;
    for (char it : s)
    {
        if (it == '(')
            count++;
        else
            count--;

        if (count < 0)
            return false;
    }
    return count == 0;
}

void generateParanthesis(string s, vector<string>& ans, int n)
{
    if (s.size() == 2 * n)
    {
        if (valid(s))
            ans.push_back(s);
        return;
    }

    generateParanthesis(s + '(', ans, n);
    generateParanthesis(s + ')', ans, n);
}

int main()
{
    int n;
    cin >> n;

    vector<string> ans;
    generateParanthesis("", ans, n);

    for (auto &it : ans)
     
    
    cout << it << " ";
}

// TC O(n⋅22n)​


// optimal approach  O(22n)​  

// void solve(int n,string s,vector<string>&ans,int open ,int close )
// {
//     if(s.size()==2*n)
//     {     
//           ans.push_back(s);
//           return ;
//     }

//     if(open <n)
//     {
//         solve(n,s+'(',ans,open+1,close);
//     }
//     if(close<open)
//     {
//          solve(n,s+')',ans,open,close+1); 
//     }
// }
