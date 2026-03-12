#include <iostream>
#include <string>
using namespace std;

class tienda
{  //atributos           
private:         //herencia : de la clase madre se puede envisr datos a una clase
 string usuario;  //encapsular es protejer los datos de una clase 
 int clave;       //polimorfirmos usar el mismo aelerar pero con otoro mesaje : 
 string marca;
 string tienda;     // abtraccion el usuario no ve lo q es la ecuacion
                
public:           
 string nombre;
  
 //metodos =funciones

 string gettienda(){ // arreglos 
  return tienda;
 }

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
  string informacion1;

  void setcalidad(string c){
     calidad = c;
  }
  string getcalidad() {
    return calidad;
  }
  void setcantidad(int d){
     cantidad = d;
  }
  int getcantidad() {
    return cantidad;
  }
  int getprecio () {
    return precio;
  }

  void leerinformacion1(){
    if (cantidad  == 1)
    {
      cout<< "dura 30 horas"<<endl; // poli
    }
    else
    {
      cout<<"dura menos horas"<<endl; //funcion q ayuda a convertir a todo mayuscula o minusciula
    }
  }


  void leerinformacion(){
    if (calidad == "si" || calidad == "SI" || calidad == "Si")// convertir 
    {
      cout<< "muy buena"<<endl; // poli
    }
    else
    {
      cout<<"regular"<<endl;
    }
  }

  void ingredientes() {
    cout << "cebolla ,rommero , palta" <<endl;
  }

  void setprecio (int p) {
    while ( p < 0)
    {
      cout << "no existe el precio negativo. ingree denuevo" <<endl;
      cin>>p;
    }
      precio = p;
  }
  

  void mostrar(){
     string marc = getmarca();
     string calida = getcalidad();
     int cantidad = getcantidad();
    
    cout <<"Nombre: "<<nombre<<endl; //sacar : convertirle en funcion
    cout<<"Marca: "<<marc <<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<< "informacion: "<<calidad;
    cout << "informacion2: "<<cantidad; 
    leerinformacion();
   
  
  }

};

int main() {

    string usuario;
    int clave;
    string marca;
    int precio;
    string calidad;

    for (int i = 0; i < 1; i++)
    {  
      cout <<"======  TIENDA ONLINE SONJ   ======="<<endl;
       cout<<"Ingrese su nombre usuario: "<<endl;
       cin>>usuario;
       cout <<"ingrese el nombre de la marca que busca: "<<endl;
       cin>>marca;
       cout<<"¿es de alta calidad el perfume? (si/no) "<<endl;
       cin>>calidad; 
       cout << "el precio es de: "<<endl; 
       cin>>precio;
    }

    perfume sabrina; 

    sabrina.nombre = usuario;
    sabrina.setmarca(marca);
    sabrina.setprecio(precio);
   
    cout <<"====== SABRINA ======"<<endl;

    sabrina.mostrar();
    sabrina.ingredientes();
    return 0;
}