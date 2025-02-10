# Solución 2
> [Ver código completo](./main.c)

Esta solución presenta una alternativa al uso de arreglos y tamaños lógicos por separado en C. Se encapsula el arreglo y su tamaño en una estructura llamada `IntArray`, lo que permite un manejo más organizado y eficiente de los datos. 
> Es posible retornarlo, pasarlo como referencia etc, permite la gestión del arreglo como un dato "primitivo".

Ejemplo de uso de arreglos con este método:

```c
IntArray numbers = {{0}, 0};

numbers.v; // valores del arreglo
numbers.len; // tamaño usable
```

Obviamente se debe de haber declarado la definición [`IntArray`](./main.c#L3-L6) con anterioridad.