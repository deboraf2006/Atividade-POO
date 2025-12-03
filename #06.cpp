#06. Leia 8 números inteiros para dentro de um vetor e determine:
    O maior valor e em qual posição ele está
    O menor valor e em qual posição ele está

#include <iostream>
#include <windows.h>

int main(){
	setlocale(LC_ALL,"");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int valores[8];
	
	
	for (int i = 0 ; i < 8; i++){
	std::cout << "Digite o numero da posição " << i << " : ";
	std::cin >> valores[i];
	}
	
	int maior = valores[0];
	int menor = valores[0];
	int posicaomaior= 0;
	int posicaomenor= 0;
	
	for(int i = 0; i < 8; i++){
		if(valores[i] > maior){
			maior = valores[i];
			posicaomaior = i;
		}
		if(valores[i] < menor){menor = valores[i];
		posicaomenor = i;
		}
	}
	std:: cout <<"O maior valor é: " << maior << " .Sua posição : "  << posicaomaior ;
	std:: cout << "\n";
	std:: cout <<"O menor valor é: "<< menor << ".Sua posição : "<<posicaomenor;
}
