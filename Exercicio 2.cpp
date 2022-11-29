#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int tamanho;
	
	cout<<"\n Digite o tamanho da matriz: ";
	cin>>tamanho;
	int Array[tamanho][tamanho], l, c;
	
	for(l = 0; l < tamanho; l++){
		for(c = 0; c < tamanho; c++){
			Array[l][c] = Array[l]==Array[c] ? Array[l][c] = 1 : Array[l][c] = 0;
		}
	}
	
	for (l = 0; l < tamanho; l++){
		for(c = 0; c < tamanho; c++){
			cout<<"\t"<<Array[l][c]<<" ";
		}
		cout<<"\n\n";
	}
	return 0;
}
