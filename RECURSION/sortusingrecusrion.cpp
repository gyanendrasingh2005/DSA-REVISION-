#include<bits/stdc++.h>
using namespace std;
void insert(int temp,stack<int>&st)
{    
    // if the element is smaller then directly push in the stack 
    if(st.empty()||st.top()<=temp)
    {
        st.push(temp);
        return ;

    }
     
    // take out the all the elemnt out untill you find  the correct place to insert 
    int s=st.top();
    st.pop();
    
      //calling recusrively 
    insert(temp,st);

   // now insert all the element which you have been taken out 
    st.push(s);
}
void sort(stack<int>&st)
{  
    // take out element untill it become the empty
      if(!st.empty()){
         
           int top=st.top();
           st.pop();

           // calling recusively the sort function 
           sort(st);
              
           // calling the insert function 
           insert(top,st);
      }
}
int main()
{  
    stack<int>st;
    st.push(2);
    st.push(3);
    st.push(8);
    st.push(4);
    sort(st);
    cout<<"Printing the sorted stack"<<endl;
    while(!st.empty())
    {
        cout<<""<<st.top()<<endl;
        st.pop();

    }
    return 0;
}