#include <iostream>
#include <string>
#include <cctype>
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
     condicion = false;
    break;

   case 2 :
    cout<< "nombre "<<endl;
     cin>> nombre;
    
     cout<<" correo electronico : "<<endl;
     cin >>correo;

     do
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
     } while (true); 
     
     cout <<  "fecha de nacimiento: "<<endl;
     cin>> nacimiento;
    cout <<"******************************************************************"<<endl;
     cout << "****felicidades registraste tu cuenta en FIORELA_SUPERSTORE*********"<<endl;
     cout<<"*******************************************************************"<<endl;
     condicion = false;
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
  string clave;                //encapsular es protejer los datos de una clase 
  string usuario;               //polimorfirmos usar el mismo aelerar pero con otoro mesaje : 
 string marca;
 string tienda;     // abtraccion el usuario no ve lo q es la ecuacion 
 int opciones;

 
 int total= 6;

public: 
string nombre_tienda[6] = {"ropa", "accesorios", "perfumes","utenzilios", "cremas", "otro"};          
  
  virtual void mostrar1 () {  //llamar a la clase
     cout<<"mostrar tienda: "<<endl; 
     for (int i = 0; i < total; i++)
     {
      cout <<i+1<<"."<<nombre_tienda[i] <<endl;
     }
     
  } 
  virtual void selecciona1() { //VIRTUAL: significa que se puede cambiar en las clases hijas
    for (int i = 0; i <7; i++)
    {
      int opcion1;
      cout <<"selecione el numero de la tienda que desa ingresar: "<<endl;
      cin>> opcion1;
    }
    
  }
  virtual void guardar1() {
    if (total < 7)
    {
      cout <<"INGRESE EL NOMBRE DE LA TIENDA Q BUSCA: "<<endl;
      cin>>nombre_tienda[total];
    }
    
  }
  
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
  void setopciones(int o){
    opciones= o;
  }
  int getopciones(){
    return opciones;
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
   int total1=5;
   
public:
string informacion;
  string informacion1;

string nombre_perfumes[5]= {"dola", "cora","kori","sabrina", "otro"};
  void mostrar1 () override { //OVIRRIDE: se indica q se esta cambiando en metodo de la clase padre
    int c=5; 
     cout<<"mostrar perfumes: "<<endl; 
     for (int i = 0; i < total1; i++)
     {
      cout <<i+1<<"."<<nombre_perfumes[i] <<endl;
     }
     
  } 
  void selecciona1() override {
      int opcion1;
      cout <<"selecione el perfume que desea: "<<endl;
      cin>> opcion1;
    
  }
  void guardar1() override {
    if (total1 < 4)
    {
      cout <<"ingrese el perfume q busca: "<<endl;
      cin>>nombre_perfumes[total1];
      
    }
   
  }

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
    for(int i = 0; i < calidad.length(); i++){
        calidad[i] = tolower(calidad[i]);
    }
    if (calidad == "si")// convertir 
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
      cout << "no existe el precio negativo. ingrese denuevo" <<endl;
      cin>>p;
    }
      precio = p;
  }
  

  
};
void mostrar(tienda_FIORELA_superstore *t){ //crear objeto
    perfume sabrina; // <- esto se llama objeto : es como se instacia la clase
    t->mostrar1();
     t->selecciona1();
     t->guardar1();
     sabrina.tienda_FIORELA_superstore::mostrar1();
     
    
     //string cal6ida = getcalidad();
     //int cantidad = getcantidad();
    //int opciones = getopciones();
    //cout <<"Nombre: "<<nombre_tienda[opciones] <<endl;
    //cout <<"nombre: "<<nombre_perfumes[opciones]<<endl; //sacar : convertirle en funcion
    //cout<<"Marca: "<<marc <<endl;
    //cout<<"Precio: "<<precio<<endl;
    //cout<< "informacion: "<<calidad;
    //cout << "informacion2: "<<cantidad;

    //leerinformacion();
   
  
  }

//==================================================================================
int main() {

 inicio();
 string usuario;
 string marca;
 int precio;
 perfume sabrina;

 mostrar(&sabrina);
 
    sabrina.nombre_tienda[0] = usuario;
    sabrina.setmarca(marca);
    sabrina.setprecio(precio);
   
    cout <<"====== SABRINA ======"<<endl;

    
    sabrina.selecciona1();
    sabrina.mostrar1();
    sabrina.ingredientes();
    return 0;
   
}