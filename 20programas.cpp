#include<stdlib.h>
#include<iostream>
#include <limits>
#define LIMITE_SUP 10000
#define LIMITE_INF 0
#define N_DIGITOS_ENTERO 4
#define DECENAS 2
#define CENTENAS 1
 #include <windows.h>  
 #include <conio.h>
 #include <cmath>
 #include <ctime>
using namespace std;


void srmd();
void parimpar();
void km();
void palindromo();
void araroma();
void numeros_a_letras();
void num_a_letras_decimal();
void unatablamult();
void todastabmult();
void multiplicacion_manual();
void decimal_binario();
void decimal_hexadecimal();
void figuras();
void punto();
void mundo();
void reloj();
void esperar(double t);
void factorial();
void edad();

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
  }

//1.Suma, Resta, Multiplicación y División de dos números
void srmd() {
	float a;
	float b;
	cout << "INGRESE EL PRIMER VALOR" << endl;
	cin >> a;
	cout << "INGRESE EL SEGUNDO VALOR" << endl;
	cin >> b;
	cout << "LA SUMA DE            " << a << "+" << b << " ES " << a+b << endl;
	cout << "LA RESTA DE           " << a << "-" << b << " ES " << a-b << endl;
	cout << "LA MULTIPLICACION DE  " << a << "*" << b << " ES " << a*b << endl;
	cout << "LA DIVICION DE        " << a << "/" << b << " ES " << a/b << endl;
	
}
//2.Determinar si un número es par o impar
void parimpar(){
		int num=0;
		cout<<"ingrese un numero ";
		cin>>num;
		if((num%2)==0)
			{
					if(num==0){
								cout<<"neutro";
						      }
					else{
						cout<<"par";
						}
			}	
				else {
						cout<<"impar"<<endl;
				     }
					
			}
				
//Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa
void km(){

	cout<<"conversiones"<<endl;
	cout<<"1.-kilometros a millas "<<endl;
	cout<<"2.-millas a kilometros "<<endl;
	cout<<"3.-metros a pulgadas "<<endl;
	cout<<"4.-pulgadas a metros"<<endl;
	cout<<"5.-libras a kilos"<<endl;
	cout<<"6.-kilos a libras"<<endl;
	int opcion = 0;
    cin >> opcion;

    switch(opcion)
	

	{
		case 1:
			float a;
			cout<<"INGRESE LA CANTIDAD EN KILOMETROS"<<endl;
			cin>>a;
			cout<<"millas = "<<a*0.621371<<endl;
		break;
		
			case 2:
			double b;
			cout<<"INGRESE LA CANTIDAD EN MILLAS"<<endl;
			cin>>b;
			cout<<"kilometros = "<<b*1.60934<<endl;
		break;
		
			case 3:
			float c;
			cout<<"INGRESE LA CANTIDAD EN METROS"<<endl;
			cin>>c;
			cout<<"pulgadas = "<<c*39.3701<<endl;
		break;
		
			case 4:
			float d;
			cout<<"INGRESE LA CANTIDAD EN PULGADAS"<<endl;
			cin>>d;
			cout<<"metros = "<<d*0.0254<<endl;
		break;
		
			case 5:
			float e;
			cout<<"INGRESE LA CANTIDAD EN LIBRAS"<<endl;
			cin>>e;
			cout<<"kilos = "<<e*0.453592<<endl;
		break;
		
			case 6:
			float f;
			cout<<"INGRESE LA CANTIDAD EN KILOS"<<endl;
			cin>>f;
			cout<<"libras = "<<f*2.20462<<endl;
		break;
		
		
		
		
		
		default: cout<<"opcion incorrecta"<<endl;
		
	}
	
}

//Determinar si una palabra o un número es palíndromo.
void palindromo(){
 string texto;
    int aux = 0, igual = 0;
    
    cout << "Ingrese la palabra a evaluar: ";
    getline(cin >> ws, texto);
    
    for(int ind = texto.length() - 1; ind >= 0; ind--) {
        if(texto[ind] == texto[aux]) {
            igual++;
        }
        aux++;
    }
    
    if(texto.length() == igual) {
        cout << "La palabra ingresada es palindromo" << endl;
    } else {
        cout << "La palabra ingresada no es palindromo " << endl;
    }
}


