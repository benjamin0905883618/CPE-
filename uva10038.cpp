#include<iostream>
using namespace std;


int main(){
    int number;
    while(cin >> number){
        int result = 1;
        int *arr = new int [number];
        for(int i = 0;i < number; i++)
            arr[i] = 0;
        int pre;
        cin >> pre;
        int temp;
        for(int i = 1; i < number; i++){
            cin >> temp;
            //cout << "pre : " << pre << "temp : " << temp << endl;
            int check;
            if(temp > pre)
                check = temp - pre;
            else
                check = pre - temp;

            if(check > number - 1){
                result = 0;
                //cout << "case 1 "<< endl;
            }
            else if(arr[check] == 1){
                result = 0;
                //cout << "case 2 " << endl;
            }
            else{
                arr[check]++;
            }

            pre = temp;
        }
        if(result == 1)
            cout << "Jolly" << endl;
        else
            cout << "Not jolly" << endl;
    }
}
