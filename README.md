# Promedio y Estatus de Estudiantes (Aprobado / Reprobado)

Programa en C++ que, usando bucles, permite ingresar las 4 calificaciones de
"n" cantidad de estudiantes, calcula el promedio de cada uno y determina si
aprobó o reprobó, mostrando los resultados en una tabla formateada.

## Integrantes

| Nombre | Matrícula |
|---|---|
| Keury Alexander López Castro | 2025-1868 |
| Pedro Junior Edubique Hernández | 2025-1422 |
| Fausto Junior Moreno Santana | 2025-1582 |

**Materia:** Lógica de Programación — Actividad 3: Flujo de Control Parte 2
**Profesor:** Gamalier Reyes del Carmen
**Universidad:** Universidad Central del Este (UCE)

## Descripción

El programa solicita primero la cantidad de estudiantes a evaluar. Luego,
mediante un bucle `for`, pide el nombre y las 4 notas de cada estudiante,
calcula el promedio de esas 4 notas y determina el estatus:

- **Aprobado**: si el promedio es mayor o igual a 70.
- **Reprobado**: si el promedio es menor a 70.

Al finalizar la carga de datos, se imprime una tabla con todos los
estudiantes, sus 4 notas, su promedio y su estatus, alineada usando
`setw` de la librería `<iomanip>` para que las columnas queden ordenadas.

### Ejemplo de salida

```
Estudiante              Nota 1  Nota 2  Nota 3  Nota 4    Promedio       Estatus
--------------------------------------------------------------------------------
Penencio Rodriguez       75.00   71.00   80.00   84.00       77.50      Aprobado
Bulbania Rivera          65.00   69.00   70.00   61.00       66.25     Reprobado
--------------------------------------------------------------------------------
```

## Cómo compilar y ejecutar

```bash
g++ -o promedio_estudiantes promedio_estudiantes.cpp
./promedio_estudiantes
```

## Ejemplos de ejecución

### Escenario 1: Dos estudiantes (dos aprobados)

<img width="1698" height="844" alt="image" src="https://github.com/user-attachments/assets/57b6223d-a700-496d-8147-6b174ca6dd09" />


### Escenario 2: Tres o más estudiantes (un aprobado y, dos reprobados)

<img width="1698" height="830" alt="image" src="https://github.com/user-attachments/assets/af035689-49b0-4693-ac0c-6927f3a8778c" />


### Escenario 3: (Dos estudiantes aprobados y, Tres reprobados)
<img width="1739" height="936" alt="image" src="https://github.com/user-attachments/assets/4e0a1a27-c5e4-4c43-b840-577b5dfae56c" />
