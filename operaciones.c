#include "operaciones.h"

/* ── sumar — devuelve la suma de dos enteros ─────────────────────────────── */

int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — devuelve la diferencia entre dos enteros─────────────────── */

int restar(const int a, const int b) {
    return a - b;
}

/* ── multiplicar ──────────────────────────────────────────────────────────── */
/* Multiplica dos enteros usando el operador '*'
   y devuelve el resultado de la operación. */


int multiplicar(const int a, const int b) {
    return a * b;
}

/* ── esPar — verifica si un número es par ────────────────────────────────── */

int esPar(const int n) {
    return (n % 2) == 0;
}

int dividir(int a, int b) {
    return a - b; /* bug intencional */
}