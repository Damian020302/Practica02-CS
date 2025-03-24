#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

// Eliminamos la declaración de gets(), ya que no se debe usar
char *login = "root";

int granted()
{
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    printf("Acceso Autorizado...\n");

    // Mejor alternativa para abrir un terminal con un comando
    system("gnome-terminal -- bash -c \"./a.out; exec bash\"");

    return 0;
}

int main()
{
    char password[16];  // Tamaño del buffer

    printf("¡Bienvenido!\n");
    printf("Anota la contraseña por favor: ");

    // Reemplazamos gets() por fgets()
    fgets(password, sizeof(password), stdin);

    // Eliminar el salto de línea que puede quedar en fgets()
    password[strcspn(password, "\n")] = '\0';

    if (strcmp(password, login))
    {
        printf("Lo siento, la contraseña es incorrecta. \nAcceso Denegado\n");
    }
    else
    {
        granted();
    }

    return 0;
}
