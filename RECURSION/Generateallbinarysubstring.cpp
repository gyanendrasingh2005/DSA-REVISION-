#include<bits/stdc++.h>
using namespace std;
void solve(int n,int index,string temp,vector<string>&ans)
{
    // base case 
    if(index==n)
    {
        ans.push_back(temp);
        temp.clear();
        return ;
    }


  

  // trying add all the 0 first  as it is lexigraphically 
    solve(n,index+1,temp+'0',ans);


    //add 1 when it is empty or last element in temp is 0 
    if(temp.empty()||temp.back()!='1')
    {
        solve(n,index+1,temp+'1',ans);
    }

    


}
int main()
{
         int n;
         cin>>n;

    vector<string>ans;
    solve(n,0,"",ans);
    for(auto it:ans)
    {
        cout<<it<<" ";

    }

}