//Conversión de números arábigos a romanos 
void araroma(){

int num,a;	
cout << "Transformacion de numero arabigos a romanos" << endl;
cout << "Escribe el numero a convertir " << endl;
cin >> a;
num=a;
while(num!=0)
{
if (num<=0 or num>3999)
{
	cout<<"numero fuera de rango"<<endl;
	system("pause");
	exit(1);
	
}
else{

if (num<= 3999 && num>= 1000)
{
cout << "M";
num = num -1000;
}
else if(num <1000 && num>=900)
{
cout << "CM";
num = num - 900;
}
else if(num < 900 && num>500)
{
cout << "D";
num = num - 500;
}
else if (num == 500)
{
cout << "D";
num = num -500;
}
else if (num<500 && num>= 400)
{
cout << "CD";
num = num - 400;
}
else if (num<400 && num >99)
{
cout << "C";
num = num -100;
}
else if (num< 100 && num>89)
{
cout << "XC";
num = num - 90;
}
else if (num< 90 && num>59)
{
cout << "L";
num = num - 50;
}
else if(num<60 && num >50)
{
cout << "L";
num = num - 50;
}
else if (num ==50)
{
cout << "L";
num = num -50;
}
else if(num<50 && num>39)
{
cout << "XL";
num = num - 40;
}
else if(num< 40 && num> 10)
{
cout << "X";
num = num - 10;
}
else if(num == 10)
{
cout << "X";
num = num -10;
}
else if(num==9)
{
cout << "IX";
num = num - 9;
}
else if(num<=8 && num>=6)
{
cout << "V";
num = num - 5;
}
else if (num == 5)
{
cout << "V";
num = num - 5;
}
else if (num == 4)
{
cout << "IV";
num = num - 4;
}
else if (num<= 3 && num>=1)
{
cout << "I";
num = num - 1;
}
}
}
	
}

//numeros enteros a letras
void numeros_a_letras(){
	int x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
else
 
    {
        if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       }
    cout<<endl;
cin.ignore();
exit(1);
}
//Conversión de números enteros con decimal a letras

