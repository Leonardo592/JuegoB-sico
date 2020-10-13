#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>

using namespace std;

void magico(int ,int);
void papel(int,int);
void test(int);
void mostrar();
void ingresar(char x);
void iniciar();



int numero,contador;//NUMERO MAGICO
int usuario,pc;
int opc,res,ultimo=0;
string palabra_original;
string palabra_mostrar;
int vidas;

int main(){
	
	system("portada.exe");
	
	system("color 60");

	cout<<"\n";
	cout<<"\t";
	
	do{
	cout<<"---------.:BIENVENIDOS A LOS MINIJUEGOS:........."<<endl;
	cout<<"1. Numero magico"<<endl;
	cout<<"2. Jan Ken Po"<<endl;
	cout<<"3. Test-Covid"<<endl;
	cout<<"4. Ahorcado"<<endl;
	cout<<"5. Elige una opcion: ";cin>>opc;
	
	switch(opc){
		case 1: system("color 70");
				cout<<"Juego del numero magico, intenta adivinar el numero en menos intentos posibles (rango 1-10)"<<endl;	
				magico(numero,contador);
				cout<<"\n";
				system("pause");break;
		case 2: system("color A0");
				cout<<"Juego del piedra, papel y tijera. Asegurate de Ganar a la PC"<<endl;
				papel(usuario,pc);
				cout<<"\n";
				system("pause");break;
		case 3: system("color 50");
				cout<<"TEST-COVID"<<endl;
				test(res);
				cout<<"\n";
				system("pause");break;
		case 4: system("color 10");
				iniciar();
   				mostrar();
   				while(vidas>0 && palabra_mostrar!=palabra_original){
        		char x;
        		cin>>x;

        		ingresar(x);
        		mostrar(); 
				}
				if(vidas>0){
        			cout << "GANO, obtienes 5 puntos adicionales"<<endl;
    			}
    			else {
        			cout << "perdio la palabra era: "<<palabra_original;
    			}
    			cout<<"\n";
    			cout<<"\tRevisa el nivel de tu puntaje......"<<endl;
    			cout<<"\t16-18 Eres una persona con buen nivel intelectual y mucha suerte"<<endl;
    			cout<<"\t19-21 Eres regularmente hábil y astuto"<<endl;
    			cout<<"\t22+   Te falta mejorar tu intelecto y la lógica";
    			cout<<"\t........GRACIAS POR JUGAR......";
    			cout<<"\n";
				system("pause");break;
			}
				
	system("cls");
	}while(opc!=4);	

	return 0;
}


void magico(int numero, int contador){
	int dato;
	srand(time(NULL));
	dato=1+rand()%(10);
	contador=0;
		do{
		cout<<"Digite un numero: ";cin>>numero;
		
		if(numero>dato){
			cout<<"Numero alto"<<endl;
		}
		if(numero<dato){
			cout<<"Numero bajo"<<endl;
		}
		contador++;
	}while(numero != dato);
	
	if(numero==dato){
		cout<<"Felicidades encontraste el numero en "<<contador<<" intentos"<<", por lo cual obtienes "<<contador<<" puntos."<<endl;
	}	
}

void papel(int usuario,int pc){
	int u=0;
	int p=0;
	
	while(true){
		cout<<" 1. Piedra \n 2. Papel \n 3. Tijera \nDigite la opcion: ";cin>>usuario;
		
		if(usuario==1){
			cout<<"Elegiste Piedra\n";
		}
		if(usuario==2){
			cout<<"Elegiste Papel\n";
		}
		if(usuario==3){
			cout<<"Elegite Tijera\n";
		}
		
		srand(time(NULL));
		pc=1+rand()%(3);
		
		if(pc==1){
			cout<<"PC eligio Piedra\n";
		}
		if(pc==2){
			cout<<"PC eligio Papel\n";
		}
		if(pc==3){
			cout<<"PC eligio Tijera\n";
		}
		
		if(usuario==pc){
			cout<<"---Empate---\n";
		}
		
		if((usuario==1 && pc==3) || (usuario==2 && pc==1) || (usuario==3 && pc==2)){
			cout<<"---Ganaste un punto---\n";
			u++;
		}
		
		if((pc==1 && usuario==3) || (pc==2 && usuario==1) || (pc==3 && usuario==2)){
			cout<<"---La maquina gano un punto---\n";
			p++;
		}
		
		cout<<"Tu puntaje: "<<u<<" Puntaje PC: "<<p<<endl;
		
		cout<<"\n";
		
		if(u==3){
			cout<<"\t----Final Ganaste----"<<endl;
			cout<<"Obtienes 5 puntos";
			break;
		}
		if(p==3){
			cout<<"\t----Gano la PC"<<endl;
			cout<<"Lastimosamente obtienes 0 puntos";break;
		}	
	}
}


void test(int res){
	
	string aux1,aux2,aux3,aux4,aux5;
	res=0;
		
		
	cout<<"\t¿Cual es el sintoma mas comun del Covid-19"<<endl;	
			cout<<"A. Tos y Fibre   "<<setw(10)<<"   B. Diarrea y Dolor de garganta"<<endl;
			cout<<"Digite la opcion: ";cin>>aux1;
			if(aux1=="a"){
				res++;
			}
			else{
				res=res+0;
			}
	
	cout<<"\t¿Qué debo hacer si tengo covid-19"<<endl;
			cout<<"C. Buscar atencion medica   "<<setw(10)<<"   D. Quedarme en casa y aislarme"<<endl;
			cout<<"Digite la opcion: ";cin>>aux2;
			if(aux2=="d"){
				res++;
			}
			else{
				res=res+0;
			}
	
	cout<<"\t¿Como me protego del Covid-19?"<<endl;
			cout<<"E. Respentando el distanciamiento y usando mascarilla    "<<setw(14)<<"   F. Salir de casa, e ir a fiestas"<<endl;
			cout<<"Digite la opcion";cin>>aux3;
			if(aux3=="e"){
				res++;
			}
			else{
				res=res+0;
			}
	
	cout<<"\t¿Puede un niño contagiarse de Covid-19"<<endl;
			cout<<"G. Si, pero tienden a recuperarse rapido   "<<setw(14)<<"    H. No, poseen defensas que imposibilitan el ingreso del Covid"<<endl;
			cout<<"Digite la opcion: ";cin>>aux4;
			if(aux4=="g"){
				res++;
			}
			else{
				res=res+0;
			}
	
	cout<<"Obtuviste "<<res<<" aciertos"<<endl;
}


 void mostrar(){
    cout<<"vidas: "<<vidas<<endl;
    cout<<palabra_mostrar<<endl;
}


void iniciar(){
    vidas= 5;
    palabra_original="mascarilla";


    for(int i=0 ; i<palabra_original.length() ; i++){
        if(palabra_original[i]>='A' && palabra_original[i]<='Z'){
            palabra_original[i]+=32;
        }
    }
       cout<<"PISTA: Es un pedazo de tela que usamos a diario"<<endl;
    for(int i=0 ; i<palabra_original.length();i++){
      if(palabra_original[i]>='a' && palabra_original[i]<='z'){
        palabra_mostrar+='-';
      }
	  else{
        palabra_mostrar +=palabra_original[i];
      }
    }
}

void ingresar(char x){
 bool perdiVidas=true;
	     
    for(int i=0 ; i<palabra_original.length() ; i++){
        if (x == palabra_original[i]){
            perdiVidas=false;
            palabra_mostrar[i]=x;
        }
    }
    if (perdiVidas) {
            vidas = vidas - 1;
    }
}


