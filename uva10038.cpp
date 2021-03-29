#include<iostream>
using namespace std;

int num;
int data[3001];
int check[3001];
int check_jolly(){
    for(int i = 1;i < num;i++){
        int check_value = data[i] - data[i-1];
        if(check_value < 0){
            check_value = - check_value;
            check[check_value] += 1;
            if(check[check_value] > 1 || check_value >= num)
                return 0;
        }
        else if(check_value > 0){
            check[check_value] += 1;
            if(check[check_value] > 1 || check_value >= num)
                return 0;
        }
        else
            return 0;

    }
    return 1;
}       

int main(){
    while(cin >> num){
        for(int i = 0;i < num;i++){
            cin >> data[i];
            check[i] = 0;
        }
        int answer = check_jolly();
        if(answer == 0)
            cout << "Not jolly" << endl;
        else
            cout << "Jolly" << endl;

    }

}