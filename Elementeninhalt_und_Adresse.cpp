#include <iostream>

int main(){
	const int gross = 5;
	int array[gross], *zarray;
	zarray = array;
	std::cout << "Geben Sie 5 ganze Zahlen ein: ";
	for(int i = 0; i < gross; i++)
		std::cin >> array[i];
	for(int i = 0; i < gross; i++)
		std::cout << "Schritt " << i << " - Inhalt des Arrays " << array[i] << " Speicheradresse: " << &zarray[i] << std::endl;
	system("Pause");
	return 0;
}
