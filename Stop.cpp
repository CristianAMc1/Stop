#include <iostream> 
using namespace std;
#include <time.h>
#include<cstring>
#include <ctime> 

int main()
{
  string nombre,NOMBRE,APELLIDO,CIUDAD,COSA,COLOR, ANIMAL,COMIDA,REINICIO,ch;
  int Inicio,Ndp,Puntaje,PuntajeFinal;
  time_t Tiempoinicial,Tiempofinal;
  
    cout <<"---------------------------------------BIENVENIDO------------------------------------" << endl;
    cout <<"    -------------------Este es el juego Stop Gracias por jugar-------------------" << endl;
    cout <<"    ----------Pero antes de iniciar te indicaremos las reglas de juego-----------" << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<" "<< endl;
    cout <<"                                        PUNTAJES" << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<"    Cada vez escribas una palabra correcta sumaras: 100 puntos y cada vez que"<< endl;
    cout <<"coloques una palabra incorrecta se te restara: -100, al no colocar ninguna palabra no" << endl;
    cout <<"                       sumaras ni restaras nada al total,  " << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout << " " << endl;
    cout <<"                                     ¿QUE ES STOP?" << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<"    El famoso “Stop” consiste en elegir una letra del abecedario y con esta decir"<< endl;
    cout <<"en el menor tiempo posible, un nombre, apellido, ciudad, cosa, color, animal y comida." << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<" "<< endl;
    cout <<"                                     ¿REGLAS?" << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<  "Para jugar tienes que colocar TODA LA PALABRA en Mayusculas, para que puedas sumar"<< endl;
    cout <<                "puntos de lo contrario, no se sumaran los puntos" << endl;
    cout <<"en el menor tiempo posible, un nombre, apellido, ciudad, cosa, color, animal y comida." << endl;
    cout <<"-------------------------------------------------------------------------------------" << endl;
    cout <<" "<< endl;
    
  
    cout <<"Para empezar a jugar selecciona 1, Si no quieres jugar selecciona 2" << endl;
    cin >> Inicio;
    
  
  if (Inicio == 1)
  {
    
    cout <<"Cuantas partidas quieres JUGAR? " << endl;
    cin >> Ndp;
    cout << "Antes de empezar indicame tu NOMBRE" << endl;
    cin >> nombre;
    cout <<" "<< endl;
    
    for (int i = 1; i <= Ndp; i++){
      srand(time(NULL));
    
      cout <<" "<< endl;
     
      char ch = 'A' + rand() % 26;

      
      cout << nombre << " " <<"La letra con la que juegas es la: "  <<  ch << endl;
  
      cout <<" "<< endl;
      cout <<"--------------------------------------Iniciemos-------------------------------------" << endl;
      cout <<"------------------------------Esta es tu ronda NUMERO " << i <<" ----------------------------" << endl;
      cout <<"----------------------------------*TU LETRA ES LA " <<  ch << "*--------------------------------" << endl;
      cout <<" " << endl;

      time_t Tiempoinicial, Tiempofinal;
      Tiempoinicial = time(0);

      Puntaje = 0;
      PuntajeFinal = 0;
      
      cout <<"Escribe un NOMBRE con la letra Indicada " << endl;
      cin >> NOMBRE;
      cout <<" "<< endl;
      
      cout <<"Escribe un APELLIDO con la letra " << endl;
      cin >> APELLIDO;
      cout <<" "<< endl;
      
      cout <<"Escribe una CIUDAD con la letra " << endl;
      cin >> CIUDAD;
      cout <<" "<< endl;
      
      cout <<"Escribe una COSA con la letra " << endl;
      cin >> COSA;
      cout <<" "<< endl;
      
      cout <<"Escribe un COLOR con la letra " << endl;
      cin >> COLOR;
      cout <<" "<< endl;
      
      cout <<"Escribe un ANIMAL con la letra " << endl;
      cin >> ANIMAL;
      cout <<" "<< endl;
      
      cout <<"Escribe una COMIDA con la letra " << endl;
      cin >> COMIDA;
      cout <<" "<< endl;
      
      Tiempofinal = time(0);
      cout << "Segundos empleados: " << Tiempofinal - Tiempoinicial << endl;
      
      if (NOMBRE[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }

      if (APELLIDO[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
      if (CIUDAD[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
      if (COSA[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
      if (COLOR[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
     if (ANIMAL[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
      if (ANIMAL[0] == ch)
      {
        Puntaje = Puntaje + 100;
      }
      else
      {
        Puntaje = Puntaje - 100;
      }
      
    cout << "Tu puntaje en esta ronda es: " << Puntaje << endl;
     }
  }

    
  if (Inicio == 2)
  {
      cout << "Gracias por jugar :D" << endl;
  }
  
  cout << "-------------------Tu Puntuacion FINAl fue de: " << Puntaje << "-------------------" << endl;

  
}

