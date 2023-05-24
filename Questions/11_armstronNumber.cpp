// write  a programme to check the number is armstrong or not
// armstrongNUmber:- the armstrong number is a special number which a special property the sum of  every digit cube is equal to actual number
#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n=153;
    int d=n;
    int sum=0;
    while(n>0){
        int last = n%10;
        // sum+=(last*last*last);
        sum+=pow(last,3);
        n=n/10;
    }
    if(sum==d){
        cout<<"the number is armstrong";
    }
    else{
        cout<<"the number is not armstrong";
    }
    return 0;
}