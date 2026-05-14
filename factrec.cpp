#include <iostream>
using namespace std;
int factorial(int n) {

    int i;
    int res=1;
    for (i =1; i <= n; i++)
    {
        res=res*1;
    }
    
    //codigo base
    if (n==0 || n ==1){ 
    return 1;
    }else{
        cout <<"no se cumple con esta condicion"<<endl;
        return n*factorial(n-1);
    }
}
int main() {
    int n;
    cout <<"ingresar n"<<endl;
    cin>>n;

    int rsp =factorial(n);
    cout<<"factorial"<<rsp<<endl;
    return 0;
}