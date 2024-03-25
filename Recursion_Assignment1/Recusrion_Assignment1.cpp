#include<iostream>
using namespace std;

//answer 1
// int sum(int a,int b){
//     if(a>b) return 0;
//     if(a%2==0) return sum(a+1,b);
//     return a+sum(a+2,b);
// }

//answer 2
// int stairs(int n){
//     if(n==1) return 1;
//     if(n==2) return 2;
//     if(n==3) return 4;
//     int totalWays = stairs(n-1)+stairs(n-2)+stairs(n-3);
//     return totalWays;
// }

//answer3
bool powerOf2(int n){
    if(n==1) return true;
    if(n%2==0) return powerOf2(n/2);
    return false;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    cout<<powerOf2(n);
}