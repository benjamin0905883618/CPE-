#include<iostream>
#include<stack>
#include<vector>

using namespace std;

int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack 1 \{top : " << s.top() << ", ";
    cout << "size : " << s.size() << "\}" << endl;
    vector <int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(4);
    stack<int,vector<int>> s2(v);
    cout << "Stack 2 \{top : " << s2.top() << ", ";
    cout << "size : " << s2.size() << "\}" << endl;
    for(int i = 0;i < s.size();i++)
        s.pop();
    cout << "After clean, Stack 1 size : " << s.empty() << endl;
}
