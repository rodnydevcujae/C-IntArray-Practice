#include <stdio.h>

typedef struct IntArray {
  int v[100]; // contenido del arreglo
  int len; // tamaño lógico del arreglo
} IntArray;


/**
 * Obtener todos los numeros pares
 * @param array
 * @return
 */
IntArray filter (IntArray array) {
  IntArray newArray = {{0}, 0};
  int i;

  for (i = 0; i < array.len; i++) {
    if (array.v[i] % 2 == 0) {
        newArray.v[newArray.len++] = array.v[i];
    }
  }
  return newArray;
}


/**
 * Muestra el arreglo
 */
void printArray (IntArray array) {
  int i;
  printf("[");
  for (i = 0; i < array.len; i++) {
    printf(" %d ", array.v[i]);
  }
  printf("]\n");
}



/**
 * Función principal
 */
int main(void) {
  IntArray numbers = {{5, -9, 16, 2}, 4};
  IntArray pairs = filter(numbers);

  // mostrar ambos arreglos
  printArray(numbers); // Salida: [ 5  -9  16  2 ]
  printArray(pairs);   // Salida: [ 16  2 ]

  return 0;
}

