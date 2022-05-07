# Estructura Selectiva Múltiple

## Problema 01

**Enunciado:** Al ingresar un número entre 1 y 4 devolver la estación del año de acuerdo a la siguiente tabla.


| Número | Estación |
| :-------: | :---------- |
|    1    | Verano    |
|    2    | Otoño    |
|    3    | Invierno  |
|    4    | Primavera |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero y el sistema realice el proceso para devolver la estación.

**Entrada**

* Número (n).

**Salida**

* Estación (e).

---

## Problema 02

**Enunciado:** Dado un número entero de un dígito (0 al 9), devolver el número en letras.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero y el sistema verifica y devuelve el número en letras.

**Entrada**

* Número (n).

**Salida**

* Resultado (r).

---

## Problema 03

**Enunciado:** Dado dos números enteros y un operador $+$, $-$, $*$ y $/$, devolver la operación de los dos números según el operador ingresado, considere qu si el segundo número es cero y el operador es $/$, no es divisible con el primer número, entonces devolver como resultado 0.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un operador y dos números y el sistema verifica que operación debe realizar y devuelve el resultado de la operación.

**Entrada**

* Operador (op).
* Número (n1 y n2).

**Salida**

* Resultado (r).

## Problema 04

**Enunciado:** Dado una letra determinar si en una vocal.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese una letra I, luego el sistema analiza y determina si es una vocal.
**Entrada**

* Letra (I).

**Salida**

* Resultado (r).

## Problema 05

**Enunciado:** Al ingresar el número de un mes, devolver la estación del año de acuerdo a la siguiente tabla.


| Mes      | Estación |
| :--------- | :---------- |
| 1,2,3    | Verano    |
| 4,5,6    | Otoño    |
| 7,8,9    | Invierno  |
| 10,11,12 | Primavera |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el número del mes, luego el sistema verifica y determine la estación.

**Entrada**

* Mes (m).

**Salida**

* Estación (e).

---

## Problema 06

**Enunciado:** Dado la nota promedio de un alumno, obtener la categoría, según la siguiente tabla.


| Promedio      | Categoría |
| :-------------- | :----------- |
| Entre 0 y 5   | Pésimo    |
| Entre 6 y 10  | Malo       |
| Entre 11 y 14 | Regular    |
| Entre 15 y 17 | Bueno      |
| Entre 18 y 20 | Excelente  |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el promedio, luego el sistema verifique y devuelve la categoría.
**Entrada**

* Promedio (p).

**Salida**

* Categoria (c).

---

## Problema 07

**Enunciado:** Al ingresar el día y el número de un mes, devolver la estación del año de acuerdo a la siguiente tabla.


| Estación |                 Tiempo                 |
| :---------- | :---------------------------------------: |
| Verano    |   Del 21 de Diciembre al 20 de Marzo   |
| Otoño    |     Del 21 de Marzo al 21 de Junio     |
| Invierno  |   Del 22 de Junio al 22 de Septiembre   |
| Primavera | Del 23 de Septiembre al 20 de Diciembre |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el día y el mes, luego el sistema verifica y devuelve la estación.

**Entrada**

* Día (d).
* Mes (m).

**Salida**

* Estación (e).

---

## Problema 08

**Enunciado:** En una Universidad se ha establecido los siguientes puntajes de ingreso a sus respectivas facultades.


|    Facultad    | Puntaje Minimo |
| :---------------: | :--------------: |
|    Sistemas    |      100      |
|  Electrónica  |       90       |
|   Industrial   |       80       |
| Administración |       70       |

De acuerdo al puntaje obtenido por un postulante determinar la faculatad a la cual ingresó o dar un mensaje correspondiente para el caso que no ingrese.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el puntaje, luego el sistema verifica y devuelve la faculatad que ingrese.

**Entrada**

* Puntaje (p).

**Salida**

* Faculatad (f).

---

## Problema 09

**Enunciado:** Determine el importe a pagar para el examen de admisión de una universidad, cuyo valor depende del nivel socieconómico y el colegio de procedencia.

```java
/*
|            |   Nivel Social  |
|------------|-----------------|
| Colegio    |   A  |  B  |  C |
|------------|------|-----|----|
| Nacional   |  300 | 200 | 100|
| Particular |  400 | 300 | 200|
*/
```

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese al colegio y el nivel socioeconómico y el sistema verifica y determina el monto a pagar.

**Entrada**

* Colegio (c).
* Nivel (n).

**Salida**

* Monto a Pagar (mp).

## Problema 10

**Enunciado:** Dado el número del mes y el año (cuatro dígitos) de una fecha, determinar que mes es en letras y cuantos días tiene, considerar que febrero tiene 28 y 29 días si el año es bisiesto, un año es bisiesto si es múltiplo de 4, pero no de 100 y si de 400.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el mes y el año y el sistema verifica y determina cuantos días tiene y que mes es en letras.

**Entrada**

* Mes (m).
* Año (a).

**Salida**

* Dias (d).
* Mes Letras (ml).

## Problema 11

**Enunciado:** Una empresa ha establecido diferentes precios a sus productos, según la calidad.

