#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h> 


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




 // Função para demonstrar o acesso simples a posições de um array de 6 elementos pré-inicializado com os valores 15, 25, 35, 45, 55, 55
 
void exemplo1(void) {
int array[6] = { 15, 25, 35, 45, 55, 55 };  // array declaration and initialization

    printf("EXEMPLO1: Acesso simples a elementos de um array que foi inicializado com: { 15, 25, 35, 45, 55, 55}\r\n");
   
    // accessing element at index 1 i.e 2nd element
    printf("Elemento do array[1]: %d\r\n", array[1]);

    // accessing element at index 3 i.e 4th element
    printf("Elemento do array[3]: %d\r\n", array[3]);

    // accessing element at index 5 i.e 6th element
    printf("Elemento do array[5]: %d\r\n", array[5]);

    // accessing element at index 420, outside of array dimension 
    
    //existem dois resultados possiveis, aquele em que o comando é completamente ignorado, e aquele em que o comando é executado e nos é dado o valor 0, que não possui qualquer significado nesta situação.
}

//função para analisar um array de 10 posições e imprimir se cada um dos elementos é par ou impar
void exemplo2(void) {
int array[10] = { 10, 20, 25, 30, 33, 40, 50, 55, 60, 70 };  // array declaration and initialization

     printf("EXEMPLO2: Print dos elementos de um array dizendo se são pares ou impares.\r\n");

    printf("Elements in Array:\r\n");
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) //lê os elementos do array 1 a 1 até chegar à ultima posição do array.
    if (array[i]%2 == 0)    //se o valor do array for par
        printf("array[%d]=%d é par.\r\n", i, array[i]);
    else printf("array[%d]=%d é impar.\r\n", i, array[i]);
    
}

//função que imprime uma string caracter a caracter, utilizando for e break
void exemplo3(void) {
char array[6] = { 'G', 'e', 'e', 'k', 's', '\0' }; // creating array of character i.e. string

    printf("EXEMPLO3: Impressão de uma string caracter a caracter, utilizando for e break\r\n");
    // printing string
for (int i = 0; i < sizeof(array); i++) {
    if (i == sizeof(array)) 
        break;
        printf("%c", array[i]);
    }   
}

//função que cria um array bidimensional 3 por 2, imprimindo-o
void exemplo4(void) {
 int a[3][2] = { {10, 20}, {30, 40}, {50, 60} }; // declaring and initializing array

   printf("EXEMPLO4: Impressão de um array bidimensional inicializado com: {10, 20}, {30, 40}, {50,60}\r\n");

    for (int i = 0; i < 3; i++) {   // 3 linhas
        for (int j = 0; j < 2; j++) {   // 2 colunas
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}   


void exemplo5(void) {
int numeros[5]={10, 20, 30, 40, 50};


    printf("Introduza consecutivamente 5 números conforme indicado:");
    for (int i = 0; i < 5; i++) {
        printf("\r\nIntroduza o número %d: ");
        scanf("%d", &numeros[i]);
    }


    printf("Números introduzidos, guardados no array \"numeros\": ");
    for (int i = 0; i < 5; i++) 
        printf("%d ", numeros[i]);
    
}

#define MAX_NUMEROS 50
void exemplo6(void) {
float sum = 0.0;
float numeros[50];
int n_numeros=0;


    printf("Qual o número de numeros que pretende calcular a média [MAX=%d]: ");
    scanf("%d", &n_numeros);

    printf("\r\nIntroduza agora os %d números, conforme pedido:",n_numeros);
    for (int i = 0; i < n_numeros; i++) {
        printf("\r\nIntroduza o número %d: ");
        scanf("%f", &numeros[i]);
    }

    for (int i = 0; i < n_numeros; i++) 
        sum += numeros[i];
   
    printf("\r\nA média é igual a:%f\r\n",sum/n_numeros);

}

void exemplo7(void) {
char string1[]={'S','P','O','R','T','I','N','G','\0'}; // Inicializção de uma string caracter a caraacter
char string2[20]={"SPORTING"};                            //Inicializção de uma string utilizando "
char string3[]={" CAMPEÃO"};

char s1[] = "Olá, mundo!";
char s2[] = "Olá!";
char s3[] = "Olá, Zé!";

char origem[] = "Aprendendo C";
char destino[50];

    printf("EXEMPLO DE UTILIZAÇÃO FUNÇÕES DA BIBLIOTECA \"string.h\":\r\n\r\n");

    printf("Função \"strlen\": Tamanho da string: %s = %lu\n", s1, strlen(s1));
    
    strcpy(destino, origem);
    printf("Função \"strcpy\":\r\n  String original: \"%s\"\\n  String copiada: \"%s\"\r\n", origem, destino);
   
    printf("Função \"strcat\":\r\n  Strings originais: \"%s\", \"%s\"");
    strcat(string2,string3);
    printf(" String concatenada: \"%s\"\r\n", string2);

     printf("Função \"strcmp\":\r\n  Strings comparadas: s1=\"%s\", s2=\"%s\", s3=\"%s\"\r\n", s1,s2,s3);
     printf("  Comparação entre s1,s3 =%d\r\n", strcmp(s1,s3));
     printf("  Comparação entre s3,s1 =%d\r\n", strcmp(s3,s1));
     printf("  Comparação entre s1,s2 =%d\r\n", strcmp(s1,s2));
     printf("  Comparação entre s2,s1 =%d\r\n", strcmp(s2,s1));
     printf("  Comparação entre s2,s3 =%d\r\n", strcmp(s2,s3));
     printf("  Comparação entre s3,s2 =%d\r\n", strcmp(s3,s2));
       
}


void exemplo9(void) {
    
    for(;;) 
        printf("%d ", rand());

}

int main(int argc, char *argv[]) {

    Init_terminal();
    exemplo1(); 

    Wait_user_press_a_key();    
    exemplo2();

    Wait_user_press_a_key();    
    exemplo3();

    Wait_user_press_a_key();    
    exemplo4();

    Wait_user_press_a_key();    
    exemplo5();

    Wait_user_press_a_key();    
    exemplo6();

    Wait_user_press_a_key();    
    exemplo7();




}   


        

 
