#include "menu.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_USERS 100
void menu() {
    printf("=========================================\n");
    printf("|           Benvingut a Feetfit         |\n");
    printf("=========================================\n");
    printf("| 1. Insereix nou usuari                |\n");
    printf("| 2. Llistar tots els usuaris exsistens |\n");
    printf("| 3. Iniciar sessio                     |\n");
    printf("| 4. Sortir                             |\n");
    printf("=========================================\n");
    printf("Selecciona una opcio: ");
}

int select_option() {
    int option;
    while (1) {
        if (scanf("%d", &option) != 1) {      // Comprueba si se ha leído un entero
            while (getchar() != '\n');              // Descarta el resto de la entrada hasta el salto de línea
        } else if (option >= 1 && option <= 4) {    // Comprueba si la opción es válida
            return option;
        }
        printf("Opcio incorrecta. Torna a intentar.\n");
    }
}

int print_option(int option){
    if (option == 1){
        User usuari;
        user_list Llista;
        printf("INSERTAR NOU USUARI\n");
        emmagatzema_dades(&usuari);
        Llista.user_position[Llista.num_persones] = &usuari;
        Llista.num_persones ++;
    } else if (option == 2){
        printf("LLISTAR TOTS ELS USUARIS EXSISTENTS");
    } else if (option == 3){
        printf("\nQuin usuari ets?\n");
        printf("\n");
        printf("| 1. Enviar solicituds d'amistat   |\n");
        printf("| 2. Gestionar solicituds pendents |\n");
        printf("| 3. Realitzar una publicacio      |\n");
        printf("| 4. Llistar les publicacions      |\n");
    } else if (option == 4) {
        return 1;
    }
}

void emmagatzema_dades(User *usuari) {
    printf("Introdueix el teu nom: \n");
    scanf("%s", usuari->nom);
    printf("Introdueix el teu primer cognom: \n");
    scanf("%s", usuari->cognom1);
    printf("Introdueix el teu segon cognom: \n");
    scanf("%s", usuari->cognom2);
    printf("Introdueix la teva edat: \n");
    scanf("%d", &usuari->edat);
    printf("Introdueix el teu correu electronic: \n");
    scanf("%s", usuari->correu);
    printf("Introdueix la teva ubicacio: \n");
    scanf("%s", usuari->ubi);
    printf("Introdueix els teus 5 gustos preferits (un per linia):\n");
    scanf("%s", usuari->gustos.gust1);
    scanf("%s", usuari->gustos.gust2);
    scanf("%s", usuari->gustos.gust3);
    scanf("%s", usuari->gustos.gust4);
    scanf("%s", usuari->gustos.gust5);
}