#include <iostream>
#include <string>
using namespace std;

void inicio () {
  int opciones;
 bool condicion= true;
 string user;
  string contraseña;
  string crear;
  string nombre;
  string correo;
  string celular;
  string nacimiento;

      while (condicion)
     {
      cout <<"======  WELCOME TO FIORELA`S SUPERSTORE   ======="<<endl;
    cout << "1. inciar sesion "<<endl;
    cout << "2. crear cuenta"<<endl;
    cout<< "3: salir "<<endl;
    cin>> opciones;

    if (opciones > 3) {
        
    cout<<"no existe esa opcion "<<endl;
    continue;
     } 
     if (opciones == 3)
    {
      cout << "gracias por su visita " <<endl;
          condicion=false;
          break; 
       }
       switch (opciones)
   {
   case 1 :

     cout<<"ingrese su nombre"<<endl;
     cin>> user;

     cout<<"ingrese su contraseña"<<endl;
     cin>>contraseña;
    break;

   case 2 :
    cout<< "nombre "<<endl;
     cin>> nombre;
    
     cout<<" correo electronico : "<<endl;
     cin >>correo;

     while (condicion == true)
     {
      cout << "numero de celular: "<<endl;
     cin >> celular;
      if (celular.length() == 9)
     {
      cout << "el numero es correcto"<<endl;
       break;
     } else {
       cout <<"vuelva a intentarlo "<<endl;
     } 
     }
     
     
     cout <<  "fecha de nacimiento: "<<endl;
     cin>> nacimiento;

     cout << "****felicidades creaste tu cuenta en FIORELA_SUPERSTORE*********"<<endl;
    break;
  
     

    //cout <<"ingrese el nombre de la marca que busca: "<<endl;
      // cin>>marca;
       //cout<<"¿es de alta calidad el perfume? (si/no) "<<endl;
       //cin>>calidad; 
       //cout << "el precio es de: "<<endl; 
       //cin>>precio;

}
   }
    }
  
//**********************************************************+ */

class tienda_FIORELA_superstore
{  //atributos =caracteristicas           
private:         //herencia : de la clase madre se puede envisr datos a una clase
 string usuario;  //encapsular es protejer los datos de una clase 
 int clave;       //polimorfirmos usar el mismo aelerar pero con otoro mesaje : 
 string marca;
 string tienda;     // abtraccion el usuario no ve lo q es la ecuacion 
 int opciones;

public:           
 string nombre_tienda;
  
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


};
//------------------------------------------------;

//************************************************************************ */

class perfume : public tienda_FIORELA_superstore { //aca se esta haciendo herencia
private:
string perfumes [4];
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
    
    cout <<"Nombre: "<<nombre_tienda<<endl; //sacar : convertirle en funcion
    cout<<"Marca: "<<marc <<endl;
    cout<<"Precio: "<<precio<<endl;
    cout<< "informacion: "<<calidad;
    cout << "informacion2: "<<cantidad; 
    leerinformacion();
   
  
  }

};
//==================================================================================
int main() {

 inicio();
 string usuario;
 string marca;
 int precio;
 perfume sabrina;

    sabrina.nombre_tienda = usuario;
    sabrina.setmarca(marca);
    sabrina.setprecio(precio);
   
    cout <<"====== SABRINA ======"<<endl;

    sabrina.mostrar();
    sabrina.ingredientes();
    return 0;
   
}