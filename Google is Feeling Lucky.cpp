#include<iostream>
#include<deque>
#include<string>
#include<algorithm>

using namespace std;

struct Node{
    string website;
    int num;
    Node(string w,int n):website(w),num(n){}
};

bool compare(const Node& a,const Node &b){
    return a.num > b.num;
}

int main(){
    int n;
    while(cin >> n){
        for(int i = 0;i < n;i++){
            deque<Node> v;
            for(int j = 0;j < 10;j++){
                string input;
                int number;
                cin >> input >> number;
                Node temp = Node(input,number);
                v.push_back(temp);
            }
            sort(v.begin(),v.end(),compare);
            int temp = v.front().num;
            cout << "Case #" << i+1 << ":" << endl;
            while(v.front().num == temp){
                cout << v.front().website << endl;
                v.pop_front();
            }
        }
    }
}
