#include<stdio.h>
using namespace std;

int main(){
    int n;
    while(scanf("%d",&n)!= EOF){
        for(int i = 0;i < n;i++){
            int d,l;
            scanf("%d %d",&d,&l);
            l--;
            int result = 1;
            for(int j = 0;j < d-1;j++){
                result = result * 2 + (l % 2);
                l /= 2;
            }
            printf("%d\n",result);
        }
    }
}
