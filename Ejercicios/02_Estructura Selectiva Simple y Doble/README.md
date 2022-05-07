# Estructura Selectiva Simple y Doble

## Problema 01

**Enunciado:** Dado dos números enteros diferentes, devolver el número Mayor.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese dos números enteros diferentes y el sistema realice el proceso para devolver el número mayor.

**Expresión**

$Si$ $n1>n2 ==> n1$ es Mayor

$Si$ $n2>n1 ==> n2$ es Mayor

**Entrada**

* Dos números (n1 y n2).

**Salida**

* Número Mayor (m).

---

## Problema 02

**Enunciado:** Determine si un número entero es positivo, negativo o neutro.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero y el sistema verifique si es positivo, negativo o neutro.

**Expresión**

Si $n>0 ==>$ POSITIVO

Si $n<0 ==>$ NEGATIVO

Si $n=0 ==>$ NEUTRO

**Entrada**

* Número (n).

**Salida**

* Resultado (r)
  * POSITIVO
  * NEGATIVO
  * NEUTRO

---

## Problema 03

**Enunciado:** Dado un carácter determine si es una vocal.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un carácter y el sistema verifica si es una vocal.

**Expresión**

Si $c='a' $ v $ c = 'A' ==>$ VOCAL

Si $c='e' $ v $ c = 'E' ==>$ VOCAL

Si $c='i' $ v $ c = 'I' ==>$ VOCAL

Si $c='o' $ v $ c = 'O' ==>$ VOCAL

Si $c='u' $ v $ c = 'U' ==>$ VOCAL

**Entrada**

* Carácter (c).

**Salida**

* Resultado (r)
  * ES VOCAL
  * NO ES VOCAL

---

## Problema 04

**Enunciado:** Determine si un número es múltiplo de 3 y 5.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero n, luego el sistema análiza y determina si es el número es múltiplo de 3 y de 5.

**Expresión**

Si n Mod $3 = 0 $ ^ Mod $5 = 0 ==>$

SI ES MÚLTIPLO DE 3 Y 5
SINO

NO ES MÚLTIPLO DE 3 Y 5
**Entrada**

* Número (n)

**Salida**

* Resultado (r)
  * ES MÚLTIPLO
  * NO ES MÚLTIPLO

---

## Problema 05

**Enunciado:** Determinar si un número entero es par o impar.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero n, luego el sistema verifica si el número es par o impar.

**Expresión**

Si n Mod $2= 0==>$

PAR
SiNo

IMPAR
**Entrada**

* Número (n).

**Salida**

* Resultado (r).
  * PAR
  * IMPAR

---

## Problema 06

**Enunciado:** Dado tres números enteros, devolver el número mayor.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese tres número enteros n1, n2 y n3 luego el sistema verifica y devuleve el número mayor.

**Expresión**

* Tres números (n1,n2,n3).

**Salida**

* Número mayor (m).

---

## Problema 07

**Enunciado:** Dado un número, devolver el doble si el número no es par, caso contrario el tríple.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese un número entero n, luego el sistema verifica y devuelve el doble o el triple del número.

**Expresión**

Si ~ (n Mod $ 2=0 $ )$==>$

r = n * 2
SiNo

r = n * 3
**Entrada**

* Número entero (n).

**Salida**

* Resultado (r).

---

## Problema 08

**Enunciado:** Dado 3 número, devolver los números en orden ascendente.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese tres números (n1, n2 y n3), luego el sistema verifica y devuelve los números ordenados en forma ascendente.

Primero se debe encontrar el número Mayor, luego el Número menor y al final el número intermedio, que es el resultado de Sumar los tres números - (Mayor + Menos).

**Entrada**

* Números (n1, n2, n3).

**Salida**

* Números ordenados (ma,int, me).

---

## Problema 09

**Enunciado:** Un restaurante ofrece un descuento del 10% para consumos de hasta S/.100.00 y un descuento de 20%  para consumos mayores, para ambos casos se aplica un impuesto de 19%. Determinar el monto del descuento, el impuesto y el importe a pagar.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el consumo y el sistema verifica y calcula el monto del descuento, el impuesto y el importe a pagar.

**Entrada**

* Consumo (c).

**Salida**

* Monto del descuento (m_d)
* Impuesto (m_igv)
* Importe a pagar (p)

---

## Problema 10

**Enunciado:** Debido a los excelentes resultados, el restaurante decide ampliar sus ofertas de acuerdo a la siguiente escala de consumo, ver tabla. Determinar el monto del descuento, el importe del impuesto y el importe a pagar.


| Consumo (S/.) | Descuento(%) |
| :-------------: | :------------: |
|   Hasta 100   |      10      |
|  Mayor a 100  |      20      |
|  Mayor a 200  |      30      |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el consumo y el sistema verifica y calcula el monto del descuento, el impuesto y el importe a pagar.

**Entrada**

* Consumo (c).

**Salida**

* Monto del descuento (m_d).
* Impuesto (m_igv).
* Importe a pagar (p).

---

## Problema 11

**Enunciado:** Al ingresar el valor de una temperatura, obtener el tipo de clima según la siguiente tabla.


