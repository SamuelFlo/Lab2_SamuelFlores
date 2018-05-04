#include <iostream>
#include <math.h>
#include <ctype.h>
using namespace std;
void  segundoejercicio(){
	int opcion  = 0;
	cout << "1. Ingrese manualmente: " <<endl;
	cin>>opcion;
	if(opcion == 1){
		int x1,x2,x3,x4,y1,y2,y3,y4, totalx1,totaly1, totalx2, totaly2;
		int extotalx1,extotaly1,extotalx2,extotaly2;
		int sumacoor1,radio1,sumacoor2,radio2;
		int sumasdex1, sumasdey1,exposumax1,exposumay1;
		int distancia,totaldesumas,sumasderadios;
		cout << "Ingrese la x1: "<<endl;
		cin >> x1;
		cout << "Ingrese la y1: "<<endl;
		cin >> y1;
		cout<< "Ingrese la x2: "<<endl;
		cin >> x2;
		cout << "Ingrese la y2: "<<endl;
		cin >> y2;
		cout << "Ingrese la x3: "<<endl;
		cin >> x3;
		cout << "Ingrese la y3: "<<endl;
		cin >> y3;
		cout << "Ingrese la x4: " <<endl;
		cin >> x4;
		cout << "Ingrese la y4: " << endl;
		cin >> y4;
		totalx1=x2-x1;
		totaly1=y2-y1;
		totalx2=x4-x3;
		totaly2=y4-y3;
		extotalx1=pow(totalx1,2);
		extotaly1=pow(totaly1,2);
		extotalx2=pow(totalx2,2);
		extotaly2=pow(totaly2,2);
		sumacoor1=extotalx1+extotaly1;
		radio1 = sqrt(sumacoor1);
		sumacoor2=extotalx2+extotaly2;
		radio2 =sqrt(sumacoor2);
		sumasdex1=x4-x1;
		sumasdey1=y4-y1;
		exposumax1=pow(sumasdex1,2);
		exposumay1=pow(sumasdey1,2);
		totaldesumas=exposumax1+exposumay1;
		distancia = sqrt(totaldesumas);
		sumasderadios=radio1+radio2;
		if(sumasderadios>distancia){
			cout<<"Ambos circulos chocan!"<<endl;
			
		}else{
			cout<<"Los circulos no chocan!"<<endl;
		}

	}



}
void tercerejercicio(){


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
				segundoejercicio();

			}else if(opcion == 3){


			}
		}	

	}while (opcion == 0);

}
int main (){
	menu();
	return 0;

}
