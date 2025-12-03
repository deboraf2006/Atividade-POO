#08. Crie um vetor de 6 nomes (strings).
    O programa deve:
    Ler os nomes
    Perguntar um nome a ser buscado
    Informar se ele existe no veto

#include <iostream>
#include <windows.h>
#include <string>
#include <locale>

int main(){
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
   std:: string nomes[6];
	
	for(int i = 0 ; i < 6; i++){
	std:: cout << "Digite um nome :";
	std:: cin >> nomes[i];
	}
	
	for(int i = 0; i < 6; i++){
		std:: cout << nomes[i];
		std:: cout <<"\n";
	}
	std:: string nome;
	std:: cout << "Digite o nome que deseja procurar: ";
	std:: cin >> nome;
	bool encontrado = false;
	
	for(int i = 0; i < 6; i++){
		if (nome == nomes[i]){
			encontrado = true;
		break;
		}
	}
	if(encontrado){std::cout << "-> O nome existe no veto";}
		else{std :: cout << "-> O nome não esta no veto";}
		
	
	
	
}