|    Temperatura    | Tipo de Clima |
| :------------------: | :-------------: |
|     Tem. < 10     |     Frio     |
| Tem. Entre 10 y 20 |    Nublado    |
| Tem. Entre 21 y 30 |     Calor     |
|     Tem. > 30     |   Tropical   |

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese la temperatura y el sistema verifica y determina el clima.

**Entrada**

* Temperatura (t).

**Salida**

* Clima (c).

---

## Problema 12

**Enunciado:** Un negocio tiene dos tipos de cliente, Cliente general (G) o Cliente afiliado (A), recibe dos formas de pago al Contador (C) o en Plazos (P). Nos pide crear un programa que al ingresar el monto de la compra se obtenga el monto del descuento o el Monto del Recargo y el Total a Pagar según la siguiente tabla.


|         Tipo         | Contado (C) Descuento | Plazos (P) Recargo |
| :--------------------: | :---------------------: | :------------------: |
| Cliente General (G) |          15%          |        10%        |
| Cliente Afiliado (A) |          20%          |         5%         |

***Análisis:*** Para la solución de este problema, se requiere eque el usuario ingrese el monto de la compra, el tipo de cliente y la forma de pago y el sistema verifica y determina el monto de descuento o recargo y el total a pagar.

**Entrada**

* Monto de la compra (mc).
* Tipo de cliente (tc).
* Forma de pago (fp).

**Salida**

* Monto de descuento o recargo (m).
* Total a pagar (tp).

---

## Problema 13

**Enunciado:** Elabore un algoritmo que resuelva una ecuación de primer grado.

$
ax+b=0
$

$
x=\frac {-b}{a}
$

Considerar si $a$ es diferente a $0$ no es una ecuación de primer grado.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el valor de $a$ y $b$, luego el sistema verifica y determina el valor de $x$.

**Entrada**

* Coeficiente a (a).
* Término Independiente b (b).

**Salida**

* Raiz x (x).

---

## Problema 14

**Enunciado:** Elabore un algoritmo que obtenga las raíces reales de una ecuación de segundo grado.

$
ax^2 + bx + c = 0$

$
x1= \frac {-b + \sqrt{b^2}-4ac}{2a}$

$
x2 = \frac{-b-\sqrt{b^2-4ac}}{2a}$

* Considerar que $ a \neq 0$, para poder dividir.
* Considerar $b^2 - 4ac \neq 0$, para obtener la raíz cuadrada.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese el valor de a, b y c. luego el sistema verifica y determina el valor de $x1$ y $x2$.

**Entrada**

* Coeficiente a (a).
* Coeficiente b (b).
* Término independiente c (c)

**Salida**

* Primera raíz (x1).
* Segunda raíz (x2).

---

## Problema 15

**Enunciado:** Dado la hora, minutos y segundos, encuentre la hora del siguiente segundo.

***Análisis:*** Para la solución de este problema, se requiere que el usuario ingrese la hora, minuto y segundo, luego el sistema verifica y determina la hora, minuto y segundo del siguiente segundo.

**Entrada**

* Hora (h).
* Minuto (m).
* Segundo (s).

**Salida**

* Hora (h).
* Minuto (m).
* Segundo (s).

---

# Problemas Propuestos

## Propuesto 01

**Enunciado:** Dado la edad de una persona determinar si es Mayor de edad o Menor de edad, considere que mayor de edad es mayor o igual a 18.

---

## Propuesto 02

**Enunciado:** Dado dos números enteros, devolver el número Menor.

---

## Propuesto 03

**Enunciado:** Dado dos números determinar si son iguales o son diferentes.

---

## Propuesto 04

**Enunciado:** Dado un número entero, devolver el doble de un número si el número es Positivo, el Triple del número si es Negativo, y Cero si el número es Neutro.

---

## Propuesto 05

**Enunciado:** Crear un programa que al ingresar tres números enteros, devuelva los números ordenado en forma ascendente y en forma descendente.

---

## Propuesto 06

**Enunciado:** Después de ingresar 4 notas, obtener el promedio de la tres mejores notas y el mensaje Aprobado si el promedio es mayor o igual a 11, caso contrario Desaprobado.

---

## Propuesto 07

**Enunciado:** Dado los siguientes datos de entrada: Saldo anterior, Tipo de Movimiento R (retiro) o D (deposito) y Monto de la transacción, obtener como dato de salida el saldo actual.

---

## Propuesto 08

**Enunciado:** Dado 2 números enteros a y b, determinar cual es mayor con respecto al otro.

$a$ es mayor que $b$

$b$ es mayor que $a$

$a$ es igual a $b$

---

## Propuesto 09

**Enunciado:** Dado 3 longitudes, diga si forman un triángulo.

***TEOREMA:*** En todo triángulo, cada lado es menor que la suma de los otros dos, pero mayor que su diferencia.

---

## Propuesto 10

**Enunciado:** Dado 3 longitudes, si forman un triángulo devolver el tipo de triángulo según sus lados.

***T. Equilátero:*** Sus tres lados son iguales.

***T. Isósceles:*** 2 lados iguales.

***T. Escaleno:*** 3 lados diferentes.

---
