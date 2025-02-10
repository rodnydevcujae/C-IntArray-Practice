# Solución 1

Esta es la solución original al ejercicio sin el uso de encapsulación con estructuras. Esto obliga al programador a utilizar dos variables independientes, una con el contenido del arreglo, y otra para el tamaño lógico, o sea, la cantidad de valores válidos de ese arreglo. También esta solución hace que los arreglos resultantes se pasen como parámetros, y la función posteriormente los modificará.

Ejemplo de arreglo con este método
```c
// valores del arreglo
int numbers[100];

// tamaño usable
int numbersLen = 0;
```


> [Ver código completo](./main.c)
