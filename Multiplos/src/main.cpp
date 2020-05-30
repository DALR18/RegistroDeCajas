#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int n;
    int Tablamultiplos[2][2];

    cout << "Ingrese un numero del 1 al 10:" << endl;
    cin>>n;
    for (int fila = 0; fila < 2; fila++ ) {
        for (int col = 0; col < 2; col++ ) {
           
          int numero;
          do{
            numero = rand() % 10;
          } while ((numero % n) == 0);          
          Tablamultiplos[fila][col] = numero;
        }
    }
    cout << "Los Multiplos son:" << endl;
    for (int fila = 0; fila < 2; fila++ ) {
        for (int col = 0; col < 2; col++ ) {
            cout << Tablamultiplos[fila][col] << "   ";
        }
        cout  << endl;
    }
    system("pause");
    return 0;
}