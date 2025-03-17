#include <stdio.h>
#include <string.h>

#define PASSWORD_LEN 16

void granted() {
    printf("Acceso Autorizado. Bienvenido.\n");
}

int main() {
    char password[PASSWORD_LEN];
    
    printf("¡Bienvenido!\n");
    printf("Anota la contraseña por favor: ");
    
    // Uso de fgets() en lugar de gets()
    if (fgets(password, sizeof(password), stdin) == NULL) {
        printf("Error al leer la contraseña.\n");
        return 1;
    }

    // Remover el salto de línea agregado por fgets()
    password[strcspn(password, "\n")] = 0;

    if (strcmp(password, "root") == 0) {
        granted();
    } else {
        printf("Lo siento, la contraseña es incorrecta.\nAcceso Denegado\n");
    }

    return 0;
}

