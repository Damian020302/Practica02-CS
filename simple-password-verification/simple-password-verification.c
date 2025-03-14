#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <stdlib.h> //COrreccion para system

char *login="root";

// Declaración manual de gets() (para evitar error en compilación)
char *gets(char *s);

int granted()
{
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    printf("Acceso Autorizado...");
    // Esta linea de código puede no funcionar en algunos SO
    // Realiza la practica en Kali Linux
    system("gnome−terminal −x sh −c \"./a.out\"");
    return 0;
}

int main ()
{
    char password [16] ;
    printf("¡Bienvenido!\n");
    printf("Anota la contraseña porfavor: ");
    gets(password);
    //fgets(password, sizeof(password), stdin);

    if(strcmp(password, login))
    {
        printf("Lo siento la contraseña es incorrecta. \n Acceso Denegado");
    }
    else
    {
        granted();
    }
}
