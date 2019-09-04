#include <bits/stdc++.h>

using namespace std;

void swap(int *x, int *y) {

    int temporal = *x;
    *x = *y;
    *y = temporal;

}

int operacionesMinimas(vector <int> unidades) {

    int size = unidades.size();
    int minimoMovimientos = 0;
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (unidades[j] > unidades[j+1]) {
                swap(&unidades[j], &unidades[j+1]);
                minimoMovimientos++;
            }
        }
    }
    return minimoMovimientos;

}

int main() {

    int longitud;
    while (scanf("%d", &longitud) == 1) {
        vector <int> unidades;
        for (int i = 0; i < longitud; ++i) {
            int numero;
            cin >> numero;
            unidades.push_back(numero);
        }
        cout << "Minimum exchange operations : " << operacionesMinimas(unidades) << endl;
    }
    return 0;
    
}