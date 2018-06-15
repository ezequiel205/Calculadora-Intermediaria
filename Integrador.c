#include <windows.h>
#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#include<conio.h> 
#include<locale.h>
#define PI 3.14159265
#define limpar_tela system("cls")
 	
main () 
{     
system ("color f2");
float x,x0, y, y0, m, a, b, c, delta, x1, x2, px,coef[30];; 
int n,i,j;
char r[2];
int menu;
setlocale(LC_ALL, "Portuguese");
do{
	 for(i = 0; i < 20; i++) {
			          for(j = 0; j < 2000000; j++) {
			          }
			          printf("\t*");
			    }      
					printf("\n\t\t\t	MENU DE CÁLCULOS	\n\t\t");
   
			    for(i = 0; i < 20; i++) {
			          for(j = 0; j < 2000000; j++) {
			          }
			          printf("\t*");
			    }      
			    
			    
	printf("\n\n\n		Escolha a opção desejada (utilize somente números):	\n");
	//printf("\n		Atenção! Utilize somente números.	\n");	
	printf ("\n		[1] - Equação da reta reduzida"); 
	printf ("\n		[2] - Equação do segundo grau");
	printf ("\n		[3] - Equação de Polinomios");
	printf ("\n		[8] - Sobre nós (o grupo)");
	printf ("\n		[9] - Sair do Sistema\n");
	printf ("\n		Opção desejada: ");
	scanf("%d",&menu);
switch(menu){	
		case 1:
		limpar_tela;
		printf("EQUAÇÃO DA RETA REDUZIDA\n");
		printf("\nAtenção, utilize somente números.\n");
		printf("\nEntre com o valor de x: ");
		scanf("%f",&x);
		printf("Entre com o valor de x0: ");
		scanf("%f",&x0);
		printf("Entre com o valor de y: ");
		scanf("%f",&y);
		printf("Entre com o valor de y0: ");
		scanf("%f",&y0);

		m=(y0-y)/(x0-x);

		printf("\n O coeficiente angular da reta e:%.2f \n",m);
		getch ( );
		limpar_tela;
		break;
		
		case 2:
		limpar_tela;
		printf ("\t\t EQUAÇÃO DO SEGUNDO GRAU !\n"); 
 		printf("\n Atenção, utilize somente números. \n");
			printf ("\n\n\n Informe o valor de A: "); 
			scanf ("%f", &a); 
			printf ("Informe o valor de B: "); 
			scanf ("%f", &b); 
			printf ("Informe o valor de C: "); 
			scanf ("%f", &c); 
			if (a != 0){
			  delta=pow(b,2)-4*a*c;
				if (delta == 0){
						x1 = (-b + sqrt(delta))/(2*a);
						printf ("\n Delta e igual a: %.2f", delta); 
						printf ("\n\n X1 e X2 são = %.2f \n\n", x1); 
						break;
				} else {
					if (delta > 0){
						x1 = (-b + sqrt(delta))/(2*a);
						x2 = (-b - sqrt(delta))/(2*a);
							printf ("\n Delta e maior que: %.2f", delta); 
							printf ("\n\n X1= %.2f e X2= %.2f \n\n",x1 , x2);
							break;
							
				} else {
					printf ("\nDelta e menor que %.2f", delta); 
					printf ("\n\nNão existe Raiz Real !\n\n");
					getch ( );
			    	limpar_tela;
					break;
				}
				}
			}else {
			
					printf ("\nNão e uma equação do 2 grau\n"); 
					printf ("\n\n a tende a ser diferente de %2.f\n\n", a); 
					getch ( );
			    	limpar_tela;
					break;
			}
			case 3:
				limpar_tela;
				printf("\n\t\t\t    RESOLVENDO POLINOMIOS\n\t\t");
			    
			    printf(" \n\n\n\n- Digite o grau do polinomio: ");
			    scanf("%d", &n);
			    limpar_tela;
			    
			    printf("\n\t\t\t    RESOLVENDO POLINOMIOS\n\t\t");
			   
			    printf("\n\n\n");
			    
			    for(i = n; i >= 0; i--) {
			          printf("- Digite o coeficiente do tempo de grau %d:", i );
			          scanf("%f", &coef[i]);
			          }
			    limpar_tela;
			    
			    printf("\n\t\t\t    RESOLVENDO POLINOMIOS\n\t\t");
			    
			    printf("\n\n - Digite o valor de x: ");
			    scanf("%f", &x);
			    
			    px = coef[n];
			    
			    for(i = n; i > 0; i--) {
			          px = x * px + (coef[i - 1]);
			          }
			    limpar_tela;
			    
			    printf("\n\t\t\t    RESOLVENDO POLINOMIOS\n\t\t");
			    printf("\n\n  Polinomio p/ x = %.0f e igual a: %.2f", x, px);
			   
			    getch ( );
			    limpar_tela;
			    break;
			    
			case 8:
				 limpar_tela;
				for(i = 0; i < 20; i++) {
			          for(j = 0; j < 20; j++) {
			          }
			          printf("\t*");
			    }      
					printf("\n	Guilherme Vaufran Esteves   	  RA: 20161635\n");
					printf("\n	Gabriel Alves de Jesus        	  RA: 20161396\n");
					printf("\n	Ezequiel Santos de Almeira  	  RA: 20161590\n");
					printf("\n	Luiz Henrique Araujo Bars     	  RA: 20160212\n");
					printf("\n	Nataniel da Silva de Oliveira	  RA: 20161585\n");
   
			    for(i = 0; i < 20; i++) {
			          for(j = 0; j < 20; j++) {
			          }
			          printf("\t*\t");
			    }     
				
				getch();
				limpar_tela;
				break;
				
			case 9:   
 			limpar_tela;
			printf("\n\n\n\n \n Obrigado por utilizar nosso sistema ^.^ Até em breve ! \n\n\n\n"); 
			return 0;   
			break;
			
			default:
				limpar_tela;
				printf("\n\t	ATENÇÃO, OPÇÃO ESCOLHIDA INEXISTENTE ! TENTE NOVAMENTE ! \n");
				break;
			}
}while (menu);
system("pause");
return 0;
}
    

