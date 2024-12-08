#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<string.h> 


void Clear_terminal(void) {
    
    printf("\033[2J\033[1;1H"); // Sequência de ESC para limpar o terminal
}

/** 
 * Função para demonstrar o acesso simples a posições de um array de 6 elementos pré-inicializado com os valores 15, 25, 35, 45, 55, 55
 */
void exemplo1(void) {
int array[6] = { 15, 25, 35, 45, 55, 55 };  // array declaration and initialization

    printf("EXEMPLO1: Acesso simples a elementos de um array que foi inicializado com: { 15, 25, 35, 45, 55,55 }\r\n");
   
    // accessing element at index 1 i.e 2nd element
    printf("Elemento do array[1]: %d\r\n", array[1]);

    // accessing element at index 3 i.e 4th element
    printf("Elemento do array[3]: %d\r\n", array[3]);

    // accessing element at index 5 i.e 6th element
    printf("Elemento do array[5]: %d\r\n", array[5]);

    // accessing element at index 420, outside of array dimension 
    printf("Elemento do array[420]: %d\r\n", array[420]); 
    //colar a linha 52 da cópia.
    printf("   Nao se sabe qual  o valor! pois e uma posicao de memoria fora do array!\n");

}


void exemplo2(void) {
int array[7] = { 10, 20, 30, 40, 50, 60, 70 };  // array declaration and initialization

     printf("EXEMPLO2: Print dos elementos de um array em que o elemento n.2 (terceiro elemento) é modificado\r\n");

    array[2] = 100;


    printf("Elements in Array:\r\n");
    for (int i = 0; i < sizeof(array)/sizeof(int); i++) 
        printf("array[%d]=%d\r\n", i, array[i]);
    
}


void exemplo3(void) {
char array[6] = { 'G', 'e', 'e', 'k', 's', '\0' }; // creating array of character i.e. string

    printf("EXEMPLO3: Impressão de uma string caracter a caracter, utilizando um while\r\n");
    // printing string
    int i = 0;
    while (array[i]) {
        printf("%c", array[i++]);
    }
}   

void exemplo4(void) {
 int a[2][3] = { {10, 20, 30}, {40, 50, 60} }; // declaring and initializing 2d array

   printf("EXEMPLO4: Impressão de um array bdimensional inicializado com: {10, 20, 30}, {40, 50, 60}\r\n");

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}   

void exemplo5(void) {
    int numeros[5];
    int i;
    int ns;
    int n_lidos;


    printf("Introduza consecutivamente 5 numeros conforme indicado:");
    for (n_lidos = i = 0; i < 5; i++)
    {
        printf("\r\nIntroduza o numero: ");
        ns = scanf("%d", &numeros[i]);
        if (ns != 1)
            printf("erro");
        else
            n_lidos++;
    }


    if (n_lidos != 5)
    {
        printf("Erro");
        return;
    }


    printf("Numeros introduzidos, guardados no array \"numeros\": ");
    for (int i = 0; i < 5; i++)
        printf("%d ", numeros[i]);
    printf("\r\nNumeros declarados: %d ", n_lidos);
}

#define MAX_NUMEROS 50
void exemplo6(void) {
    float sum = 0.0;
    int n_numeros = 0;
    int ns;
    int n_lidos;
    int i;


    printf("Qual o numero de numeros que pretende calcular a media [MAX=%d]: ", MAX_NUMEROS);
    scanf("%d", &n_numeros);


        float numeros[n_numeros];


    printf("\r\nIntroduza agora os %d numeros, conforme pedido:", n_numeros);
    for (n_lidos=i = 0; i < n_numeros; i++)
    {
        printf("\r\nIntroduza o numero : ");
       ns=scanf("%f", &numeros[i]);
       if (ns != 1)
            printf("erro");
        else
            n_lidos++;
    }
    if (n_lidos != n_numeros)
    {
        printf("Erro");
        return;
    }
    for (int i = 0; i < n_numeros; i++)
        sum += numeros[i];


    printf("\r\nA media e igual a:%f\r\n", sum / n_numeros);


    printf("Numeros introduzidos, guardados no array \"numeros\": ");
    for (int i = 0; i < 5; i++)
        printf("%.2f ", numeros[i]);
    printf("\r\nNumeros declarados: %d ", n_lidos);
}

