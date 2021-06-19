#include <stdio.h>
#include <stdlib.h>

void showGrid(char grid[]){
    for(int i = 0; i<9; i ++){
        if(i == 2 || i == 5){
            printf("%c\n", grid[i]);
        } else{
            printf("%c  ", grid[i]);
        }
    }
}

int checkWin(char grid[]){
    if(grid[0] == grid[1] && grid[1] == grid[2] || grid[3] == grid[4] && grid[4] == grid[5] || grid[6] == grid[7] && grid[7] == grid[8] || grid[0] == grid[3] && grid[3] == grid[6] || grid[1] == grid[4] && grid[4] == grid[7] || grid[2] == grid[5] && grid[5] == grid[8] || grid[0] == grid[4] && grid[4] == grid[8] || grid[2] == grid[4] && grid[4] == grid[6]){
        return 1;
    }
}