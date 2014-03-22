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

void transcripcion(string &cadena){

    convertir(cadena);
    string cadena2 = "";
    char tabla [4][2]={{'A','U'},{'T','A'},{'G','C'},{'C','G'}};
    cout<<"La cadena de ADN transcrita a ARN es: ";
    for ( int i = 0; i<cadena.length(); i++){
        for ( int j = 0; j<4; j++){
            if(cadena[i]==tabla[j][0]){
                cout<<tabla[j][1];
                cadena2 += tabla[j][1];
             }
          }
       }
       cout<<endl;
       cadena = cadena2;
    }


void separacion(){
    string cadena;
    cout<<"Ingrese una cadena válida de ADN"<<endl;
    cin>>cadena;
    transcripcion(cadena);
    string promotor = "AUG";
    int npromotor = 0;
    size_t i;
    size_t j;
    //int nnprom=npromotor+3;
   /* int num=0;
    for(int i=0; i<cadena.length(); i++)
    {
        cout<<cadena[i]<<endl;
        if(cadena[i] == 'A')
        {
            cout<<"find a"<<endl;
            if(cadena[i+1] == 'U')
            {
                cout<<"find u"<<endl;
                if(cadena[i+2] == 'G')
                {
                    cout<<"find g"<<endl;
                    cout<<"Metionina"<<endl;
                    int k = 0;
                    for(int j=i+3; j<cadena.length(); j++)
                    {

                        if(k==3)
                        {

                        }
                        k++;
                    }
                }
            }
        }
    }*/
    for ( i = cadena.find(promotor, 0); i != string::npos; i = cadena.find(promotor, i)){


            cout<<"posicion: "<<i<<endl;

            //cout<<"se encontro el promotor";
            if (i==0 || i>0 ){

                for ( int j = i+3; i<cadena.length(); j=j+2){

                    cout<<cadena[i]<<endl;


                }

            }else{

                    cout<<"La cadena es inválida"<<endl;
            }

            i++;
    }



    }





int main()
{
    cout<<"Menú de opciones"<<endl;
    cout<<"Opción 1: Transcipción de ADN a ARN"<<endl;
    cout<<"Opción 2: Traducción de ADN a Proteína"<<endl;
    cout<<"Opción 3: Información del autor"<<endl;
    cout<<"Opción 4: Salir"<<endl;
    cout<<endl;

    char opcion;
    cin>>opcion;

    switch(opcion){

        case '1': separacion();
                    break;

        /*case '2': traduccion();
                    break;

        case '3': info();
                    break;

        case '4': salir();
                    break;
}






*/

}

    return 0;
}
