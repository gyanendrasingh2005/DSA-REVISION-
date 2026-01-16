#include<bits/stdc++.h>
using namespace std;
 double solve(int n,double x)
 {     
    double pow=1.0;
     if(n==INT_MAX)
 {
      if(x==1)
      return 1;
      else if(x==-1)
      return -1;
      else 
      return 0;

 }
 else if (n==INT_MIN)
 {
    if(x==1)
    return 1;
    else if (x==-1)
    return -1;
    else 
    return 0;
 }


    if(n>=0)
    {
        while(n)
        {
            pow=pow*x;
            n--;
            
        }
    }
    else if(n<0) 
    {
        n=-n;
        while(n>0)
        {
            pow=pow*x;
            n--;
        }
        cout<<"pow"<<pow<<endl;
        pow=1.0/pow;
    }
 
 return pow;
      
 }
int main()
{  
    int n;
    cout<<"Enter the power"<<endl;
    cin>>n;
    cout<<"Enter the base value"<<endl;
    double x;
    cin>>x;

   auto ans= solve(n,x);
   cout<<"printing the ans "<<ans<<endl;

    return 0;
}
// TC is O(n) 
