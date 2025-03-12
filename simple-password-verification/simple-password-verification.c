#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *login= " root " ;

int granted()
{
    printf("Lograste llegar hasta aquí. ¡Felicidades!\n");
    printf("Acceso Autorizado...")
    // Esta l i n e a de código puede no funcionar en algunos SO
    // Realiza l a p r a c t i c a en Kali Linux
    system("gnome−terminal −x sh −c \"./a.out\"");
    return 0;
}

int main ()
{
    char password [16] ;
    printf( "¡Bienvenido!\n" ) ;
    printf( "Anota la contraseña porfavor: " );
    gets( password ) ;

    if(strcmp(password, login))
    {
        printf("Lo siento la contraseña es incorrecta. \n Acceso Denegado");
    }
    else
    {
        granted();
    }
}