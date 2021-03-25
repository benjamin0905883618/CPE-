#include<iostream>
#include<algorithm>
using namespace std;

int num;
int d;
int data[10000];

struct node{
    int data;
    node *prev,*next;
    node(int d,node *p,node *n):data(d),prev(p),next(n){}

    void insertAfter(int d){
        node *temp = new node(d,this,this->next);
        temp->next->prev = temp;
        temp->prev->next = temp;
    }
    void insertBefore(int d){
        node *temp = new node(d,this->prev,this);
        temp->next->prev = temp;
        temp->prev->next = temp;
    }
    void remove(){
        this->next->prev = this->prev;
        this->prev->next = this->next;
        delete this;

    }
};

node *head;
node *tail;

bool input(){
    cin >> num >> d;
    if(num  ==  d && num == 0)
        return false;
    head = new node(0,NULL,NULL);
    tail = new node(0,head,NULL);
    head->next = tail;
    for(int i = 0;i < num;i++){
        cin >> data[i];
    }
    sort(data,data+num);
    /*for(int i = 0;i < num;i++){
        cout << data[i] << " ";
    }
    cout << endl;*/
    return true;
}
void run(){
    node *cur = head;
    for(int i = 0;i < d;i++){
        for(int j = 0;j < num;j++){
            if(data[j] % d == i){
                if(data[j] % 2 == 1){
                    cur->insertAfter(data[j]);
                }
                else{
                    tail->insertBefore(data[j]);
                }
            }
        }
        cur = tail->prev;
    }
    //cout << "checkpoint" << endl;
}
void print(){
    //cout << head->next->data << endl;
    for(node* i = head->next; i != tail ; i = i->next){
        //cout << "test" << endl;
        cout << i->data << endl;
    }
}
int main(){
    while(input()){
        run();
        print();
    }
    cout << num << " " << d << " " << endl;
}