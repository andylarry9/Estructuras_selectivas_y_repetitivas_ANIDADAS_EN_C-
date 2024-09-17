Tema: Aplicación de las diferentes estructuras selectivas y repetitivas ANIDADAS en la
solución de algoritmos iterativos y su codificación en el lenguaje de programación C++.
Objetivo: Resolución de ejercicios mediante la implementación de algoritmos
secuenciales, con alternativas e iteraciones ANIDADAS.
Actividad: Se dispone de las calificaciones (0 a 100, aprobado mayor o igual a 70) de los
alumnos de un curso de Desarrollo de Software correspondientes a las asignaturas de
Lógica Matemática, Fundamentos de Programación y Fundamentos de Electrónica.
Implemente un programa de consola cuyos algoritmos permitan resolver los siguientes
requerimientos:
I. Solicitar al usuario que ingrese la cantidad de estudiantes que desea para registrar
notas.
II. Implementar un proceso iterativo que permita ingresar las tres notas de cada
estudiante y calcule la opción III.1 y III.2.
III. Muestre un menú con las siguientes opciones:
1. Cuántos alumnos tienen al menos una materia suspensa “< 70 puntos”.
2. Cuantos alumnos tienen aprobada con “>= 70 puntos”, las tres materias.
3. Salir del programa.
IV. Pida por teclado la opción deseada (dato numérico entero positivo). Deberá ser
introducida y comprobar que sean valores válidos entre 1 y 3.
V. Ejecute la opción seleccionada del menú.
VI. Repita los pasos III.1, III.2, mientras que, el usuario no seleccione la opción III.3
(Salir) del programa.
Análisis del problema
DATOS DE SALIDA: contadorMateriasSuspensas y contadorUnaMateriaSuspensa
DATOS DE ENTRADA: notaLogica, NotaFundamentos, notaElectrónica (por cada
alumno a ingresar) y n (cantidad de alumnos a ingresar)
DATOS AUXILIARES: i, j (variables iteradoras que controlan los bucles)
