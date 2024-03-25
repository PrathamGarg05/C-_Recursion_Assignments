#include<iostream>
#include<vector>
using namespace std;

//answer 1
// void print(vector<int>& v, int n){
//     if(n==0) return;
//     cout<<v[n-1]<<endl;
//     print(v,n-1);
// }
// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(5);
//     int n = v.size();
//     print(v,n);
// }

//answer 2
// int printidx(vector<int>&v, int n, int ele){
//     if(n==0) return -1;
//     if(v[n-1]==ele) return n-1;
//     return printidx(v,n-1,ele);
// }

//answer 4
void print(vector<int>& v,int n){
    if(n==0) return;
    vector<int> ans(n-1);
    for(int i=n-1;i>=0;i--){
        if(i !=0) ans[i-1] = v[i] + v[i-1];
        cout<<v[n-i-1]<<" ";
    }
    cout<<endl;
    print(ans,n-1);
}
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(4);
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    int n = v.size();
    print(v,n);
}