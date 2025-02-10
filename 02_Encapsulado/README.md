# Solución 2

Esta solución presenta una alternativa al uso de arreglos y tamaños lógicos por separado en C. Se encapsula el arreglo y su tamaño en una estructura llamada `IntArray`, lo que permite un manejo más organizado y eficiente de los datos.

Ejemplo de uso de arreglos con este método:

```c
IntArray numbers = {{0}, 0};

numbers.v; // valores del arreglo
numbers.len; // tamaño usable
```

> [Ver código completo](./main.c)
