#include<bits/stdc++.h>
#define ll long long

using namespace std;
void insertatbottom(int val,stack<int>&st)
{
    if(st.empty())
    {
        st.push(val);
        return ;
    }
    int k=st.top();
    st.pop();

    insertatbottom(val,st);

    st.push(k);
}
 void reverse(stack<int>&st)
 {
      if(st.empty())
      {   
        return;
     }
        // pop the top element 
           int val=st.top();
           st.pop();

           //recursively reverse the stack 
           reverse(st);

           insertatbottom(val,st);


      
 }
int main()
{  
      stack<int>st;
    st.push(2);
    st.push(3);
    st.push(8);
    st.push(4);
   
    reverse(st);
   
    cout<<"Printing the reverse stack"<<endl;
    while(!st.empty())
    {
        cout<<"  "<<st.top();
        st.pop();

    }
}
