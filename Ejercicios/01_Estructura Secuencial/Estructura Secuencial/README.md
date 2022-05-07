# Estructura Secuancial 

## Problema 01
**Enunciado:** Dado dos números enteros, hallar la suma. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese dos números enteros y el sistema realice el cálculo respectivo para hallar la suma, para esto usará la siguiente expresión.

**Expresión Matemática**

$s = n1 + n2$

**Expresión Algorimica**

$s \leftarrow n1 + n2$

**Entrada**

* Dos números (n1 y n2).

**Salida**

* La suma (s).

---

## Problema 02
**Enunciado:** Hallar el cociente y el residuo (resto) de dos números enteros. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese dos números enteros y el sistema realice el calculo respectivo para hallar el cociente y el residuo, para esto use la siguiente expresión.

**Expresión Algoritmica**

$c \leftarrow n1 / n2$

$r \leftarrow n1$ Mod $n2$

**Entrada**

* Dos números (n1 y n2). 

**Salida**

* El Cociente (c).
* El Residuo (r).

---

## Problema 03
**Enunciado:** Dado el valor de venta de un producto, hallar el IGV(19%) y el Precio de Venta. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el Valor de venta del producto y el sistema realice el cálculo respectivo para hallar el IGV y el Precio de venta, para esto use la siguiente expresión.

**Expresión Algoritmica**

$igv \leftarrow vv * 0.19$

$pv \leftarrow vv + igv$

**Entrada**

* Valor de venta (vv).

**Salida**

* El IGV(igv).

* El Precio de venta(pv).

---

## Problema 04
**Enunciado:** Hallar la potencia de $a^n$, donde a y n pertenecen a $Z^+$(números enteros positivos).

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese dos números enteros positivos a y n, luego el sistema procesa y obtiene la potencia p.

**Expresión Matemática**

$
p=a^n=\underbrace{a\times a \times a\times a \times ...a\times}_{n factores}
$

**Expresión Algorítmica**

p <- a ^ n

**Entrada**

* Dos números enteros (a, n).

**Salida**

* La potencia (p).

---

## Problema 05
**Enunciado:** Hallar la potencia de $\quad \sqrt [n]{a}$, donde a y n pertenecen a $Z^+$ (números enteros positivos).

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese dos números enteros positivos a y n, luego el sistema procesa y obtiene la radicación r.

**Expresión Matemática**

$r = \quad \sqrt [n]{a} = a ^ \frac {1}{n}$

**Expresión Algoritmica**

r <- a ^ (a/n)

**Entrada**
* Dos números enteros {a, n}.

**Salida**

* La Radicación (r).

---

## Problema 06
**Enunciado:** Dado un número de 5 dígitos, devolver el número en orden inverso. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número n, luego el sistema procesa y obtiene el número inverso ni, realiza 4 divisiones sucesivas entre 10, para acumular el residuo y el último cociente. 

**Entrada**

* Un número entero (n).

**Salida**

* El número inverso (ni).

---

## Problema 07
**Enunciado:** Determinar la suma de los N primeros números enteros positivos ($Z^+$) use la siguiente formula.

$
S = \frac{N(N+1)}{2}
$

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero positivo n, luego el sistema procesa y obtiene la suma de los primeros números enteros positivos hasta n.

**Expresión Matemática**

$
S = \frac{N(N+1)}{2}
$

**Expresión Algoritmica**

$
S \leftarrow (n * (n + 1)) / 2
$

**Entrada**

* Números entero (n).

**Salida**

* Suma (s).

---

## Problema 08
**Enunciado:** Calcular el interés compuesto generado por un capital depositado durante cierta cantidad de tiempo a una tasa de interés determinada, aplique la siguiente fórmula. 

$
M = (1 + rpor) ^t * c
$

$
I = M - C
$

* **Monto (M):** Es la suma del capital más sus intereses producido en determinado tiempo.
* **Tasa de Interés (r%):** Es la ganancia que se obtiene por cada 100 unidades monetarias en cada periodo de tiempo.
* **Capital(C):** Es todo aquello que se va a ceder o imponer en durante algún tiempo para generar una ganancia.
* **Interés(I):** Parte de la utilidad que obtiene el capitalista presta su dinero.
* **Tiempo(t):** Es el periodo de tiempo durante el cual se cede el capital. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el capital c y la tasa de interés r, luego el sistema procesa y obtiene el interés ganado y el monto producido. 

**Expresión Matemática**

$
M = (1 + rpor)^t.c
$

**Expresión Algorítmica**

m <- ((1 + r / 100) ^ t) * c

**Entrada**

* Capital (C).
* Tasa de interés (r).
* Tiempo (t).

**Salida**

* Interés (i).
* Monto (m).

---

## Problema 09
**Enunciado:** Crear un programa para encontrar el Área de un Círculo, use la formula:

$
A = \pi * r^2
$

* **Área (A):** Es el área del círculo.
* **PI($\pi$):** Representa el valor constante pi (3.14159)
* **Radio (r):** Es el radio del círculo.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el radio del circulo y el sistema procesa y obtiene el área del círculo. 

**Expresión Aritmética**

$A = \pi.r^2$

**Expresión Algorítmica**

A <- 3.14159 * r ^ 2

**Entrada**

* Radio (r).

**Salida**

* Área (a).

---

## Problema 10
**Enunciado:** Crear un programa que permita convertir una cantidad de segundos en horas, minutos y segundos. 

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un tiempo expresado en segundos y el sistema procesa y obtiene las horas, minutos y segundos restantes. 

**Entrada**

* Tiempo en segundos (t).

**Salida**

* Horas (h).
* Mínutos (m).
* Segundos (s).

# Problemas Propuestos 

## Propuesto 01
**Enunciado:** Dado dos números enteros ($Z$), a y b, hallar $a + b$ y $a - b$

## Propuesto 02
**Enunciado:** Dado dos números enteros, determinar cuantos números enteros están incluidos en ellos.

## Propuesto 03
**Enunciado:** Dada una cantidad de milímitros, expresarlo en la máxima cantidad de metros, el resto en decímetros, centímetros, y milímetros. 

## Propuesto 04
**Enunciado:** Obtener el valor de c y d de acuerdo a la siguiente fórmula.

$
C = \frac {(4a^4 + 3ba + b^2)}{a^2 - b ^2} 
$

---

$
D = \frac {(3c^2 + a + b)}{4}
$

## Propuesto 05
**Enunciado:** Dado 4 números enteros, obtener el porcentaje de c/u en función a la suma de los 4 números ingresados.

## Propuesto 06
**Enunciado:** Hallar el Área y el Perímetro de un cuadrado.

## Propuesto 07
**Enunciado:** Dado una cantidad de horas obtener su equivalente en minutos y segundos.

## Propuesto 08
**Enunciado:** Convertir una cantidad de grados Fahrenheit a Celsius y Kelvin.

## Propuesto 09
**Enunciado:** Hallar el Área y el Perímetro de un Rectangulo.

## Propuesto 10
**Enunciado:** Convertir grados sexagesimales a centesimales. 