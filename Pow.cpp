// #include<bits/stdc++.h>
// using namespace std;
//  double solve(int n,double x)
//  {     
//     double pow=1.0;
//      if(n==INT_MAX)
//  {
//       if(x==1)
//       return 1;
//       else if(x==-1)
//       return -1;
//       else 
//       return 0;

//  }
//  else if (n==INT_MIN)
//  {
//     if(x==1)
//     return 1;
//     else if (x==-1)
//     return -1;
//     else 
//     return 0;
//  }


//     if(n>=0)
//     {
//         while(n)
//         {
//             pow=pow*x;
//             n--;
            
//         }
//     }
//     else if(n<0) 
//     {
//         n=-n;
//         while(n>0)
//         {
//             pow=pow*x;
//             n--;
//         }
//         cout<<"pow"<<pow<<endl;
//         pow=1.0/pow;
//     }
 
//  return pow;
      
//  }
// int main()
// {  
//     int n;
//     cout<<"Enter the power"<<endl;
//     cin>>n;
//     cout<<"Enter the base value"<<endl;
//     double x;
//     cin>>x;

//    auto ans= solve(n,x);
//    cout<<"printing the ans "<<ans<<endl;

//     return 0;
// }
// // TC is O(n) 











// #include<bits/stdc++.h>
// using namespace std;
//  double solve(int n,double x)
//  {     
//       double ans=0.0;

//    // base case 
//    if(n==0)
//    return 1;
   
//    // if the value of the n is negative
//    if(n<0)
//   {   n=-n;
//        x = 1 / x;
//   }

//    // if (x^2)^n/2 
//    if(n%2==0)
//    {
//       return solve(n/2,x*x);
//    }
//    // x*x^n-1
//    else 
//    {
//      ans=x*solve(n-1,x);
//    }
 
// return ans;
      
//  }
// int main()
// {  
//     int n;
//     cout<<"Enter the power"<<endl;
//     cin>>n;
//     cout<<"Enter the base value"<<endl;
//     double x;
//     cin>>x;

//    auto ans= solve(n,x);
//    cout<<"printing the ans "<<ans<<endl;

//     return 0;
// }
// TC is O(n) 
//SC  is O(logn)





// binary exponetiation using recursion 
// use module if very large number or given in the question
// int solve(int a,int n)
// {
//     int res=solve(a,n/2);
//     if(n&1)
//     {
//        1LL* a*res*res;
//     }
//     else
//     res*res*1LL;
// }


// binary exponentiation using the iteration method 
// int solve(int a,int b)
// {  int ans;
//     const int M=1e9+7;
//      while(b>0)
//      {
//         if(b&1)
//         {
//             ans=(ans*a*1LL)%M;
//         }
//         else
//         {
//             a=(a*a*1LL)%M;
//         }
//         b=b>>1;
//      }
// }





// binary exponentiation for large number 
//a^b
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const ll M = 1e18;

// Safe multiplication: (a * b) % M
ll binmul(ll a, ll b)
{
    ll ans = 0;
    a %= M;

    while (b > 0)
    {
        if (b & 1)
            ans = (ans + a) % M;

        a = (a + a) % M;
        b >>= 1;
    }
    return ans;
}

// Binary exponentiation: (a^b) % M
ll binexp(ll a, ll b)
{
    ll ans = 1;
    a %= M;

    while (b > 0)
    {
        if (b & 1)
            ans = binmul(ans, a);

        a = binmul(a, a);
        b >>= 1;
    }
    return ans;
}





// a^b^c calcution or b is very very larege number 
class Solution {
public:
    int solve(int a, int b, int m)
    {
        long long ans = 1;
        a %= m;

        while (b > 0)
        {
            if (b & 1)
            {
                ans = (ans * 1LL * a) % m;
            }

            a = (a * 1LL * a) % m;
            b = b >> 1;
        }
        return ans;
    }

    int superPow(int a, vector<int>& b)
    {
        int bmod = 0;

        for (auto it : b)
        {
            bmod = (bmod * 10 + it) % 1140;
        }

        if (bmod == 0)
            bmod = 1140;

        int ans = solve(a, bmod, 1337);
        return ans;
    }
};







































