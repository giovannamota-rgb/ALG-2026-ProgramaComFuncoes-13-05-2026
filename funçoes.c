#include <stdio.h>
#include <stdbool.h>

void calcularHorasMinutosSegundos(int segundosTotais) {
    int horas = segundosTotais / 3600;
    int resto = segundosTotais % 3600;
    int minutos = resto / 60;
    int segundos = resto % 60;
    printf("%d segundos equivalem a -> %02dh:%02dm:%02ds\n", segundosTotais, horas, minutos, segundos);
}

bool isPar(int numero) {
    return numero % 2 == 0;
}

bool isImpar(int numero) {
    return numero % 2 != 0;
}

float media(float num1, float num2) {
    return (num1 + num2) / 2.0;
}

double maior(double num1, double num2) {
    return (num1 > num2) ? num1 : num2;
}

double menor(double num1, double num2) {
    return (num1 < num2) ? num1 : num2;
}

int main() {
  int total_segundos, horas, minutos, segundos, resto; 
  int numero;
  float n1, n2, maior, menor, media;

  
  printf("Digite o tempo em segundos: ");
  scanf("%d", &total_segundos);
  
  horas = total_segundos / 3600;
  resto = total_segundos % 3600;
  minutos = resto / 60;
  segundos = resto % 60;
  
  printf("%d segundos equivalem a: %dh %dmin %ds\n", total_segundos, horas, minutos, segundos);
  
 
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O numero %d e PAR. Verdadeiro.\n", numero);
    } else {
        printf("O numero %d e IMPAR. Falso.\n", numero);
    }

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0) {
        printf("O numero %d e PAR. Falso.\n", numero);
    } else {
        printf("O numero %d e IMPAR. Verdadeiro.\n", numero);
    }

 printf("\nDigite dois numeros para calcular a media:\n");
    scanf("%f %f", &n1, &n2, media);

    media = (n1 + n2 ) / 2;

printf("O calculo da media e: %.2f\n", media );
   
    printf("\nDigite dois numeros:\n");
    scanf("%f %f", &n1, &n2, media);

    media = (n1 + n2 ) / 2;
   
    maior = n1; 
    if (n2 > maior) maior = n2;
    
    menor = n1;
    if (n2 < menor) menor = n2;
    
    printf("Maior numero: %.2f\n", maior);

   printf("\nDigite dois numeros:\n");
    scanf("%f %f", &n1, &n2, media);

    media = (n1 + n2 ) / 2;

    maior = n1; 
    if (n2 > maior) maior = n2;
    
    menor = n1;
    if (n2 < menor) menor = n2;
    
    printf("Menor numero: %.2f\n", menor);
  
  system("pause");  
   return 0;
   }
