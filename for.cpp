#include <iostream>
using namespace std; 

int main(){
    char nombre[8] = "fiorela";
    int dato[6] = {2,3,4,5,6};
    bool verdad [4];
    float decimal[3];

    //char nombre[8]= "fiorela";
    for (char i = 0; i < 9; i++)
    {
        cout <<nombre[i] <<",";
    }

    //int dato[6] = {2,3,4,5,6};
    for (int i = 0; i < 6; i++ )
    {
        cout <<dato[i] <<",";
    }
    // bool verdad [4];

    for (int i = 0; i < 4; i++)
    {
    cout << verdad[i]<<",";
     
    }

    //float decimal[3];
    for (int i = 0; i < 4; i++)
    {
   cout <<  decimal [i] <<",";
    }
  return 0;
}