void num_a_letras_decimal(){
	

 
int main(int argc, char* argv[]);{

    //Cadenas constantes
    char cadenas[4][11][15]={{"","mil ","dosmil ","tresmil ","cuatromil ","cincomil ","seismil ","sietemil ","ochomil ","nuevemil "},
                             {"","cien ","doscientos ","trescientos ","cuatrocientos ","quinientos ","seiscientos ","setecientos ","ochocientos ","novecientos "},
                             {"","diez ","veinte ","treinta ","cuarenta ","cincuenta ","sesenta ","setenta ","ochenta ","noventa "},
                             {"cero","uno","dos","tres","cuatro","cinco","seis","siete","ocho","nueve"}};
    char cadenaDecenas[9][15]={"once","doce","trece","catorce","quince","dieciseis","diecisiete","dieciocho","diecinueve"};
 
    int parteEntera,parteDecimal;
    double num;
 
    //Pido un valor dentro del rango valido
    do{
        cout << "Introduce un numero (0 a 9999.99): ";
        cin >> num;
        if(num < LIMITE_INF || num >= LIMITE_SUP)
            cout << "El numero introducido excede del rango valido. Vuelva a intentarlo." << endl;
    }while(num < LIMITE_INF || num >= LIMITE_SUP);
 
    //Separo la parte entera y la parte decimal truncando la decimal y quedandome solo con dos decimales
    parteEntera = num;
    parteDecimal = (num-parteEntera)*100;
 
    string salida;
 
    //Separo los digitos enteros
    int digitos[N_DIGITOS_ENTERO];
    for(int i=N_DIGITOS_ENTERO-1; i>=0; i--,parteEntera /=10)
        digitos[i]=parteEntera%10;
 
    //Concateno la cadena a partir de sus digitos
    bool termina=false;
    for(int i=0; i<N_DIGITOS_ENTERO && !termina; i++){
        bool compuesta=false;
        switch(digitos[i]){
            case 0: //Si es un cero no hacemos nada excepto que sea la unidad y el resto de posiciones tambien sea cero
                if(i==N_DIGITOS_ENTERO-1){
                    for(int j=0;j<N_DIGITOS_ENTERO;j++){ //Busco para saber si hay algun digito diferente de 0
                        if(digitos[j] != 0){
                            compuesta=true;
                            break;
                        }
                    }
                    if(!compuesta) //Si no hay ningun digito diferente de 0 coloco 'cero' en la cadena de salida
                        salida += cadenas[i][digitos[i]];
                }
                break;
            default: //Si no es cero el digito
                for(int j=i+1;j<N_DIGITOS_ENTERO;j++){ //Busco si despues de dicho digito hay algun digito diferente de 0
                    if(digitos[j] != 0){
                        compuesta=true;
                        break;
                    }
                }
                if(compuesta){ //Si existe algun digito diferente de 0 detras de en el que estoy ahora...
                    if(digitos[i]==1 && i == CENTENAS){ //Si es 1 y no son las unidades cojo del segundo array de cadenas para crear una cadena compuesta
                        salida += "ciento ";
                    }else if(i==DECENAS){ //Si la decena es 2 uso la cadena "veinti" para crear una cadena compuesta
                        switch(digitos[i]){
                            case 1: //Si es 1 uso las cadenas oportunas para las decenas compuestas
                                salida += cadenaDecenas[digitos[i+1]-1];
                                termina=true;
                                break;
                            case 2: //Si es 2 uso la cadena oportuna para las veintenas compuestas
                                salida += "veinti";
                                break;
                        }
                    }else{ //Para cualquier otro valor
                        salida += cadenas[i][digitos[i]]; //Inserto la cadena correspondiente
                        if(i==DECENAS) //Si es las decenas coloco la cadena "y "
                            salida += "y ";
                    }
                }else{ //Si no existe ningun digito diferente de 0 detras del actual
                    salida += cadenas[i][digitos[i]]; //Inserto la cadena que le corresponda
                }
        }
 
    }
   
    if(salida[salida.length()-1]!= ' ')
        salida += " ";
 
    //Añado la cadena de la parte decimal
    cout << salida << parteDecimal << "/100"<< endl;
 
    cout << "Pulsa intro para salir...";
	system("pause");
	exit(1);

}
}

//Una tabla de multiplicar
void unatablamult(){
	
	int tabla =1, multiplicar =0;

cout<<"ingrese tabla"<<endl;
cin>>tabla;

for(int i=1;i<=10;i++){
	multiplicar = tabla *i;
	cout<<tabla<<" x "<<i<<" = "<<multiplicar<<endl;	
	
}
}

//todas las tablas de multiplicar 1-10
void todastabmult(){
	int inicio=0,fin = 0,multiplicar = 0;
cout<<"Ingrese Tabla Inicio:";
cin>>inicio;
cout<<"Ingrese Tabla Fin:";
cin>>fin;


for (int i=inicio;i<=fin;i++){
	
	for(int ii=1;ii<=10;ii++){
			multiplicar = i * ii;
			cout<<i<< " X "<<ii<<" = "<<multiplicar<<endl;

	}
	cout<<endl;
}
}
	
	void multiplicacion_manual(){
		
			

int num1,num2,a,b,c,d,d1,c1;
cout<<"ingres el pirmer numero"<<endl;
cin>>num1;
cout<<"ingrese el segundo numero"<<endl;
cin>>num2;
cout<<"REINGRESO DE DATOS  "<<endl;
cout<<"en caso de ser dos digitos colocarlos por separado cuando se indique"<<endl;
cout<<"en caso de que sea una solo dijito colocar 0 antes"<<endl;
system("pause");

cout<<"INGRESE LA PRIMER CIFRA DEL PRIMER NUMERO "<<endl;
cin>>a;
cout<<"INGRESE LA SEGUNDA CIFRA DEL PRIMER NUMERO "<<endl;
cin>>b;
cout<<"INGRESE PRIMER CIFRA DEL SEGUNDO NUMERO "<<endl;
cin>>c;
cout<<"INGRESE SEGUNDA CIFRA DEL SEGUNDO NUMERO "<<endl;
cin>>d;
system("cls");
gotoxy(15,8);  cout<<a<<b<<endl;
gotoxy(15,9);  cout<<c<<d<<endl;
gotoxy(12,10); cout<<"X_________"<<endl;

gotoxy(15,11); cout<<d*num1<<endl;
gotoxy(13,12); cout<<c*num1<<endl;

gotoxy(8,13); cout<<"+__________"<<endl;
    
gotoxy(10,14); cout<<num1*num2<<endl;


gotoxy(20,20);  system("pause");
	
	
		
	}

