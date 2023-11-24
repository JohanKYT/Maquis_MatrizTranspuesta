#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Kevin Calle Maquis Calle
int main()
{
    // Agregamos la funcion para que no nos de error al usar una funcion que nos brinde valores aleatorios
    srand(time(NULL));
    int n, m;
    // Inicializamos las variables y ponemos que el usuario meta los valores del tama;o de la matriz y leemos eso
    printf("Ingeres el numero de filas:\n");
    scanf("%d", &n);
    printf("Ingeres el numero de columnas:\n");
    scanf("%d", &m);
    // Iniciamos las matrices con los valores que el ususario ingreso
    int Matrix[n][m];
    int MatrixA[m][n];

    printf("\nLA MATRIZ ORIGINAL ES:\n");

    for (int i = 0; i < n; i++)
    {

        printf("\n");
        for (int j = 0; j < m; j++)
        {
            Matrix[i][j] = rand() % 100 + 1;
            printf("%d\t|\t", Matrix[i][j]);
        }
    }
    printf("\n");
    printf("\n LA MATRIZ TRANSPUESTA ES:\n");

    for (int i = 0; i < m; i++)
    {

        printf("\n");
        for (int j = 0; j < n; j++)
        {
            MatrixA[i][j] = Matrix[j][i];

            printf("%d\t|\t", MatrixA[i][j]);
        }
    }
}