#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>
#include <iomanip>
#include <iostream>

using namespace std;

crono(){
	int tempo1[3], tempo2[3];
	
	tempo1[0]=0;
	tempo1[1]=0;
	tempo1[2]=0;
    int i=0;
	cout<<"Digite os minutos:"<< endl;
	cin>>tempo2[0];
	cout<<"Digite as dezenas de segundos"<< endl;
	cin>>tempo2[1];
	cout<<"Digite as unidades de segundos"<<endl;
	cin>>tempo2[2];
	system("cls");
	
    cout << "INICIAR CRONOMETRO [1]:" << endl;
    cin >> i;
        
    do {
    	 if(tempo1[0]!=tempo2[0] || tempo1[1]!=tempo2[1] || tempo1[2]!=tempo2[2]){
        system("cls");
        //if aqui em cima para poder dar certo a contagem das dezenas e nao mostrar por exemplo: 1min:2 10segundos e sim 1:20
        if(tempo1[2]==10){
            tempo1[2]=0;
            tempo1[1]++;
        }
        if(tempo1[1]==6){
        	tempo1[1]=0;
        	tempo1[2]=0;
        	tempo1[0]++;
		}
        cout<< setw(17) << "CRONOMETRO" << endl;
        cout << setw(11) << tempo1[0]<<":" << tempo1[1] << tempo1[2]<< endl;
        Sleep(1000);
        tempo1[2]++;
 		}
 		else{
 			i=2;
		 }
    }while (i!=2);
	system("cls");
}
temp(){
	int tempo[3];
    int i=0;
	cout<<"Digite os minutos:"<< endl;
	cin>>tempo[0];
	cout<<"Digite as dezenas de segundos"<< endl;
	cin>>tempo[1];
	cout<<"Digite as unidades de segundos"<<endl;
	cin>>tempo[2];
	system("cls");
    cout << "INICIAR TEMPORIZADOR [1]:" << endl;
    cin >> i;
        
    do {
    	 if(tempo[0]!=0 || tempo[1]!=0 || tempo[2]!=0){
        system("cls");
        cout<< setw(17) << "TEMPORIZADOR" << endl;
        cout << setw(10) << tempo[0]<<":"<< tempo[1]<<tempo[2] <<endl;
        if(tempo[1]==0 && tempo[2]==0){
            tempo[1]=6;
            tempo[2]=0;
            tempo[0]--;
        }
		if(tempo[2]==0){
			tempo[2]=10;
			tempo[1]--;
		}   
        tempo[2]--;
 		}
 		else{
 			i=2;
		 }
		Sleep(1000);
    }while (i!=2);
	system("cls");
}
menu(){
	int e;
	cout<< setw(10) << "RELOGIO" << endl;
	cout<< "Cronometro[1]" << endl;
	cout<< "Temporizador[2]" << endl;
	cin >> e;
	if(e==1){
		system("cls");
		crono();
	}
	else if(e==2){
		system("cls");
		temp();
	}
}
int main(){
    int g=0;
	do{
	menu();
	system("cls");
	}while(g==0);
}
