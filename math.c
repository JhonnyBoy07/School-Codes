#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<math.h>
#include<string.h> 

void Clear_terminal(void) {
    printf("\033[2J\033[1;1H");
}
void Init_terminal(void) {

    SetConsoleOutputCP(65001); // Configura a Code Page de saida do terminal para UTF-8 para permitir acentos
    SetConsoleCP(65001);       // Configura a Code Page de  entrada do terminal para UTF-8 para permitir acentos
    Clear_terminal();  
}

//sum and product of the digits of a number
void alinea1(void) {
    char numStr[10];  // Max number of characters
    int sum = 0;  //by default, the number for an added number is 0, so it woun't change anything to add 0 more times
    int multiply = 1; //by default, the number for an multiplied number is 1, so it woun't change anything to multiply by 1 more times

    printf("Introduza o numero ");
    scanf("%s", numStr);

    // Calculate sum of digits
    for (int i = 0; numStr[i] != '\0'; i++) {
        sum += numStr[i] - '0';  
        multiply *= numStr[i] - '0'; 
    }

    printf("Soma dos digitos = %d \nProduto dos digitos = %d", sum, multiply);
}

//Checking your BMI using any weight and height.
void IMC (void) {
    float height, weight, IMC; 

    printf ("Introduza a sua altura em centimetros ");
    scanf("%f", &height);
    printf ("\nIntroduza o seu peso em Kg ");
    scanf("%f", &weight);

    height = height / 100; //convert to meters, for correct use of the formula.
    IMC = weight/(height*height); //BMI (IMC) is taken dividing the weight in kilograms for the square of the height, in meters

    printf("\nO seu IMC é %.1f\n\n", IMC);

    if (IMC < 18.5) {
        printf("Abaixo do peso\n");
    } else if (IMC >= 18.5 && IMC < 24.9) {
        printf("Peso normal\n");
    } else if (IMC >= 25 && IMC < 29.9) {
        printf("Acima do peso\n");
    } else {
        printf("Obesidade\n");
    }
}

//calculating images of a function defined by branches, each branch has a specific part of the domain.
void função (void) {
    float x, fx;

    printf ("A função f(x) é defininda por |x| para valores negativos, e pela raiz quadrada de x para valores maiores ou iguais a 0.\n\n Introduza o valor de x para o qual pertende calcular o valor da função.");
    scanf ("%f", &x);

    if (x<0) {
        fx = -1*x; //the absolute value function is defined by -x, in any x less than 0
        printf ("%.2f", fx);
    } else {
        fx = sqrt(x);
        printf ("%.2f", fx);
    }

}








int main() {
    Init_terminal();
    //alinea1();
    //IMC();
    função();


}