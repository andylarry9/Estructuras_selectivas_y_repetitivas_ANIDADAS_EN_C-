/* Resolución de ejercicios mediante la implementación de algoritmos secuenciales, con alternativas e iteraciones ANIDADAS. */

#include <iostream>
using namespace std;
int contadorMateriasSuspensas; 
int contadorUnaMateriaSuspensa; 
int alumnosAprobados; 
int n; 
int i = 0; 
int j = 0;
int o;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "spanish");
	 
cout<< "Ingrese el numero de estudiantes registrados " << "\n"; 
cin>>n;

int notaLogica[n]; 
int notaFundamentos[n]; 
int notaElectronica[n]; 

while(i<n) {
i=i+1; 
cout << "Estudiante" << i<< "\n"; 
cout << "Ingrese la calificacion de Logica Matematica:" << "\n"; 
cin>> notaLogica[i]; 
cout << "Ingrese la calificacion de Fundamentos de Programacion:" << "\n"; 
cin>> notaFundamentos[i]; 
cout << "Ingrese la calificacion de Fundamentos de Electronica:" << "\n"; 
cin>> notaElectronica[i];
}

while(o!=3){
cout << "1. Estudiantes con al menos una materia <70(reprobados)" << "\n"; 
cout << "2. Estudiantes con materias aprobada >70 " << "\n"; 
cout << "3. Salir del programa" << "\n";
cout << "Elija la opcion: "; 
cin>> o;

if (o==1){ 
while(j<n){
j=j+1; 
if(notaLogica[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa+1;
}
if (notaFundamentos[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa+1;
}
if(notaElectronica[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa+1;
}
if(contadorUnaMateriaSuspensa>0){
contadorMateriasSuspensas = contadorMateriasSuspensas+1;
}
contadorUnaMateriaSuspensa = 0;
}
j=0; 
cout<< "Estudiantes con al menos una materia <70(reprobados) " << contadorMateriasSuspensas << "\n"; 
contadorMateriasSuspensas=0 ;
}

if (o==2){
while(j<n){
j= j+1; 
if(notaLogica[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa+1;
}
if(notaFundamentos[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa +1;
}
if(notaElectronica[j]<70){
contadorUnaMateriaSuspensa = contadorUnaMateriaSuspensa +1;
}
if(contadorUnaMateriaSuspensa>0) {
contadorMateriasSuspensas = contadorMateriasSuspensas+1;
}
contadorUnaMateriaSuspensa =0; 
alumnosAprobados = n - contadorMateriasSuspensas;
}
j=0; 
cout<<"Estudiantes con materias aprobada >70 " << alumnosAprobados << "\n"; 
contadorMateriasSuspensas = 0 ; 
alumnosAprobados = 0;
}
if (o==3){
return 0;
}
if(o!=1 && o!=2 && o!=3){
cout<< "Ingrese la opcion correcta" << "\n";
}
}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