//Conversión de números decimales a binario
void decimal_binario(){
	int num;
	string binario= "";
	cout<<"INGRESE UN NUMERO ENTERO POSITIVO "<<endl;
	cin>>num;
	if (num>0){
		while (num>0){
			if(num%2==0){
				binario = "0"+binario;
			}else{
				binario = "1"+binario;
			}
			num = (int) num/2;
		}
		
	} else if (num==0){
		binario = "0";
			}
			else{
				binario = "NO SE PUEDE REALIZAR LA CONVERSION. INGRESE SOLAMENTE NUMEROS POSITIVOS ";
			}
	cout<<"el resultado de la conversion es "<<	binario;
	
	}
	
void decimal_hexadecimal(){
	
long dec;
    int rem;

    std::cout << "INGRESE UN NUMERO : ";
    std::cin >> dec;

    while (dec > 0) {
        rem = dec % 16;
        if (rem > 9) {
            switch (rem) {
               case 10: std::cout << "A"; break;
               case 11: std::cout << "B"; break;
               case 12: std::cout << "C"; break;
               case 13: std::cout << "D"; break;
               case 14: std::cout << "E"; break;
               case 15: std::cout << "F"; break;
            }
        }
        else {
            std::cout << rem;
        }
        dec = dec / 16;
    }
}

void figuras(){
	system("cls");
	cout<<"           *"<<endl;
	cout<<"          * *"<<endl;
	cout<<"         *   *"<<endl;
	cout<<"        *     *"<<endl;
	cout<<"       *       *"<<endl;
	cout<<"      *         *"<<endl;
	cout<<"     *           *"<<endl;
	cout<<"    ***************"<<endl;
	cout<<" "<<endl;
	cout<<"    _______________ "<<endl;
	cout<<"    l             l"<<endl;
	cout<<"    l             l"<<endl;
	cout<<"    l             l"<<endl;
	cout<<"    l             l"<<endl;
	cout<<"    l             l"<<endl;
	cout<<"    l_____________l"<<endl;
	cout<<""<<endl;
	cout<<"         _---_      "<<endl;
	cout<<"      _         _    "<<endl;
	cout<<"     _           _   "<<endl;
	cout<<"    _             _  "<<endl;
	cout<<"    _             _  "<<endl;
	cout<<"     _           _  "<<endl;
	cout<<"      -_       _-   "<<endl;
	cout<<"         - _ -      "<<endl;
	cout<<"                     "<<endl;
	
	
}

//Mover un punto en toda la pantalla



void gotoxy1(int x1, int y1){

HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
COORD dwPos;
dwPos.X =x1;
dwPos.Y =y1;
SetConsoleCursorPosition(hcon,dwPos);
}
char opcion;
int x=10,y=10;

int main1(){
	
	while(opcion!='z')
	{
	
	system("cls");
	gotoxy1(x,y); cout<<".";
	opcion=getch();
	switch(opcion){
		case 'w':y--;break;
		case 's':y++;break;
		case 'a':x--;break;
		case 'd':x++;break;
	}
}
	return 0;
}


