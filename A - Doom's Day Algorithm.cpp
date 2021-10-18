#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int arr[] = {31,28,31,30,31,30,31,31,30,31,30,31};

    int num;
    while(cin >> num){
        for(int i = 0;i < num;i++){
            int mon,dat;
            int sum = 0;
            cin >> mon >> dat;
            for(int j = 0;j < mon-1;j++)
                sum += arr[j];
            sum += dat;
            //cout << "sum : " << sum << endl;
            switch(sum % 7){
            case 0:
                cout << "Friday" << endl;
                break;
            case 1:
                cout << "Saturday" << endl;
                break;
            case 2:
                cout << "Sunday" << endl;
                break;
            case 3:
                cout << "Monday" << endl;
                break;
            case 4:
                cout << "Tuesday" << endl;
                break;
            case 5:
                cout << "Wednesday" << endl;
                break;
            case 6:
                cout << "Thursday" << endl;
                break;
            }
        }
    }
}
