#include <iostream>
#include <cstring>
using namespace std;

class cat
{
private:
    /* data */
public:
  //atributos 
  int año;
  char pelaje[16];
  char raza[10];
  //metodos 
  void rasguñoo (){
    cout << "rasguño" <<endl;
    
  }
  void maullido () {
    cout << "maullido" <<endl;
  }
};

int main() {
    //objeto
    cat wendy; //instancia de una clase
    cat wendy1;//podemos intanciar la catidad de intacias que queramos
    //asignarle valores a los atributos
    wendy.año = 1;
    strcpy(wendy.pelaje, "atigrado");//parametros paso atributo , y la cadena texto 
    strcpy(wendy.raza, "azul ruso");

    wendy1.año = 3;
    strcpy(wendy1.pelaje, "marmolado");
    strcpy(wendy1.raza, "bombay");

    cout <<"======wendy======"<<endl;
    cout <<"¿CUANTOS AÑOS TIENE ?: " << wendy.año <<endl;
    cout <<"¿QUE TIPO DE PELAJE TIENE? : "<<wendy.pelaje<<endl;
    cout <<"¿CUAL ES SU RAZA? :"<<wendy.raza<<endl;
    wendy.rasguñoo();
    wendy.maullido();
    cout << "======wendy1====="<<endl;
    cout <<"¿CUANTOS AÑOS TIENE ?: "<<wendy1.año<<endl;
    cout <<"¿QUE TIPO DE PELAJE TIENE? "<< wendy1.pelaje<<endl;
    cout <<"¿CUAL ES SU RAZA?: "<<wendy1.raza<<endl;
    wendy1.rasguñoo() ;
    wendy1.maullido();
    //metodos 
    //wendy1.rasguñoo() ;
    //wendy.rasguñoo();

    //wendy1.maullido();
    //wendy.maullido();

    return 0;
}
