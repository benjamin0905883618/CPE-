#include <iostream>
using namespace std;

int main(){
    int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string week[7] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int number;
    while(cin >> number){
        for(int i = 0;i < number;i++){
            int mon,date;
            cin >> mon >> date;
            int sum = 0;
            for(int j = 0;j < mon-1;j++)
                sum += month[j];
            sum += date;
            //cout << sum << endl;
            int answer = (sum - 3) % 7;
            //cout << answer << endl;
            cout << week[answer] << endl;

        }       
    }
    
}