#include <iostream>
#include <math.h>
#include <ctype.h>
using namespace std;
int segundoejercicio(){
	int opcion  = 0;



}
void  menu(){
	int opcion = 0;
	do{
		cout << "MENU" << endl;
		cout << "1. Ejercicio 1" << endl;
		cout << "2. Ejercicio 2" << endl;
		cout << "3. Ejercicio 3" << endl;
		cout << "Ingrese una opcion: " << endl;
		cin >> opcion;
		if (opcion < 1 || opcion >3){
			cout <<"Opcion invalida"<<endl;
			

		}else{

			if(opcion ==1){
				int op = 0;
				cout << "1. Primer triangulo" <<endl;
				cout << "2. Segundo triangulo"<<endl;
				cin >> op;
				if(op == 1){
					char dato1;
					char dato2;
					char dato3;
					char dato4;
					char dato5;
					char dato6;
					cout << "Ingrese el primer dato: "<<endl;
					cin >> dato1;
					if(isdigit(dato1)){
						cout<<"FUNCIONO PAPI!"<<endl;
					}
					cout << "Ingrese el segundo dato: "<<endl;
					cin >>dato2;
					cout << "Ingrese el tercer dato: "<<endl;
					cin >>dato3;
					cout << "Ingrese el cuarto dato: "<<endl;
					cin >>dato4;
					cout << "Ingrese el quinto dato: "<<endl;
					cin >> dato5;
					cout << "Ingrese el sexto dato: "<<endl;
					cin >> dato6;
					if (dato1>=1&&dato1<=47){
						cout<<"Es un caracter"<<endl;

					}

				}else if(op == 2){
					char dato21;
					char dato22;
					char dato23;
					char dato24;
					char dato25;
					char dato26;
					cout << "Ingrese el primer dato: " <<endl;
					cin >> dato21;
					cout << "Ingrese el segundo dato: "<<endl;
					cin >> dato22;
					cout << "Ingrese el tercer dato: "<< endl;
					cin >> dato23;
					cout << "Ingrese el quarto dato: " <<endl;
					cin >> dato24;
					cout << "Ingrese el quinto dato: " << endl;
					cin >> dato25;
					cout <<"Ingrese el sexto dato: " << endl;
					cin >> dato26;



				}
				


			}else if(opcion == 2){


			}else if(opcion == 3){


			}
		}	

	}while (opcion == 0);

}
int main (){
	menu();
	return 0;

}
