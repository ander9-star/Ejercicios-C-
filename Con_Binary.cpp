#include<iostream>
#include<vector>
#include<string>
#include<Windows.h>

using namespace std;

void Convertidor_Binario(int decimal);

int main() {

	int decimal;

	cout << "Ingrese un numero: "; cin >> decimal;

	Convertidor_Binario(decimal);

	return 0;
}

//Funcion para convertir el decimal a binario
void Convertidor_Binario (int decimal) {

	int guardar = decimal;
	int residuo = 0;
	vector<int> binary;

	while (decimal != 1) {
		residuo = (int) fmod(decimal, 2);
		decimal = decimal / 2;
		binary.push_back(residuo);
		residuo++;
	}
	binary.push_back(decimal); 

	system("cls");
	cout << guardar << " en Binario es: ";
	Sleep(100);
	for (auto it = binary.rbegin(); it != binary.rend(); ++it) {
		cout << *it;
	}
	cout << endl;
}

