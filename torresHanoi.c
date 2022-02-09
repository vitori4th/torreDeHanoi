#include<stdio.h>
//Junto com professor Hokama

void hanoi(int n, char pinoInicio, char pinoAux, char pinoFinal){
	//se fo um disco só
	if(n==0) return;
 	//		  pinoInicial,pinoAux,PinoFinal(pino final funciona como auxiliar)
	hanoi(n-1,pinoInicio,pinoFinal,pinoAux);
	printf("Coloca o disco %d do pino %c para %c\n",n, pinoInicio, pinoFinal);
	hanoi(n-1,pinoAux,pinoInicio,pinoFinal);
		
}

int main(){
	hanoi(8, 'A','B','C');
	return 0;
}
