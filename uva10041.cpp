#include<iostream>
#include<algorithm>
using namespace std;

int T;
int t;
int num;
int *data;

void init(){
    cin >> T;
    t = 0;
}

bool input(){
    if(t++ == T)
        return false;
    cin >> num;
    data = new int [num];
    for(int i = 0;i < num;i++)
        cin >> data[i];
    sort(data,data + num);
}

int run(){
    int median;
    int sum = 0;
    if(num % 2 == 0)
        median = (data[num/2 - 1] + data[num/2]) / 2;
    else
        median = data[num/2];
    for(int i = 0;i < num;i++){
        if(data[i] < median)
            sum += median - data[i];
        else
            sum += data[i] - median;
    }
    return sum;
}

int main(){
    init();
    while(input())
        cout << run() << endl;
}
