#include <iostream>
#include <string>

using namespace std;

void transcripcion();
void traduccion();
void info();
void salir();

void mayusculas(string &s){

   for (int i=0; i<s.length(); i++){
        s[i] =  toupper(s[i]);
    }
}

void convertir( string &cadena){

    mayusculas(cadena);

    for (int i=0; i<cadena.length(); i++){

        }
    }

void transcripcion(){

    string cadena;
    cout<<"Ingrese una cadena válida de ADN"<<endl;
    cin>>cadena;
    convertir(cadena);

    char tabla [4][2]={{'A','U'},{'T','A'},{'G','C'},{'C','G'}};
    //char letra;

    for(int i=0; i<4; i++){
        if(tabla[i][0]==cadena[i]){
            cout<<tabla[i][1];
        }
    }



}


int main()
{
    cout<<"Menú de opciones"<<endl;
    cout<<"Opción 1: Transcipción de ADN a ARN"<<endl;
    cout<<"Opción 2: Traducción de ADN a Proteína"<<endl;
    cout<<"Opción 3: Información del autor"<<endl;
    cout<<"Opción 4: Salir"<<endl;

    transcripcion();
    //char opcion;
    //cin>>opcion;

    /*switch(opcion){

        case '1': transcripcion();
                    break;

        case '2': traduccion();
                    break;

        case '3': info();
                    break;

        case '4': salir();
                    break;
}





*/




    return 0;
}
