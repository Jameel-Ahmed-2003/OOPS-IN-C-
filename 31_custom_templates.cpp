#include<bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
    private:
    vector<T>v;
    public:
    void push(T a){
        v.push_back(a);
    }
    T top(){
        return v[v.size()-1];
    }
    T pop(){
        if(v.size()!=0){
            T t=top();
            v.pop_back();
            return t;
        }
    }
};
int main(){
    Stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.pop();
    cout<<s1.pop();
    cout<<s1.top();
    Stack<string>s2;
    s2.push("Jameel");
    s2.push("Ahmed");
    return 0;
}