```
___________________________________________
|        \ Calidad|   1    |  2    |  3    |
|Producto \       |        |       |       |
|----------\------|--------|-------|-------|
|         1       |  5000  | 4500  | 4000  |
|         2       |  4500  | 4000  | 3500  |
|         3       |  4000  | 3500  | 3000  |
|_________________|________|_______|_______|
```

Cree un programa que devuelva el precio a pagar por un producto y una calidad dada.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese la calidad y el producto, luego el sistema verifica y determina el precio.

**Entrada**

* Calidad (c).
* Producto (p).

**Salida**

* Precio (precio).

## Problema 12

**Enunciado:** Diseñe un algoritmo que califique el puntaje obtenido en el lanzamiento de tres dados en base a la cantidad de seis obtenidos, de acuerdo a lo siguiente:

**Tres Seis:** Oro

**Dos Seis:** Plata

**Un Seis:** Bronce
**Ningún Seis:** Perdió

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el puntaje de los dados y el sistema verifique y determine el premio.

**Entrada**

* Primer dado (d1).
* Segundo dado (d2).
* Tercer dado (d3).

**Salida**

* Premio (p).

## Problema 13

**Enunciado:** Dado el día, mes y año, determine si es una fecha correcta, considere los años bisiestos.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el día, mes y años, luego el sistema verifica y determina el resultado si es o no una fecha incorrecta.

**Entrada**

* Día (d).
* Mes (m).
* Año (a).

**Salida**

* Respuesta (r).

## Problema 14

**Enunciado:** Dado una fecha valida, halle la fecha del siguiente día.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el día, mes y año, luego el sistema devuelve la fecha del siguiente día.

**Entrada**

* Día (d).
* Mes (m).
* Año (a).

**Salida**

* Día (d).
* Mes (m).
* Año (a).

## Problema 15

**Enunciado:** Convierta a números romanos, números menores a 4000.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el número, luego el sistema convierte y devuelve el número a romano.

**Entrada**

* Números decimales (n).

**Salida**

* Número romano (r).

# Problemas Propuestos

## Propuesto 01

**Enunciado:** Dado el número de un mes, devolver el mes en letras.

## Propuesto 02

**Enunciado:** Lea un número del 1 al 7 y devuelva el día de la semana, considere que 1 es Domingo.

## Propuesto 03

**Enunciado:** Dado los siguientes operadores aritméticos $+$, $-$, $*$ y $/$, devuelva el nombre del operador.

## Propuesto 04

**Enunciado:** Dado el número de un canal de televisión, determine cual es el nombre del canal.

## Propuesto 05

**Enunciado:** En una empresa se ha determinado la siguiente politica de descuento.

```java
_________________________________________
|       \ Sexo  |            |           |
|Tarjeta \      |   HOMBRES  |  MUJERES  |
|---------\-----|------------|-----------|
|     Obrero    |     15%    |     10%   |
|---------------|------------|-----------|
|     Empleado  |     20%    |     15%   |
------------------------------------------
```

Determine mediante un programa, cual será el monto del descuento al sueldo ingresado de un trabajador.

## Propuesto 06

**Enunciado:** Una frutería ofrece las manzanas con descuento según la siguiente tabla.


|   Kilos   | %Descuento |
| :----------: | :----------: |
|    0-2    |     0%     |
|   2.01-5   |    10%    |
|  5.01-10  |    20%    |
| Mayor a 10 |    30%    |

Determinar cuanto pagará una persona que compre manzanas en esa frutería

## Propuesto 07

**Enunciado:** Obtenga el nombre del estado civil según la siguiente tabla.


| Código | Estado Civil |
| :-------: | :------------: |
|    0    |   Soltero   |
|    1    |    Casado    |
|    2    |  Divorciado  |
|    3    |    Viudo    |

## Propuesto 08

**Enunciado:** Determinar el monto que recibirá un trabajador por utilidades, después de ingresar el tiempo de servicio y el cargo, según la siguiente tabla.

```java
|                \  Cargo  |                |          |          |
|                 \        | Administración | Contador | Empleado |
|Tiempo de Servicio\       |                |          |          |
|-------------------\------|----------------|----------|----------|
|      Entre 0 y 2 años    |       2000     |   1500   |   1000   |
|      Entre 3 y 5 años    |       2500     |   2000   |   1500   |
|      Entre 6 y 8 años    |       3000     |   2500   |   2000   |
|      Mayor a 8 años      |       4000     |   3500   |   1500   |
```

## Propuesto 09

**Enunciado:** Según la siguiente tabla, obtener la ciudad que visitará, sepués de ingresar su sexo y el puntaje obtenido en un examen.

```java
|      \  Sexo  |            |         |
|       \       |  Masculino |Femenino |
|Puntaje \      |            |         |
|---------\-----|------------|---------|
| Entre 18 y 35 |  Arequipa  |  Cuzco  |
| Entre 36 y 75 |  Cuzco     |  Iquitos|
| Mayor a 75    |  Iquitos   |Arequipa |

```

## Propuesto 10

**Enunciado:** Dado una fecha determine cuántos días falten para que acabe el año.