void exemplo7(void) {
    char string1[] = {'S', 'P', 'O', 'R', 'T', 'I', 'N', 'G', '\0'}; // Inicializção de uma string caracter a caraacter
    char string2[20] = {"SPORTING"};    // Inicializção de uma string utilizando "
    char caracter ='c';
    char string3[] = {" CAMPEÃO"};


    char s1[] = "Olá, mundo!";
    char s2[] = "Olá!";
    char s3[] = "Olá, Zé!";


    char origem[] = "Aprendendo C";
    char destino[50];


    printf("EXEMPLO DE UTILIZAÇÃO FUNÇÕES DA BIBLIOTECA \"string.h\":\r\n\r\n");


    // A função strlen retorna o tamanho da string, excluindo o caractere nulo '\0'.
    // Neste exemplo, calcula-se o tamanho de "Olá, mundo!" e imprime-se o seu valor.


    printf("Função \"strlen\": Tamanho da string: %s = %lu\n", s1, strlen(s1));


    // A função strcpy copia a string "origem" para "destino".
    //Após cópiar, ambas as strings são apresentadas.


    strcpy(destino, origem);
    printf("Função \"strcpy\":\r\n  String original: \"%s\"\\n  String copiada: \"%s\"\r\n", origem, destino);


    // A função strcat une a "string3" ao final da "string2".
    //O resultado é a união de ambas as strings.


    printf("Função \"strcat\":\r\n  Strings originais: \"%s\", \"%s\"");
    strcat(string2, string3);
    printf(" String concatenada: \"%s\"\r\n", string2);


     // A função strcmp compara duas strings por ordem alfabética e retorna:
    // 0 se forem iguais, um valor negativo se a primeira string for menor, e um valor positivo se for maior.


    printf("Função \"strcmp\":\r\n  Strings comparadas: s1=\"%s\", s2=\"%s\", s3=\"%s\"\r\n", s1, s2, s3);
    printf("  Comparação entre s1,s3 =%d\r\n", strcmp(s1, s3));
    printf("  Comparação entre s3,s1 =%d\r\n", strcmp(s3, s1));
    printf("  Comparação entre s1,s2 =%d\r\n", strcmp(s1, s2));
    printf("  Comparação entre s2,s1 =%d\r\n", strcmp(s2, s1));
    printf("  Comparação entre s2,s3 =%d\r\n", strcmp(s2, s3));
    printf("  Comparação entre s3,s2 =%d\r\n", strcmp(s3, s2));




 // A função strchr localiza a primeira ocorrência de um caractere específico dentro de uma string.
 // Se o caractere for encontrado, a função retorna a posição na memória onde ele está armazenado,
 //  Se o caractere não for encontrado, a função retorna NULL, indicando que o caractere não foi encontrado na string.


    printf("Função \"strchr\":\r\n  Procurando o caractere '%c' na string: \"%s\"\r\n", caracter, string2);
  if(strchr(string2, caracter) != NULL){
    printf("\nCaractere %c encontrado!\n", caracter);
    printf("String a partir dele: %s\n", strchr(string2, caracter));
  } else {
    printf("\nCaractere %c não encontrado!\n", caracter);
  }


   //A função strstr procura a primeira ocorrência de uma substring dentro de uma string.
  //Ela retorna a parte da string a partir da posição onde a substring é encontrada ou NULL se a substring não for localizada.


    printf("Função \"strstr\":\r\n  Procurando a substring \"%s\" em \"%s\"\r\n", string3, string2);
    if (strstr(string2, string3) != NULL) {
        printf("  Substring \"%s\" encontrada na string!\r\n", string3);
    } else {
        printf("  Substring \"%s\" não encontrada!\r\n", string3);
    }


    // A função memset preenche um bloco de memória com um valor específico.
    // Neste caso, define os primeiros 10 caracteres de string2 como 'X', e imprime a string resultante.
    printf("Função \"memset\":\r\n  Definindo os 10 primeiros caracteres de string2 para 'X'\r\n");
    memset(string2, 'X', 10);
    printf("  String após memset: \"%s\"\r\n", string2);
}

