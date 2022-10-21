#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#define tam 4
#define CIMA 119
#define ESQUERDA 97
#define DIREITA 100
#define BAIXO 115

void gotoxy(int x, int y) { 

  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void Numero_2(){
	gotoxy(19, 2);
	printf("%c%c%c%c \n", 220, 220, 220, 220);
	gotoxy(19, 3);
	printf("   %c   \n", 219);
	gotoxy(19, 4);
	printf("%c%c%c%c \n", 220, 220, 220, 219);
	gotoxy(19, 5);
	printf("%c      \n", 219);
	gotoxy(19, 6);
	printf("%c%c%c%c", 219, 220, 220, 220);
}
void Numero_0(){
	gotoxy(26, 3);
	printf("%c%c%c%c%c \n", 220, 220, 220, 220, 220);
	gotoxy(26, 4);
	printf("%c   %c \n", 219, 219);
	gotoxy(26, 5);
	printf("%c   %c \n", 219, 219);
	gotoxy(26, 6);
	printf("%c   %c \n", 219, 219);
	gotoxy(26, 7);
	printf("%c%c%c%c%c", 219, 220, 220, 220, 219);
}
void Numero_4(){
	gotoxy(34, 2);
	printf("%c   %c \n", 220, 220);
	gotoxy(34, 3);
	printf("%c   %c \n", 219, 219);
	gotoxy(34, 4);
	printf("%c%c%c%c%c \n", 219, 220, 220, 220, 219);
	gotoxy(34, 5);
	printf("    %c \n", 219);
	gotoxy(34, 6);
	printf("    %c", 219);
}
void Numero_8(){
	gotoxy(42, 3);
	printf("%c%c%c%c%c \n", 220, 220, 220, 220, 220);
	gotoxy(42, 4);
	printf("%c   %c \n", 219, 219);
	gotoxy(42, 5);
	printf("%c%c%c%c%c \n", 219, 220, 220, 220, 219);
	gotoxy(42, 6);
	printf("%c   %c \n", 219, 219);
	gotoxy(42, 7);
	printf("%c%c%c%c%c", 219, 220, 220, 220, 219);
}
void TelaVitoria() {
	
	system("cls");
	
	printf(" #W=+::::::::::::::::::::::::::::::::::+=W#                  \n");
	printf("=@...-++++++++++++++++++++++++++++++++-...@=                 \n");
	printf("#=..@#--------------------------------#@..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*           VOCE GANHOU          *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*            PARABENS!           *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..W*                                *W..=#                 \n");
	printf("#=..++++++++++++++++++++++++++++++++++++..=#                 \n");
	printf("#=........................................=#                 \n");
	printf("#=......+++++-.....................:+-....=#                 \n");
	printf("#=.....-W*-+W-...................#@+-*W*..=#                 \n");
	printf("#=..***=W+.:W=***...............:W:...*W..=#                 \n");
	printf("#=..W*.........*@-.........+=*-..*W#=@W:..=#                 \n");
	printf("#=..W@===:.:===@@-.......=W:.-#@-.........=#                 \n");
	printf("#=.....-W+.:W-...........@=...:W:.........=#                 \n");
	printf("#=.....-W@@@W-...........-#W@WW:..........=#                 \n");
	printf("#=........................................=#                 \n");
	printf("=@........................................=#                 \n");
	printf("-W=......................................+W+                 \n");
	printf(" *WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW*                   ");
	
}
void TelaMenu1() {
	int cont = 0;
	system ("cls");
	
	
	printf("%c", 201);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c\n", 187);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);

	
	cont = 0;
	printf("%c", 200);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c", 188);
	sleep(1);
	Numero_2();
	sleep(1);
	Numero_0();
	sleep(1);
	Numero_4();
	sleep(1);
	Numero_8();
	gotoxy(27, 14);
	sleep(0,7);
	printf("3-RANKING");
	gotoxy(27, 13);
	sleep(0,7);
	printf("2-JOGAR");
	gotoxy(27, 12);
	sleep(0,7);
	printf("1-CADASTRAR");
} 
void TelaRegistro() {
	system("cls");
	
	int cont = 0;
	
	printf("%c", 201);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c\n", 187);
	
	printf ("%c                       SEJA BEM VINDO(A)!                        %c\n", 186, 186);
	printf ("%c           CADASTRE-SE UTILIZANDO NOME, SENHA E CODIGO           %c\n", 186, 186);
	printf ("%c                                                                 %c\n", 186, 186);
	printf ("%c                                                                 %c\n", 186, 186);
	printf ("%c                            USUARIO                              %c\n", 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 201);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	
	printf("%c                 %c\n", 187, 186);
	printf("%c                %c                              %c                 %c\n", 186, 186, 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 200);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 188, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                             SENHA                               %c\n", 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 201);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 187, 186);
	
	
	printf("%c                %c                              %c                 %c\n", 186, 186, 186, 186);
	cont = 0;
	printf("%c                %c", 186, 200);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 188, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                             CODIGO                              %c\n", 186, 186);
	
		cont = 0;
	printf("%c                %c", 186, 201);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 187, 186);
	
	
	printf("%c                %c                              %c                 %c\n", 186, 186, 186, 186);
	cont = 0;
	printf("%c                %c", 186, 200);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 188, 186);
	printf("%c              digite o codigo utilizando 2 numeros               %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	
	cont = 0;
	printf("%c", 200);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c", 188);

}
void TelaConfirmacao() {
	system("cls");
	
	int cont = 0;
	
	printf("%c", 201);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c\n", 187);
	
	printf ("%c                      CONFIRME SEU REGISTRO!                     %c\n", 186, 186);
	printf ("%c           UTILIZE SENHA E CODIGO UTILIZADOS NO CADASTRO         %c\n", 186, 186);
	printf ("%c                                                                 %c\n", 186, 186);
	printf ("%c                                                                 %c\n", 186, 186);
	printf ("%c                       CODIGO DO USUARIO                         %c\n", 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 201);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	
	printf("%c                 %c\n", 187, 186);
	printf("%c                %c                              %c                 %c\n", 186, 186, 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 200);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 188, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                             SENHA                               %c\n", 186, 186);
	
	cont = 0;
	printf("%c                %c", 186, 201);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 187, 186);
	
	
	printf("%c                %c                              %c                 %c\n", 186, 186, 186, 186);
	cont = 0;
	printf("%c                %c", 186, 200);
	while(cont < 30) {
		printf("%c", 205);
		cont++;
	}
	printf("%c                 %c\n", 188, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	
	cont = 0;
	printf("%c", 200);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c", 188);
}
void TelaJogo() {
	int cont = 0;
	printf("%c", 201);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c\n", 187);
	
			
	printf("%c                 %c%c%c%c  %c%c%c%c%c  %c   %c  %c%c%c%c%c                       %c\n", 186, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 220, 186);
	printf("%c                    %c  %c   %c  %c   %c  %c   %c                       %c\n", 186, 219, 219, 219, 219, 219, 219, 219, 186);
	printf("%c                 %c%c%c%c  %C   %c  %c%c%c%c%c  %c%c%c%c%c                       %c\n", 186, 220, 220, 220, 219, 219, 219, 219, 220, 220, 220, 219, 219, 220, 220, 220, 219, 186);
	printf("%c                 %c     %c   %c      %c  %c   %c PONTOS:               %c\n", 186, 219, 219, 219, 219, 219, 219, 186);
	printf("%c                 %c%C%C%c  %c%c%c%c%c      %c  %c%c%c%c%c                       %c\n", 186, 219, 220, 220, 220, 219, 220, 220, 220, 219, 219, 219, 220, 220, 220, 219, 186);
	printf("%c                                                                 %c\n", 186, 186);
	cont = 0;
	printf("%c                %c", 186, 201);
	while (cont < 33) { //começo while para fazer a BORDA DE CIMA DA TELA DO JOGO
	printf("%c", 205); 
	cont++;
	}//FIM WHILE
	printf("%c              %c\n", 187, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c   W:CIMA       %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c   A:ESQUESDA   %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c   D:DIREITA    %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c\n", 186, 186, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 186, 186);
	printf("%c   S:BAIXO      %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c\n", 186, 186, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c              %c\n", 186, 186, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);	
	printf("%c                %c      %c        %c        %c        %c              %c\n", 186, 186, 186, 186, 186, 186, 186);
	
	
	cont = 0;;
	printf("%c                %c", 186, 200);
	while (cont < 33) { 
	printf("%c", 205);
	cont++; 
	}
	printf("%c              %c \n", 188, 186);
	 
	 
	cont = 0;
	printf("%c", 200);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c", 188);
}
typedef struct{
	int senha;
	char nome[50];
	int potuacao;
	int codigo;
}tipo_pessoa;
void TelaRank () {
	
	system("cls"); 
	
	int cont = 0;
	printf("%c", 201);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c\n", 187);
	printf("%c                                                                 %c\n", 186, 186);	
	printf("%c                RANKING DE MELHORES JOGADORES                    %c\n", 186, 186);
	printf("%c                        POR PONTUACAO                            %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                      1.                                         %c", 186,  186);
	printf("\n%c                      2.                                         %c", 186, 186);
	printf("\n%c                      3.                                         %c", 186, 186);
	printf("\n%c                      4.                                         %c", 186, 186);
	printf("\n%c                      5.                                         %c", 186, 186);
	printf("\n%c                      6.                                         %c", 186, 186);
	printf("\n%c                      7.                                         %c", 186, 186);
	printf("\n%c                      8.                                         %c", 186, 186);
	printf("\n%c                      9.                                         %c", 186, 186);
	printf("\n%c                      10.                                        %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n", 204,205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205,205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 205, 185);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	printf("%c                                                                 %c\n", 186, 186);
	

		
	cont = 0;
	printf("%c", 200);
	while(cont < 65) {
		printf("%c", 205);
		cont++;
	}
	printf("%c", 188);
}
void Instrucao(){
	printf("                   INSTRUCOES: \n");
	printf("UTILIZE AS TECLAS W, A, S, D PARA MOVIMENTAR OS NUMEROS \n");
	printf("W PARA CIMA, A PARA A ESQUERDA, S PARA BAIXO E D PARA A DIREITA!\n");
	printf("O OBJETIVO DO JOGO E CONSEGIUR SOMAR OS NUMEROS IGUAIS ATE ALCANSAR O NUMERO 2048\n");
	printf("BOA SORTE!!");
	getchar();
	
	
}
tipo_pessoa usuario[1];

main() {
	int loop = 0;
	int senha = 0;
	char codigo = 0;
	int cont = 0;
	int opcao = 0;
	int m[tam][tam];
	int l, c = 0;
	int tecla = 0;
	int coluna_sorteada = 0;
	int linha_sorteada = 0;
	
	while(opcao!=9){
		loop=0;
		
		TelaMenu1();
		opcao=0;
		gotoxy(24, 17);
		sleep(0,7);
		printf("Escolha uma opcao:");
		fflush(stdin);
		scanf("%i", &opcao);
	
		if(opcao == 1){
			TelaRegistro();
			gotoxy(18, 7);
			fflush(stdin);
			scanf("%s", &usuario[1].nome);
			gotoxy(18, 13);
			fflush(stdin);
			scanf("%i", &usuario[1].senha);
			gotoxy(18, 19);
			fflush(stdin);
			scanf("%i", &usuario[1].codigo);
			gotoxy(17, 23);
			sleep(1);
			printf("Voce foi registrado com sucesso!");
			sleep(0,7);
			gotoxy(17, 25);
			printf("Digite ENTER para voltar ao menu");
			getch();
		}
		
		if(opcao==3){
			TelaRank();
			gotoxy(25, 8);
			printf("%s: %i PONTOS", usuario[1].nome, usuario[1].potuacao);
			getch();
		}
		
		if(opcao == 2){
			do{
			TelaConfirmacao();
			gotoxy(18, 7);
			fflush(stdin);
			scanf("%i", &codigo);
			gotoxy(18, 15);
			fflush(stdin);
			scanf("%i", &senha);
			if((senha == usuario[1].senha) && (codigo == usuario[1].codigo)){
				gotoxy(23, 20);
				sleep(1);
				printf("LOGADO COM SUCESSO!!!");
				sleep(1);
				system("cls");
				sleep(1);
				Instrucao();
				getch();
				system("cls");
				TelaJogo();
	
				//percorre a matriz e joga 0 em todas as casas
				for(l=0; l<tam; l++){
					for(c=0; c<tam; c++){
						m[l][c]=0;
					}
				}
	
				//sorteia uma linha e uma coluna e coloca o numero dois para o jogo começar
				srand(time(NULL));
				linha_sorteada = rand() % 4;
				coluna_sorteada = rand() % 4;
				m[linha_sorteada][coluna_sorteada]=2;
				
				m[0][0]=1024;
				m[0][1]=1024;
				//percorre a matriz e printa ela 
				gotoxy(20, 9);
					printf("%i", m[0][0]);
					gotoxy(28, 9);
					printf("%i", m[0][1]);
					gotoxy(38, 9);
					printf("%i", m[0][2]);
					gotoxy(47, 9);
					printf("%i", m[0][3]);
					gotoxy(20, 13);
					printf("%i", m[1][0]);
					gotoxy(28, 13);
					printf("%i", m[1][1]);
					gotoxy(38, 13);
					printf("%i", m[1][2]);
					gotoxy(47, 13);
					printf("%i", m[1][3]);
					gotoxy(20, 17);
					printf("%i", m[2][0]);
					gotoxy(28, 17);
					printf("%i", m[2][1]);
					gotoxy(38, 17);
					printf("%i", m[2][2]);
					gotoxy(47, 17);
					printf("%i", m[2][3]);
					gotoxy(20, 21);
					printf("%i", m[3][0]);
					gotoxy(28, 21);
					printf("%i", m[3][1]);
					gotoxy(38, 21);
					printf("%i", m[3][2]);
					gotoxy(47, 21);
					printf("%i", m[3][3]);

				//enquanto a tecla for diferente de nove tudo que estiver dentro ficara em loop
				while(loop == 0){
					
					linha_sorteada = 0;
					coluna_sorteada = 0;
					//no começo de uma nova jogada sorteia uma linha e uma coluna nova e se for 0 coloca o numero 2
					srand(time(NULL));
					linha_sorteada = rand() % 3;
					coluna_sorteada = rand() % 3;
					if(m[linha_sorteada][coluna_sorteada]==0){
						m[linha_sorteada][coluna_sorteada]=2;
					}
					
					//limpa o buffer do teclado e pede outra direção
					fflush(stdin);
					tecla=getch();
		
					//SE A TECLA FOR IGUAL A 'D' VAI MOVER PARA A DIREITA:
					if(tecla == DIREITA){
						for(l=0; l<tam; l++){
							for(c=0; c<tam; c++){
								//SE A COLUNA FOR MENOR QUE 2 FAZ:
								if(c<2){
									//se a proxima coluna da matriz for igual a 0 a proxima recebe a anterior e a anterior recebe 0
									if(m[l][c+1]==0){
										m[l][c+1]=m[l][c];
										m[l][c]=0;
							
									}
									//se a proxima cluna da matriz for igual a anterior a proxima coluna recebe a sua soma com a anterior e a anterior recebe 0
									if(m[l][c]==m[l][c+1]){
										m[l][c+1]=m[l][c]+m[l][c+1];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
								//SE A COLUNA FOR IGUAL A 2 FAZ:
								if(c==2){
									//se a proxima coluna da matriz for igual a 0 a proxima recebe a anterior e a anterior recebe 0
									if(m[l][c+1]==0){
										m[l][c+1]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima coluna da matriz for IGUAL a anterior a proxima recebe a sua soma com a anterior e a anterior recebe 0
									if(m[l][c+1]==m[l][c]){
										m[l][c+1]=m[l][c]+m[l][c+1];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}	
							}				
						}
					}
					//SE A TECLA FOR IGUAL A 'A' VAI MOVEIR PARA A ESQUERDA
					if(tecla == ESQUERDA){
						for(l=3; l>=0; l--){
							for(c=3; c>=0; c--){
								//SE A COLUNA FOR MAIOR QUE 1 FAZ:
								if(c>1){
									//se a proxima coluna da matriz for igual a 0 a proxima recebe a anterior e a anterior recebe 0
									if(m[l][c-1]==0){
										m[l][c-1]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima matriz for igual a anterior a proxima recebe sua soma mais a anterior e a anterior recebe 0
									if(m[l][c]==m[l][c-1]){
										m[l][c-1]=m[l][c]+m[l][c-1];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
								//SE A COLUNA FOR IGUAL A 1 FAZ:
								if(c==1){
									//se a proxima coluna da matriz for igual a 0 a proxima recebe a anterior e a anerior recebe 0 
									if(m[l][c-1]==0){
										m[l][c-1]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima coluna da matriz for igual a anterior a proxima recebe sua soma com a anterior e a anterior recebe 0
									if(m[l][c-1]==m[l][c]){
										m[l][c-1]=m[l][c]+m[l][c-1];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
							}
						}
					}
					//SE A FOR IGUAL A 'S' VAI MOVER PARA BAIXO
					if(tecla == BAIXO){
						for(l=0; l<tam; l++){
							for(c=0; c<tam; c++){
								//SE A LINHA FOR MENOR QUE 2 FAZ:
								if(l<2){
									//se a proxima linha for igual a 0 a proxima inha recebe a anterior e a anteroir recebe 0
									if(m[l+1][c]==0){
										m[l+1][c]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima linha for igual a linha anterior a proxima linha recebe a sua soma com a anterior e a anterior recebe 0
									if(m[l][c]==m[l+1][c]){
										m[l+1][c]=m[l][c]+m[l+1][c];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
								//SE A LINHA FOR IGUAL A 2 FAZ:
								if(l==2){
									//se a proxima linha for igual a 0 a proxima linha recebe a anterior e a anterior recebe 0
									if(m[l+1][c]==0){
										m[l+1][c]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima linha for igual a anterior a proxima linha recebe sua soma com a anteroir e a anterior recebe 0
									if(m[l][c]==m[l+1][c]){
										m[l+1][c]=m[l][c]+m[l+1][c];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
							}
						}			
					}
					//SE A TECLA FOR IGUAL A 'W' VAI MOVER PARA CIMA
					if(tecla == CIMA){
						for(l=3; l>0; l--){
							for(c=3; c>0; c--){
								if(l>1){
									//se a proxima linha da matriz for igual a 0 a proxima recebe a anterior e a anterior recebe 0
									if(m[l-1][c]==0){
										m[l-1][c]=m[l][c];
										m[l][c]=0;
									}
									//se a proxima linha da matriz for igual a anterior a proxima recebe sua soma mais a anterior e a anterior recebe 0
									if(m[l-1][c]==m[l][c]){
										m[l-1][c]=m[l][c]+m[l-1][c];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
								if(l==1){
									if(m[l-1][c]==0){
										m[l-1][c]=m[l][c];
										m[l][c]=0;
									}
									if(m[l-1][c]==m[l][c]){
										m[l-1][c]=m[l][c]+m[l-1][c];
										m[l][c]=0;
										usuario[1].potuacao = usuario[1].potuacao + 1;
									}
								}
							}
						}
					}
				
					//printa a matriz depois da jogada
					system("cls");
					TelaJogo();
					gotoxy(20, 9);
					printf("%i", m[0][0]);
					gotoxy(28, 9);
					printf("%i", m[0][1]);
					gotoxy(38, 9);
					printf("%i", m[0][2]);
					gotoxy(47, 9);
					printf("%i", m[0][3]);
					gotoxy(20, 13);
					printf("%i", m[1][0]);
					gotoxy(28, 13);
					printf("%i", m[1][1]);
					gotoxy(38, 13);
					printf("%i", m[1][2]);
					gotoxy(47, 13);
					printf("%i", m[1][3]);
					gotoxy(20, 17);
					printf("%i", m[2][0]);
					gotoxy(28, 17);
					printf("%i", m[2][1]);
					gotoxy(38, 17);
					printf("%i", m[2][2]);
					gotoxy(47, 17);
					printf("%i", m[2][3]);
					gotoxy(20, 21);
					printf("%i", m[3][0]);
					gotoxy(28, 21);
					printf("%i", m[3][1]);
					gotoxy(38, 21);
					printf("%i", m[3][2]);
					gotoxy(47, 21);
					printf("%i", m[3][3]);
					gotoxy(46, 5);
					printf("%i", usuario[1].potuacao);
					gotoxy(1, 22);
					printf("usuario logado:");
					gotoxy(1, 23);
					printf("%s", usuario[1].nome);
			
					//percorre a matriz e ve se tem o numero 2048 se tiver mostra a tela de ganhador
					for(l=0; l<tam; l++){
						for(c=0; c<tam; c++){
							if(m[l][c]==2048){
								TelaVitoria();
								getchar();
								loop++;
							}
						}
					}
				}
			}
			else{
				gotoxy(23, 17);
				sleep(0,7);
				printf("CADASTRO ERRADO!!!");
				gotoxy(15, 19);
				sleep(0,7);
				printf("Para voltar para o menu digite ENTER");
				getch();
			}
		}while(loop == 0);
		loop--;
		}
	}
	getch();
}
		

