//Jonathan Felipe Velasquez Perez | VP100717
#include <iostream>
#include <ctime>
#include <array>

using namespace std;

const int TAMANIO = 64000;

//
void imprimirArreglo(array<int, TAMANIO> &arr, int num_elementos) {
    for (int i = 0; i < arr.size() && i < num_elementos; i++){
        cout << arr[i] << endl;
    }
}

void ordenamientoBurbuja(array<int,TAMANIO> & arr){
    int tamanio = arr.size();
    bool desordenado = true;
    
    for (int pase = 0; pase < tamanio - 1 && desordenado; pase++){
        desordenado = false;
        for(int j = 0; j < tamanio -1 && desordenado; pase ++) {
            if(arr[j] > arr[j+1]) {
                desordenado = true;
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    array<int, TAMANIO> miArreglo;
    // Leer elementos arreglo
    for (int i = 0; i < TAMANIO; i++) {
        cin >> miArreglo[i];
    }

    clock_t inicio = clock();
    ordenamientoBurbuja(miArreglo);
    clock_t fin = clock();

    double tiempoSegundos = double(fin - inicio)/ CLOCKS_PER_SEC; // tiempo

    cout << "Cantidad de elementos: " << miArreglo.size() << endl;
    cout << "Tiempo transcurrido : " << tiempoSegundos << " segundos " << endl;
    return 0;
}
