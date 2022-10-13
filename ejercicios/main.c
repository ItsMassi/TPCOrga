#include <stdio.h>
#include <stdlib.h>
typedef struct empleado{
    char nombre [41];
    char apellido [41];
    int edad;
} * tEmpleado;//digamos que este es el "tipo estatico"

//esta es una funcion "constructor" por llamarlo de una manera
//que nos construye un empleado y nos retorna el puntero al mismo
//pododemos hacer todo lo que una funcion normal hace (usar if, for, while, etc)
tEmpleado miEmpleado(){
    char name [41], lastname [41];
    int age;
    tEmpleado e;//este es el puntero que vamos a retornar
    printf("Ingrese nombre: "); scanf("%40[^\n]",name);fflush(stdin);
    //ese scanF, %40 significa que solo tomara los primeros 40 caracteres excluyendo \n
    //la funcion fflush(stdin) limpia el buffer del teclado
    printf("Ingrese apellido: "); scanf("%40[^\n]",lastname);fflush(stdin);

    //como hacer scan de un integer
    printf("Ingrese edad: "); scanf("%i", &age);fflush(stdin);

    //copiamos estos valores dentro del empleado
    strcpy(e->nombre, name);// funcion stringcopy(a,b), copia el valor de b y lo pone en a
    strcpy(e->apellido,lastname);
    e->edad = age;

    printf("%s \n",e->nombre);
    printf("%s \n",e->apellido);
    printf("%i \n",e->edad);

    return &e; //retornas el puntero
};
int main()
{
    tEmpleado empleadoMain = miEmpleado();//esto esta igual que en la explicacion no se porque no funciona AYUDA
    printf("%i", empleadoMain->edad);

    return 0;
}
