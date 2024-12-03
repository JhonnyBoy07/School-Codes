#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <string.h>

void Clear_terminal(void)
{
    printf("\033[2J\033[1;1H"); // Sequência de ESC para limpar o terminal
}

void Init_terminal(void)
{
    SetConsoleOutputCP(65001); // Configura a Code Page de saida do terminal para UTF-8 para permitir acentos
    SetConsoleCP(65001);       // Configura a Code Page de  entrada do terminal para UTF-8 para permitir acentos
    Clear_terminal();
}


void drawTree(int height, int trunkHeight) {
    int width = height * 2 - 1;
    int spaces, stars;
    // Desenhar a parte verde da árvore
    for (int i = 0; i < height; i++) {
        spaces = height - i - 1;
        stars = width - 2 * spaces;
        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }
        for (int j = 0; j < stars; j++) {
            printf("\x1b[32m*");
        }
        printf("\n");
    }


    // Desenhar o tronco
    if (height < 10){
    for (int i = 0; i < trunkHeight; i++) {
        for (int j = 0; j < height - 1; j++) {
            printf(" ");
        }
        printf("\033[38;5;94m#\033[0m\n");
    }
        }    else 
    for (int i = 0; i < trunkHeight; i++) {
        for (int j = 0; j < height - 1; j++) {
            printf(" ");
        }
        printf("\033[38;5;94m###\033[0m\n");
}
}

int main() {
   
    SetConsoleOutputCP(65001); // Configura a Code Page de saida do terminal para UTF-8 para permitir acentos
    SetConsoleCP(65001);


    int height, trunkHeight;


    printf("Digite o número de linhas da parte verde da árvore: ");
    scanf("%d", &height);
    printf("Digite o comprimento do tronco: ");
    scanf("%d", &trunkHeight);


    drawTree(height, trunkHeight);


    return 0;
}


