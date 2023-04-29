#ifndef EDA_P_MENU_H
#define EDA_P_MENU_H
#include <stdio.h>
#define MAX_LENGTH 200

typedef struct {
    char gust1[MAX_LENGTH];
    char gust2[MAX_LENGTH];
    char gust3[MAX_LENGTH];
    char gust4[MAX_LENGTH];
    char gust5[MAX_LENGTH];
}Gustos;

typedef struct {
    char nom[MAX_LENGTH];
    char cognom1[MAX_LENGTH];
    char cognom2[MAX_LENGTH];
    int edat;
    char correu[MAX_LENGTH];
    char ubi[MAX_LENGTH];
    Gustos gustos;
}User;

typedef struct{
    User* user_position[100];
    int num_persones;
} user_list;

void menu();

int select_option();

int print_option(int option);

void emmagatzema_dades(User *usuari);

#endif //EDA_P_MENU_H
