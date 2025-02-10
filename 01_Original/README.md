# Solución 1
> [Ver código completo](./main.c)

Esta es la solución original al ejercicio sin el uso de encapsulación con estructuras. Esto obliga al programador a utilizar dos variables independientes:
- una con el contenido del arreglo
- y otra para el tamaño lógico, o sea, la cantidad de valores válidos de ese arreglo (len).

> Este método de gestión de arreglos hace que se tengan que manipular dos variables diferentes durante todo el transcurso del código.

Ejemplo de arreglo con este método:
```c
// valores del arreglo
int numbers[100];

// tamaño usable
int numbersLen = 0;
```


