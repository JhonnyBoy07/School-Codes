#include<stdio.h>
#include <conio.h>
#include <windows.h>



void Clear_terminal(void) {
    
    printf("\033[2J\033[1;1H"); // Sequência de ESC para limpar o terminal
}


void Init_terminal(void) {

    SetConsoleOutputCP(65001); // Configura a Code Page de saida do terminal para UTF-8 para permitir acentos
    SetConsoleCP(65001);       // Configura a Code Page de  entrada do terminal para UTF-8 para permitir acentos
    Clear_terminal();  
}


void Wait_user_press_a_key(void) {
    
    printf("\r\nPrima uma tecla para o próximo exemplo!\r\n");
    while (kbhit()==0);
    while (kbhit()!=0)
        getch();

    Clear_terminal();
}


int main(int argc, char *argv[]) {
int n;

    Init_terminal();
 //exemplo para mostrar os numeros pares de 10 a 30 usando while.
    printf("Exemplo1: \"while\" - Mostra os números pares de 10 a 30:\r\n\r\n");
    n=10;  //começa a contagem no numero 10
    while(n<=30) {  
        if (n%2!=1)  //para os nº até 30, apresentar os que sejam divisiveis por 2, ou seja, pares.
        printf("%d\r\n",n);
        n++;
    }

    Wait_user_press_a_key();
//exemplo para mostrar numeros impares e divisiveis por 3 de 20 a 40, usando 'do while'.    
    printf("Exemplo2: \"do while\" - Mostra os números impares divisiveis por 3 de 20 a 40:\r\n\r\n");
    n=20;  //começa a contagem no numero 20
    do {
        if (n%3==0 && n%2!=0)  //se o nº for divisivel por 3 e impar
        printf("%d\r\n",n);
        n++;
    } while(n<=40);   //até ao 40
    
    Wait_user_press_a_key();
//exemplo para mostrar os multiplos de 4 de 20 a 40 usando for.   
    printf("Exemplo3: \"for\" - Mostra os números divisiveis por 4 de 20 a 40:\r\n\r\n");
    for (n=20; n<=40; n++) {  //partindo de 20 e adicionando 1 até chegar a 40
        if (n==20)
            printf("n=%d -> é melhor perguntar à prof. de matemática...\r\n\r\n",n);
        if ((n&0b11)==0) //multiplo de 4
            printf("n=%d -> é multiplo de 4\r\n",n);
    }

    Wait_user_press_a_key();
//exemplo para mostrar os numeros de 2 em 2 de 50 a 65 e parando em 62 usando for.
    printf("Exemplo4: \"break for\" - Mostra os números 50 a 65, de 2 em 2, dentro de um \"for\" de 50 a 65:\r\n\r\n");
    for (n=50; n<65; n=n+2) {  //partindo de 50 e adicionando 2 até chegar a 65
        if (n==62)
            break;  //parar ao chegar a 62
        else 
            printf("n=%d\r\n",n);
    }     

    Wait_user_press_a_key();   
//exemplo para mostrar os numeros de 3 de 30 a 50, saltando os multiplos de 3.
    printf("Exemplo5: \"continue for\" - Mostra os números não multiplos de 3 de 30 a 50:\r\n\r\n");
    for (n=30; n<=50; n++) {  //partindo do nº30 e adicionando 1 até chegar a 50
        if (n%3==0)  
            continue;    //saltar multiplos de 3
        printf("n=%d -> não é multiplo de 3\r\n",n);
    }

}
