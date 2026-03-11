#include <iostream>
#include <string>
using namespace std;

class tienda
{   //atributos           
private:         //herencia : de la clase madre se puede envisr datos a una clase
 string usuario;  //encapsular es protejer los datos de una clase 
 int clave;       //polimorfirmos usar el mismo aelerar pero con otoro mesaje : 
 string marca;     // abtraccion el usuario no ve lo q es la ecuacion
                
public:           
 string nombre;
  
 //metodos =funciones
 void setusuario(string a ){ //setusuario= metodo
    usuario = a; //es la forma como lo modifico los atributos encapsulados 
 }
 
 void setmarca(string s) {
    marca = s; 
 } 
  string getmarca() {
    return marca;
  }

 //int setclave () {
             // get : memuestra 
 //}         //set : modificar
 
};
class perfume : public tienda { //aca se esta haciendo herencia
private:
   int cantidad;
   string intensidad;
   string calidad;
   string tamano;
   int precio;

public:
  string informacion;
  string ingredientes; 

  void leerinformacion(){
    if (calidad == "arto ")
    {
      cout<< "dura 30 horas"<<endl; // poli
    }
    else
    {
      cout<<"dura menos horas"<<endl;
    }
  }

  void recuerdos() {
    cout << "a nadie " <<endl;
  }

  void setprecio (int p) {
    if (p > 0)
    {
     precio = p;
    }
    else {
     cout << "el precio es negativo. vuelva a ingresar" <<endl;
    }
  }

  void mostrar(){
     string marc = getmarca();
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Marca: "<<marc <<endl;
    cout<<"Precio: "<<precio<<endl;
  }

};

int main() {

    string usuario;
    int clave;

    for (int i = 0; i < 2; i++)
    {
       cout<<"Ingrese el nombre del usuario: "<<endl;
       cin>>usuario;
    }

    perfume sabrina; 

    sabrina.nombre = usuario;
    sabrina.setmarca("Nikser");
    sabrina.setprecio(120);

    cout <<"====== SABRINA ======"<<endl;

    sabrina.mostrar();
    sabrina.recuerdos();

    return 0;
}