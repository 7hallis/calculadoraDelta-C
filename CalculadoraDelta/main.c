#include <stdio.h>
#include <stdlib.h>
#include <math.h>                                 //inclus�o da blibioteca par a fun��o (sqrt)
int main()
{
                                                //Variavel do tipo "REAL" porque o valor de Delta tem que ser REAL
    float a,b,c;                               //A,B e C da formula do Delta
    float Delta;                              // Valor do Delta
    float x1,x2,x,x3,x4;                     // Valor das duas raizes de Delta (Bhaskara)

                                            //Pergunta os numeros  inteiros
    printf("Digite o valor de A:");
    scanf("%f",&a);
                                          // Condi��o valor de A, n�o pode ser 0

{
            if (a!=0)
                {

                	printf ("");
                }
        	else
                {
                	printf ("Raiz nao existe");
                	exit(0); /* para a execu��o do programa, se ouver raiz ele continua a execu��o*/
                }
        }
                                        // Se valor de A for diferente de 0 a opera��o continua
    printf("Digite o valor de B:");
    scanf("%f",&b);
    printf("Digite o valor de C:");
    scanf("%f",&c);
                                      //C�lculo do Delta
    Delta=((b*b)-4*a*c);
                                     //Condi��o do Delta
    {
            if (Delta>=0)
                {

                	printf ("Valor de Delta: %2.f\n",Delta);
                }
        	else
                {
                	printf ("Raiz nao existe");
                	exit(0); /* para a execu��o do programa, se ouver raiz ele continua a execu��o*/
                }
        }



                              //C�lculo do Bhaskara

    x= sqrt(Delta);                         //Fun��o "SQRT" para tirar a raiz quadrada
    x1= 2*a;                               //O pera��o 2*A da formula
    x3= (-b+x)/x1;                        // -b+x da formula dividido pela multiplica��o
    printf("valor de X': %2.f\n",x3);    // "%2.f" limitador de casas n�mericas se for n�mero com virg�la ele arredonda
    x2=2*a;                             //O pera��o 2*A da formula
    x4=(-b-x)/x2;                      //-b-x da formula dividido pela multiplica��o
    printf("valor de X'': %2.f\n",x4);// "%2.f" limitador de casas n�mericas se for n�mero com virg�la ele arredonda

    return 0;
}
