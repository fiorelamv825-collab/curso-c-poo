
#include <iostream>
using namespace std;

int main() {
    int multiplicando=1;
    int multiplicador=1;

     cout<<"ingrese el multiplicando"<<endl;
     cin>>multiplicando;

       for (int i = 0; i < 13; i++)
       {
        cout << i * multiplicando<<endl;
         //multiplicador++;
       }
       
    
    return 0;
}