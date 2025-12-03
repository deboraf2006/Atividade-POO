#01. Crie um vetor com 10 números digitados pelo usuário.
    Depois peça um número X e informe:
    Se X está no vetor
    Em qual posição ele aparece pela primeira vez

#include <iostream>
#include <windows.h>

int main(){
setlocale(LC_ALL,"");
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

int valores[10];
int i = 0;
int numero = 0;
for(int i = 0 ; i < 10; i ++){
std::cout << "Digite um numero na posiçao " << i << " º:" ;
std:: cin  >> valores[i];
}

int posicao = 0;


std:: cout << "Qual numero deseja encontar? ";
	std:: cin >> numero;
	int encontrado = false;
	
for (i = 0 ; i < 10 ; i++){
	if(numero == valores[i]){
		encontrado = true;
		posicao = i;
		break;
	}
	
}
if(encontrado){std:: cout << "O numero que vc procura existe!\n Está na posição: " << posicao;}
	else {std :: cout<< "O numero não existe em nenhuma posição\n!";}
return 0;
}	
