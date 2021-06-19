#include <stdio.h>
#include <stdlib.h>
#include "game.h"

int main(){
    int turns = 0;
    char grid[] = {
                    '1', '2', '3', 
                    '4', '5', '6', 
                    '7', '8', '9'};
    
    system("cls");
    showGrid(grid);

    while(1==1){
        int pos;
        if(turns % 2 == 0){

            printf("\nIn what position do you want to put the X? ");
            scanf("%d", &pos);
            grid[pos-1] = 'X';

        } else{
            
            printf("\nIn what position do you want to put the O? ");
            scanf("%d", &pos);
            grid[pos-1] = 'O';

        }

        if(checkWin(grid) == 1){
            system("cls");
            showGrid(grid);
            printf("\nTEMOS UM VENCEDOR");
            break;
        }

        if(turns == 8){
            system("cls");
            showGrid(grid);
            printf("\nEMPATE");
            char grid[] = {
                    '1', '2', '3', 
                    '4', '5', '6', 
                    '7', '8', '9'};
            break;
        }

        system("cls");
        showGrid(grid);
        turns++;
    }

    return 0;
}


