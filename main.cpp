#include <iostream>
using namespace std;
int main( ) {
	float num1,num2,sum,res,mul,div;
	int opcion;
	do{
	cout<<"           calculadora             "<<endl;
	cout<<"        1.   ++++SUMA+++++         "<<endl;
	cout<<"        2.  ----RESTA------        "<<endl;
	cout<<"        3. *MULTIPLICACI�N*        "<<endl;
	cout<<"        4. ////DIVICION////        "<<endl;
	cout<<"        5.      salir              "<<endl;
	cout<<"   ingrese que opcion desea usar   "<<endl;
	cin>>opcion;
	switch(opcion){
			case 1:
			
				system("cls");
				cout<<"ingreso a la opcion +SUMA+"<<endl;
				system("pause");
				system("cls");
				cout<<"SUMA"<<endl;
				cout<<"ingrese un numero"<<endl;
				cin>>num1;
				cout<<"ingrese otro numero"<<endl;
				cin>>num2;
				sum=num1+num2;
				cout<<"la suma de "<<num1<<" y "<<num2<<" es de " <<sum<<endl;
				system("pause");
				system("cls");
			break;
			case 2:
				system("cls");
				cout<<"ingreso a la opcion -RESTA-"<<endl;
				system("pause");
				system("cls");
				cout<<"RESTA"<<endl;
				cout<<"ingrese un numero"<<endl;	
				cin>>num1;
				cout<<"ingrese otro numero"<<endl;
				cin>>num2;
				res=num1-num2;
				cout<<"la resta de "<<num1<<" y "<<num2<<" es de " <<res<<endl;
				system("pause");
				system("cls");
			break;
			case 3:
				system("cls");
				cout<<"ingreso a la opcion *MULTIPLICACION* "<<endl;
				system("pause");
				system("cls");
				cout<<"multiplicacion"<<endl;
				cout<<"ingrese un numero"<<endl;	
				cin>>num1;
				cout<<"ingrese otro numero"<<endl;
				cin>>num2;
				mul=num1*num2;
				cout<<"la multiplicacion de "<<num1<<" y "<<num2<<" es de " <<mul<<endl;
				system("pause");
				system("cls");
			break;
			case 4:
				system("cls");
				cout<<"ingreso a la opcion /divicion/ "<<endl;
				system("pause");
				system("cls");
				cout<<"DIVICION"<<endl;
				cout<<"ingrese un numero"<<endl;	
				cin>>num1;
				cout<<"ingrese otro numero"<<endl;
				cin>>num2;
				div=num1/num2;
				if(num2==0 or num2<0){
				cout<<"operacion invalida"<<endl;
				system("pause");
				system("cls");
				}else{
					cout<<"la divicion de "<<num1<<" y "<<num2<<" es de " <<div <<endl;
				system("pause");
				system("cls");
				}
			break;		
			case 5:
				cout<<"gracias por usar la calculadora"<<endl;
			break;
			default: cout<< "Usted ha ingresado una opci�n incorrecta"<<endl;
			system("pause");
			system("cls");	
		}
		}while(opcion!=5);
}