void exemplo8(void) {
char text_ascii[]={"\
    _             _       _     _                           \r\n\
   / \\   _ __ ___| |__   | |   (_)_ __  _   ___  __        \r\n\
  / _ \\ | '__/ __| '_ \\  | |   | | '_ \\| | | \\ \\/ /    \r\n\
 / ___ \\| | | (__| | | | | |___| | | | | |_| |>  <         \r\n\
/_/   \\_\\_|  \\___|_| |_| |_____|_|_| |_|\\__,_/_/\\_\\   \r\n\
"};                                                                                                                                                                                                     
                                                                                                    
char image_ascii[]={"\
....................................................................................................\r\n\
....................................................................................................\r\n\
..................................................=.................................................\r\n\
.................................................=+-................................................\r\n\
................................................-+++................................................\r\n\
................................................+++++...............................................\r\n\
...............................................++++++=..............................................\r\n\
..............................................=+++++++-.............................................\r\n\
.............................................:+++++++++:............................................\r\n\
............................................:+++++++++++:...........................................\r\n\
............................................++++++++++++=...........................................\r\n\
...........................................=+++++++++++++=..........................................\r\n\
..........................................-+++++++++++++++=.........................................\r\n\
.........................................-+++++++++++++++++-........................................\r\n\
........................................:+++++++++++++++++++........................................\r\n\
........................................+++++++++++++++++++++.......................................\r\n\
.......................................++++++++++++++++++++++=......................................\r\n\
.......................................:++++++++++++++++++++++=.....................................\r\n\
.....................................:...-+++++++++++++++++++++=....................................\r\n\
....................................-++=...-++++++++++++++++++++-...................................\r\n\
...................................-++++++-..-+++++++++++++++++++-..................................\r\n\
..................................:++++++++++=::++++++++++++++++++-.................................\r\n\
.................................:+++++++++++++++=+++++++++++++++++:................................\r\n\
................................:+++++++++++++++++++++++++++++++++++:...............................\r\n\
................................+++++++++++++++++++++++++++++++++++++:..............................\r\n\
...............................+++++++++++++++++++++++++++++++++++++++:.............................\r\n\
..............................+++++++++++++++++++++++++++++++++++++++++.............................\r\n\
.............................+++++++++++++++++++++++++++++++++++++++++++:...........................\r\n\
............................+++++++++++++++++++++++++++++++++++++++++++++...........................\r\n\
...........................=++++++++++++++++++++++++++++++++++++++++++++++..........................\r\n\
..........................+++++++++++++++++++++++++++++++++++++++++++++++++.........................\r\n\
.........................=+++++++++++++++++++++++++++++++++++++++++++++++++=........................\r\n\
........................=++++++++++++++++++++++=-:::-++++++++++++++++++++++++.......................\r\n\
.......................=+++++++++++++++++++++:.........-+++++++++++++++++++++=......................\r\n\
......................=++++++++++++++++++++-.............=++++++++++++++++++++=.....................\r\n\
.....................=++++++++++++++++++++-...............-++++++++++++++++++++=....................\r\n\
....................=++++++++++++++++++++-.................=++++++++++++++++++++=...................\r\n\
...................=++++++++++++++++++++=...................+++++++++++++++++++++=..................\r\n\
..................=+++++++++++++++++++++-...................-+++++++++++++++++++++=.................\r\n\
.................=++++++++++++++++++++++.....................++++++++++++++++++++++=................\r\n\
................=+++++++++++++++++++++++.....................+++++++++++++++-:-+++++=...............\r\n\
...............=++++++++++++++++++++++++.....................=+++++++++++++++++-..:=+=..............\r\n\
..............=+++++++++++++++++++++++++.....................=++++++++++++++++++++:.................\r\n\
.............=++++++++++++++++++++++++++.....................=++++++++++++++++++++++-...............\r\n\
............=+++++++++++++++++++++++++++:....................+++++++++++++++++++++++++=.............\r\n\
...........=++++++++++++++++++++++++=--:.....................:-==+++++++++++++++++++++++=:..........\r\n\
..........++++++++++++++++++++=:.....................................-++++++++++++++++++++-.........\r\n\
.........=+++++++++++++++=-:.............................................:-++++++++++++++++-........\r\n\
........=++++++++++++=:.......................................................-+++++++++++++=.......\r\n\
.......=+++++++++=:...............................................................-=+++++++++-......\r\n\
......=+++++++:.......................................................................-+++++++-.....\r\n\
.....+++++-:.............................................................................:=++++-....\r\n\
....=++-.....................................................................................=++-...\r\n\
...-:...........................................................................................--..\r\n\
....................................................................................................\r\n\
"};  

    printf("%s",text_ascii);                                                                                                
    printf("%s",image_ascii);                                                                                       
}

void exemplo9(void) {

    while(1) 
        printf("%d ", rand());
}

void exemplo10(void) {

    do{printf("%d ", rand());
    } while (1);
}

// Function prototypes
void Wait_user_press_a_key();
void exemplo1();
void exemplo2();
void exemplo3();
void exemplo4();
void exemplo5();
void exemplo6();
void exemplo7();
void exemplo8();
void exemplo9();
void exemplo10();

int main() {
int num;
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
    Wait_user_press_a_key(); 

    exemplo8();
    Wait_user_press_a_key();

printf ("Use 'while'(1) or 'do while'(2)", num);
scanf ("%d", &num);
if (num == 1){
    exemplo9();

} else 
 exemplo10();
}

// Function definitions
void Init_terminal() {
    printf("Terminal initialized.\n");
}

void Wait_user_press_a_key() {
    printf("Press Enter to continue...\n");
    getchar(); // Waits for the user to press Enter
}
