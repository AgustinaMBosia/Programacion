#include <iostream>
using namespace std;

void carga(int n, int matrix[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Ingrese el elemento [" << i + 1 << "][" << j + 1 << "] de la matriz:" << endl;
            cin >> matrix[i][j];
        }
    }
}

int supe(int n, int matrix[][100]) {
    int superior = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j and i < j) {
                superior += matrix[i][j];
            }
        }
    }
    return superior;
}

bool esMatrizMagica(int matriz[][100], int N) {
    int sumaFila0 = 0;
    for (int j = 0; j < N; j++) {
        sumaFila0 += matriz[0][j];
    }

    for (int i = 1; i < N; i++) {
        int sumaFila = 0;
        for (int j = 0; j < N; j++) {
            sumaFila += matriz[i][j];
        }
        if (sumaFila != sumaFila0) {
            return false;
        }
    }

    for (int j = 0; j < N; j++) {
        int sumaColumna = 0;
        for (int i = 0; i < N; i++) {
            sumaColumna += matriz[i][j];
        }
        if (sumaColumna != sumaFila0) {
            return false;
        }
    }

    int sumaDiagonalPrincipal = 0;
    for (int i = 0; i < N; i++) {
        sumaDiagonalPrincipal += matriz[i][i];
    }
    if (sumaDiagonalPrincipal != sumaFila0) {
        return false;
    }

    int sumaDiagonalSecundaria = 0;
    for (int i = 0; i < N; i++) {
        sumaDiagonalSecundaria += matriz[i][N - i - 1];
    }
    if (sumaDiagonalSecundaria != sumaFila0) {
        return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Ingrese el valor n de la matriz cuadrada nxn (menor a 100):" << endl;
    cin >> n;

    int matrix[100][100];
    carga(n, matrix);

    if (esMatrizMagica(matrix, n)) {
        cout << "La matriz ingresada es mágica." << endl;
    } else {
        cout << "La matriz ingresada no es mágica." << endl;
    }

    return 0;
}