double saldo(double total)
{
    cout<<endl;
    if (total==0)
        cout<<"Ud. no tiene saldo en su cuenta"<<endl<<endl;
    else
        cout<<"Su saldo es de: "<<total<<endl;
    return total;
}
 
void fin()
{
    cout<<endl<<"Gracias por usar este cajero, vuelva pronto."<<endl<<endl;
}
 
double deposito(double total)
{
    double dep=0;
    cout<<endl;
    do
    {
        cout<<"Ingrese la cantidad que desea depositar: ";
        cin>>dep;
        if(dep>0)
            {
                total=total+dep;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (dep<=0);
    return total;
}
 
double retiro(double total)
{
    double ret=0;
    cout<<endl;
    if(total==0)
        cout<<"Ud. no tiene saldo que pueda retirar"<<endl;
    else
    do
    {
        cout<<"Ingrese la cantidad que desea retirar: ";
        cin>>ret;
        if(ret>0)
            {
                total=total-ret;
                cout<<"Su nuevo saldo es de: "<<total<<endl;
            }
        else
            cout<<"Ingrese una cantidad valida"<<endl<<endl;
    }while (ret<=0);
    return total;
}
 
int menu(double total)
{
    int opcion;
    cout<<"---------------MENU DEL CAJERO---------------"<<endl;
    cout<<"---------------------------------------------"<<endl<<endl;
    cout<<"Depositar dinero...........................(1)"<<endl;
    cout<<"Retirar dinero.............................(2)"<<endl;
    cout<<"Consulta de saldo..........................(3)"<<endl;
    cout<<"Salir / Exit...............................(4)"<<endl;
    cout<<endl<<"Elija la transaccion que desea realizar: ";
    cin>>opcion;
    return opcion;
}
 
double proceso(int opcion,double total) 
{
    switch (opcion)
    {
        case 1:total=deposito(total);break;
        case 2:total=retiro(total);break;
        case 3:total=saldo(total);break;
        case 4:cout<<endl<<"Ud. ha salido del sistema"<<endl<<endl;exit (0); 
        default: {
                    cout<<"Ingrese un valor correcto"<<endl;
                    menu(total);
                 }
    }
    return total;
}

	

int main2()
{
    double total=0;
    int opcion, a;
    char c;
    do
    {
        cout<<endl<<endl;
        opcion=menu(total);
        total=proceso(opcion,total);
        do
        {
        cout<<endl;
        cout<<"Desea realizar alguna otra transaccion (S)(N): ";
        cin>>c;
        a=0;
        switch(c)
        {
            case 's':
            case 'S':a=2;break;
            case 'n':
            case 'N':break;
            default: cout<<endl<<"Ingrese un valor correcto"<<endl;a=1;
        } 
        } while (a==1);
    } while (a==2);
    fin();
    return 0;
}

//Calcular la hipotenusa
void hipo(){
 float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 


}

void mundo(){
	cout<<"hola mundo :D "<<endl;
	system ("pause");

}


//reloj con alarma


void reloj(){
	
	
	
	int a,b,c,d;

	cout<<"LUIS PABLO POL ACAJABON "<<endl;
	cout<<"CARNET 1290-19-8260"<<endl;
	cout<<"INGENIERIA EN SISTEMAS"<<endl;
	esperar(4*1000);
	system("cls");
cout<<"INGRESE LA HORA DE LA ALARMA"<<endl;
cin>>a;
cout<<"INGRESE LOS MINUTOS"<<endl;
cin>>b;
	
  int horas=0, minutos=0, segundos=0;
  for (horas = 1; horas <= 23; horas++)
  {
 
    for (minutos = 1; minutos <= 59; minutos++)
    {
    	if (a==horas)
  		{
		 if (b==minutos) 
		  {
           cout<< "DESPIERTEEEE" <<endl;
           esperar(1*1000);
          }
 		 }   	
		for (segundos = 1; segundos <= 59; segundos++)
    	  {	
    	  cout << "\n     RELOJ DIGITAL  \n"; 
    	  cout <<" Horas"     << "  Minutos " << " Segundos " << endl;
    	  cout <<"   " <<horas  << "   :   " << minutos << "    :   " << segundos;
    	  //getch();
    	  esperar(1*1000);
    	  c=horas;
    	  d=minutos;
    	  system ("cls");
		  
      }
    }   
}


}
void esperar(double t){
	clock_t t0 = clock();
	double e = 0;
	do {
		e = 1000*double(clock()-t0)/CLOCKS_PER_SEC;
	} while (e<t);
}
	
void factorial(){
	
	int i;
int fact=1;
int numero;

cout<< "ingresa un numero: " <<endl;
cin>> numero;

if (numero<0) {fact =0;}
else if (numero==0) {fact=1;}
else {
for (i = 1; i <= numero; i++){
fact = fact*i;
       }
cout<<"El Factorial de "<< numero<< " es: " << fact << endl;
}
}
void edad(){
	char a[50],b[50];
double c;
cout<<"ingrese su nombre "<<endl;
cin>>a;
cout<<"ingrese su apellido"<<endl;
cin>>b;
cout<<"en que a;o nacio"<<endl;
cin>>c;
system("cls");
cout<<a<<' '<< b<<endl;
cout<<2022-c<<endl;

	
}

void menu(){
	cout << "			MENU PRINCIPAL		" << endl;
	cout << "1.  -Suma, Resta, Multiplicacion y divicion de dos numeros "<<endl;
	cout << "2.  -Determinar si un numero es par o impar "<<endl;
	cout << "3.  -Conversiones de km a millas, metros a pulgadas, libras a kilos y viceversa "<<endl;
	cout << "4.  -Determinar si una palabra es palindromo "<<endl;
	cout << "5.  -Conversion de numeros arabigos a romanos "<<endl;
	cout << "6.  -Conversion de Numeros enteros a letras "<<endl;
	cout << "7.  -Conversion de Numeros enteros  con decimal a aletras "<<endl;
	cout << "8.  -Una tabla de multiplicar "<<endl;
	cout << "9.  -Todas las tablas de multiplicar del 1 al 10 "<<endl;
	cout << "10. -Crear de forma grafica la multiplicacion manual"<<endl;
	cout << "11. -Conversión de números decimales a binario " <<endl;
	cout << "12. -Conversion de numeros decimales a Hexadecimales"<<endl;
	cout << "13. -Crear Figuras Geométricas Básicas."<<endl;
	cout << "14. -Mover un punto en toda la pantalla "<<endl;
	cout << "15. -Cajero Automata"<<endl;
	cout << "16. -Calcular la hipotenusa"<<endl;
	cout << "17. -Hola mundo"<<endl;
	cout << "18. -Reloj digital con alarma "<<endl;
	cout << "19. -Factorial de un numero "<<endl;
	cout << "20. -Edad"<<endl;
	cout<<""<<endl;
	cout << "Ingrese una opcion" << endl;
}

int main() {
	int vgopcion;
	menu();
	cin >> vgopcion;
	cout << endl; 
	switch (vgopcion) {
	case 1:
		srmd();
		break;
		
	case 2:
		parimpar();
		break;
		
	case 3:
		km();
		break;
		
	case 4:
		palindromo();
		break;
	
	case 5:
		araroma();
		break;
		
	case 6:
		numeros_a_letras();
		break;
		
	case 7:
		num_a_letras_decimal();
		break;
		
		
	case 8:
		unatablamult();
		break;
	
	case 9:
		todastabmult();
		break;
	
	case 10:
		multiplicacion_manual();
	break;
	case 11:
		decimal_binario();
		break;
		
	case 12:
		decimal_hexadecimal();
		break;
		
	case 13:
		figuras();
		break;
		
	case 14:
	 main1();
	 break;
	 
	case 15:
		main2();
		break;

	case 16:
	    hipo();
	    break;
	    
	case 17:
		mundo();
		break;
	    
	case 18:
		reloj();
		break;
	
	case 19:
		factorial();
		break;
	
	case 20:
		edad();
		break;
		
	
	default:
		cout << "OPCION INVALIDA" << endl;
	}
	
	
	
	
	return 0;
}































