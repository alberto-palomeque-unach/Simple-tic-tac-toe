#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char tablero[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
bool juegoFinalizado = false;
int turnosTranscurridos, ganador;
bool SesionEnProceso = true;

void imprimirTablero(){
    printf("\e[1;1H\e[2J");
    printf("_____________\n");
    printf("| %c | %c | %c |\n", tablero[0][0], tablero[0][1], tablero[0][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tablero[1][0], tablero[1][1], tablero[1][2]);
    printf("-------------\n");
    printf("| %c | %c | %c |\n", tablero[2][0], tablero[2][1], tablero[2][2]);
    printf("-------------\n");
}

void turno(int numeroJugador){
    char valorCasilla;
    int eleccionCasilla;
    switch (numeroJugador){
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
        printf("Turno del jugador %i. Elija una casilla:\n> ", numeroJugador);
        scanf("%i", &eleccionCasilla);
        switch (eleccionCasilla){
            case 1:
                if (tablero[0][0] == 'X' || tablero[0][0] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[0][0] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 2:
                if (tablero[0][1] == 'X' || tablero[0][1] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[0][1] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 3:
                if (tablero[0][2] == 'X' || tablero[0][2] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[0][2] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 4:
                if (tablero[1][0] == 'X' || tablero[1][0] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[1][0] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 5:
                if (tablero[1][1] == 'X' || tablero[1][1] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[1][1] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 6:
                if (tablero[1][2] == 'X' || tablero[1][2] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[1][2] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 7:
                if (tablero[2][0] == 'X' || tablero[2][0] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[2][0] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 8:
                if (tablero[2][1] == 'X' || tablero[2][1] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[2][1] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            case 9:
                if (tablero[2][2] == 'X' || tablero[2][2] == 'O'){
                    printf("Casilla ocupada. Elija otra casilla\n");
                    system("pause");
                    imprimirTablero();
                    eleccionCasilla = 0;
                }
                else{
                    tablero[2][2] = valorCasilla;
                    turnosTranscurridos++;
                }
            break;
            default:
                printf("Numero de casilla incorrecto. Elija otra casilla\n");
                system("pause");
                imprimirTablero();
                eleccionCasilla = 0;
            break;
        }
    } while (eleccionCasilla < 1 || eleccionCasilla > 9);
}

void comprobarTablero(){
    if (tablero[0][0] == 'X' && tablero[0][1] == 'X' && tablero[0][2] == 'X' || tablero[0][0] == 'O' && tablero[0][1] == 'O' && tablero[0][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][0] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[1][0] == 'X' && tablero[1][1] == 'X' && tablero[1][2] == 'X' || tablero[1][0] == 'O' && tablero[1][1] == 'O' && tablero[1][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[1][0] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[2][0] == 'X' && tablero[2][1] == 'X' && tablero[2][2] == 'X' || tablero[2][0] == 'O' && tablero[2][1] == 'O' && tablero[2][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[2][0] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[0][0] == 'X' && tablero[1][0] == 'X' && tablero[2][0] == 'X' || tablero[0][0] == 'O' && tablero[1][0] == 'O' && tablero[2][0] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][0] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[0][1] == 'X' && tablero[1][1] == 'X' && tablero[2][1] == 'X' || tablero[0][1] == 'O' && tablero[1][1] == 'O' && tablero[2][1] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][1] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[0][2] == 'X' && tablero[1][2] == 'X' && tablero[2][2] == 'X' || tablero[0][2] == 'O' && tablero[1][2] == 'O' && tablero[2][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][2] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[0][0] == 'X' && tablero[1][1] == 'X' && tablero[2][2] == 'X' || tablero[0][0] == 'O' && tablero[1][1] == 'O' && tablero[2][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][0] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if (tablero[0][2] == 'X' && tablero[1][1] == 'X' && tablero[2][0] == 'X' || tablero[0][2] == 'O' && tablero[1][1] == 'O' && tablero[0][2] == 'O'){
        juegoFinalizado = true;
        if(tablero[0][2] == 'X'){
            ganador = 1;
        }
        else{
            ganador = 2;
        }
    }
    else if(turnosTranscurridos >= 9){
        juegoFinalizado = true;
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
    while(SesionEnProceso){
        for(int i = 1; i <= 2; i++){
            imprimirTablero();
            if(juegoFinalizado == false){
                turno(i);
                comprobarTablero();
            }
            else{
                mostrarGanador();
                SesionEnProceso = false;
            }
        }
    }
    return 0;
}