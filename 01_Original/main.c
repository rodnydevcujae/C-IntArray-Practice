#include <stdio.h>

/**
 * Obtener todos los numeros pares
 * @param array - arreglo a filtrar
 * @param len - tamaño lógico del arreglo
 * @param newArray - arreglo de retorno
 * @return
 */
int filter (int array[], int len, int newArray[]) {
  int newLen = 0;
  int i;

  for (i = 0; i < len; i++) {
    if (array[i] % 2 == 0) {
        newArray[newLen++] = array[i];
    }
  }
  return newLen;
}


/**
 * Mostrar el arreglo
 */
void printArray (int array[], int len) {
  int i;
  printf("[");
  for (i = 0; i < len; i++) {
    printf(" %d ", array[i]);
  }
  printf("]\n");
}



/**
 * Función principal
 */
int main(void) {
  int numbers[100] = {5, -9, 16, 2};
  int numbersLen = 4;

  int pairs[100];
  int pairsLen = 0;

  // filtrar con la funcion
  pairsLen = filter(numbers, numbersLen, pairs);

  // mostrar ambos arreglos
  printArray(numbers, numbersLen); // Salida: [ 5  -9  16  2 ]
  printArray(pairs, pairsLen);     // Salida: [ 16  2 ]

  return 0;
}

