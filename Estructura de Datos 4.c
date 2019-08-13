#include<stdio.h>
#define A 3

main()
{
    system("color F0");
    int arr1[][A]={{1,2,3},{8,5,4},{4,5,6}};
    int arr2[A][A], arr3[A][A];
    int i,j,x=1,t=0,sd=0,sdi=0,arr4[A]={0};
    printf("\n\t\t\t\tArreglo Bidimensional.\n\n");
    printf("\nImpresion del Primer Arreglo en Forma Matricial.\n\n");
    t=sizeof(arr1[0])/sizeof(int);
    for(i=0;i<t;++i)
    {
        for(j=0;j<A;++j)
        {
            printf("%d\t",arr1[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<A;++i)
    {
        sd+=arr1[i][i];
    }
    printf("\n\nLa Suma de la Diagonal del Primer Arreglo es: %d",sd);
    for(i=A-1,j=0;i>=0,j<A;--i,++j)
    {
        sdi+=arr1[i][j];
    }
    printf("\n\nLa Suma de la Diagona Inversa del Primer Arreglo es: %d",sdi);
    printf("\n\nIngresa los Datos del Segundo Arreglo.\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("\n\nImpresion de la Suma de los Dos Primeros Arreglos.\n\n");
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;j++)
        {
            printf("%d\t",arr3[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<A;++i)
    {
        for(j=0;j<A;++j)
        {
            arr4[i]+=arr3[i][j];
        }
    }
    printf("\n\nImpresion de la Suma de las Filas del Tercer Arreglo.\n\n");
    for(i=0;i<A;++i)
    {
        printf("El Resultado de la Suma de la Fila %d es: %d\n",x,arr4[i]);
        ++x;
    }
    getchar();
    getchar();
}
