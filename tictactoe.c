#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#ifdef WIN32
#define clrscr() system("cls");
#else
#define clrscr() system("clear");
#endif

char tab[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool juegoFin = false, sesionActiva = true;
int numTurno, ganador;

void imprimirTablero(){
    clrscr();
    printf("\e[1;1H\e[2J");
    printf("_____________\n");
    printf("| %c | %c | %c |\n", tab[0][0], tab[0][1], tab[0][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tab[1][0], tab[1][1], tab[1][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tab[2][0], tab[2][1], tab[2][2]);
    printf("-------------\n");
}

void casillaOcupada(){
    printf("Casilla ocupada. Elija otra casilla\n");
    system("pause");
    imprimirTablero();
}

void turno(int numJugador){
    char valorCasilla;
    int eleccion;
    switch (numJugador){
    case 1:
        valorCasilla = 'X';
        break;
    case 2:
        valorCasilla = 'O';
        break;
    default:
        break;
    }
    do{
        printf("Turno del jugador %i. Elija una casilla:\n> ", numJugador);
        scanf("%i", &eleccion);
        switch (eleccion){
            case 1:
                if (tab[0][0] == 'X' || tab[0][0] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[0][0] = valorCasilla;
                    numTurno++;
                }
                break;
            case 2:
                if (tab[0][1] == 'X' || tab[0][1] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[0][1] = valorCasilla;
                    numTurno++;
                }
                break;
            case 3:
                if (tab[0][2] == 'X' || tab[0][2] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[0][2] = valorCasilla;
                    numTurno++;
                }
                break;
            case 4:
                if (tab[1][0] == 'X' || tab[1][0] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[1][0] = valorCasilla;
                    numTurno++;
                }
                break;
            case 5:
                if (tab[1][1] == 'X' || tab[1][1] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[1][1] = valorCasilla;
                    numTurno++;
                }
                break;
            case 6:
                if (tab[1][2] == 'X' || tab[1][2] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[1][2] = valorCasilla;
                    numTurno++;
                }
                break;
            case 7:
                if (tab[2][0] == 'X' || tab[2][0] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[2][0] = valorCasilla;
                    numTurno++;
                }
                break;
            case 8:
                if (tab[2][1] == 'X' || tab[2][1] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[2][1] = valorCasilla;
                    numTurno++;
                }
                break;
            case 9:
                if (tab[2][2] == 'X' || tab[2][2] == 'O'){
                    casillaOcupada();
                    eleccion = 0;
                }
                else{
                    tab[2][2] = valorCasilla;
                    numTurno++;
                }
                break;
            default:
                printf("Numero de casilla incorrecto. Elija otra casilla\n");
                system("pause");
                imprimirTablero();
                eleccion = 0;
                break;
        }
    } while (eleccion < 1 || eleccion > 9);
}

void comprobarTablero(){
    for (int i = 1; i <= 2; i++){
        char compr;
        switch(i){
            case 1: compr = 'X'; break;
            case 2: compr = 'O'; break;
        }
        if(tab[0][0] == compr && tab[0][1] == tab[0][0] && tab[0][2] == tab[0][0]){
        juegoFin = true;
        ganador = i;
        }
        else if(tab[1][0] == compr && tab[1][1] == tab[1][0] && tab[1][2] == tab[1][0]){
            juegoFin = true;
            ganador = i;
        }
        else if(tab[2][0] == compr && tab[2][1] == tab[2][0] && tab[2][2] == tab[2][0]){
            juegoFin = true;
            ganador = i;
        }
        else if(tab[0][0] == compr && tab[1][0] == tab[0][0] && tab[2][0] == tab[0][0]){
            juegoFin = true;
            ganador = i;
        }
        else if(tab[0][1] == compr && tab[1][1] == tab[0][1] && tab[2][1] == tab[0][1]){
            juegoFin = true;
            ganador = i;
        }
        else if(tab[0][2] == compr && tab[1][2] == tab[0][2] && tab[2][2] == tab[0][2]){
            juegoFin = true;
            ganador = i;
        }
        else if (tab[0][0] == compr && tab[1][1] == tab[0][0] && tab[2][2] == tab[0][0]){
            juegoFin = true;
            ganador = i;
        }
        else if (tab[0][2] == compr && tab[1][1] == tab[0][2] && tab[2][0] == tab[0][2]){
            juegoFin = true;
            ganador = i;
        }
    }
    if(numTurno >= 9){
        juegoFin = true;
        ganador = 3;
    }
}

void mostrarGanador(){
    switch (ganador){
    case 1:
        printf("El ganador es el jugador 1\n");
        system("pause");
        break;
    case 2:
        printf("El ganador es el jugador 2\n");
        system("pause");
        break;
    default:
        printf("Nadie es el ganador\n");
        system("pause");
        break;
    }
}

int main(int argc, char const *argv[]){
    while(sesionActiva){
        for(int i = 1; i <= 2; i++){
            imprimirTablero();
            if(juegoFin == false){
                turno(i);
                comprobarTablero();
            }
            else{
                mostrarGanador();
                sesionActiva = false;
            }
        }
    }
    return 0;
}