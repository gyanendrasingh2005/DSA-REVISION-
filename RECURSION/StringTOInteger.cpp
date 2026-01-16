#include<bits/stdc++.h>
using namespace std;
int solve(string s)
{
      int i=0;
      int n=s.size();
      int sign=1;
      int num=0;
      //icrementing the i as removing the whitspaces 

     while (i < n && s[i] == ' ')
      {
            i++;
      }
// storing  the sign to check in the end if the number was positive or the negative 
     if (i < n && (s[i] == '+' || s[i] == '-'))
    {
        if (s[i] == '-')
            sign = -1;
        i++;
    }

      // now construct the number and check the numberr in the range or not 
      while(i<n&&(isdigit (s[i])))
      {
          if(num>INT_MAX/10 ||(num==INT_MAX/10&&s[i]>'7'))
    {
               return sign==-1?INT_MIN:INT_MAX;
    }  

    num=num*10+(s[i]-'0');
    i++;
      }
      
    

      return num*sign;
      
}
int main()
{     
      int n;
      cin>>n;
     string s;
     cin>>s;
    int ans= solve(s);
    cout<<"printing the ans "<<ans<<endl;
    
}


// Time Complexity: O(n)
// Space Complexity: O(n)
