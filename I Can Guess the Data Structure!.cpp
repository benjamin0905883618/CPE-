#include<iostream>
#include<stack>
#include<queue>

using namespace std;

int main(){
    int n;
    while(cin >> n){
        int is_stack = 1;
        int is_queue = 1;
        int is_pqueue = 1;
        stack<int> s;
        queue<int> q;
        priority_queue<int> pq;
        for(int i = 0;i < n;i++){
            int c,d;
            cin >> c >> d;
            if(c == 1){
                s.push(d);
                q.push(d);
                pq.push(d);
            }
            else if(c == 2){
                if(s.empty() || s.top() != d)
                    is_stack = 0;
                if(q.empty() || q.front() != d)
                    is_queue = 0;
                if(pq.empty() || pq.top() != d)
                    is_pqueue = 0;
                if(!s.empty())
                    s.pop();
                if(!q.empty())
                    q.pop();
                if(!pq.empty())
                    pq.pop();
            }
        }
        if(is_stack + is_queue + is_pqueue > 1)
            cout << "not sure" << endl;
        else if(is_stack + is_queue + is_pqueue == 0)
            cout << "impossible" << endl;
        else{
            if(is_stack == 1)
                cout << "stack" << endl;
            else if(is_queue == 1)
                cout << "queue" << endl;
            else if(is_pqueue == 1)
                cout << "priority queue" << endl;
        }
    }
}
