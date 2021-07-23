#include<iostream>
#include<cmath>
using namespace std;

bool CheckPrime(int n);
int main(){
    while(true){
        int num;
        cout<<"enter the number: ";
        cin>>num;
        if(num==0){
            break;
        }
        // cout<<"ans is "<<CheckPrime(num)<<endl;
        int count=0;
        for(int i=2;i<=num-i;i++){
            if(CheckPrime(i) && CheckPrime(num-i)){
                cout<<i<<" + "<<num-i<<" = "<<num<<endl;
                count++;
            }
        }
        cout<<"number of possible combinations are "<<count<<endl;
    }
    return 0;
}
bool CheckPrime(int n){
    bool flag=true;
    if(n==0 || n==1){
        return false;
    }
    else if(n==2){
        return true;
    }
    else{
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                flag = false;
                break;
            }
        }
        return flag;
    }
}