#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "< Queue 1 >" << endl;
    cout << "front : " << q.front() << endl;
    cout << "back : " << q.back() << endl;
    cout << "size : " << q.size() << endl;
    cout << "Is empty : " << q.empty() << endl;
 }
