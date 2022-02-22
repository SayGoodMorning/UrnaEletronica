#include <stdio.h> 
#include <stdlib.h> 
#include <locale.h>
#include <string.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int senha,senha1,senha2, b, escolha, i=0, votantes=0,voto1,voto2,de,vw,pr,kf,dm,hp,ls,brancor,nulor,brancop,nulop;

do{
	printf("Insira a senha:\t");
    scanf("%d", &senha);
}while(senha!=1234);
    
    do{
system ("cls");
printf("\n \t\t ELEIÇÕES ESTUDANTIS");
printf("\n[1] Para DEFINIR QUANTIDADE DE VOTANTES.");
printf("\n[2] Para INICIAR VOTAÇÃO.");
printf("\n[3] Para CONTABILIZAR VOTOS.");
printf("\n[4] Para SAIR. ");
printf("\n\nEscolha uma opção : ");
scanf("%i", &escolha);
switch (escolha) {
      	
      	
		case 1:
system("cls");
do{
	printf("Insira a quantidade de pessoas que participarão da votação:\t");
	scanf("%d", &votantes);
if(votantes>30){
	printf("Numero de votantes registrado com SUCESSO!");
}
else {
	printf("O numero de votantes precisa ser superior a 30, tente novamente.");
}
}while(votantes<31);
break;

		case 2:
	system("cls");
if (votantes<31){
	printf("A quantidade de votantes ainda nao foi registrada, Você será redirecionado de volta para o painel inicial.\n");
}
else{
	printf("Daremos inicio a votação.\n\n");
	
	
for (i=0; i<votantes; i++){
	printf("Voto para REPRESENTANTE ESTUDANTIL:");
				printf("  --------------------------------    --------------------------------  \n");
                printf("|                                 | |                                  |\n");
                printf("|          SEU VOTO PARA          | |       JUSTICA ESTUDANTIL         |\n");
                printf("|          REPRESENTANTE          | |                                  |\n");
                printf("|                                 | |            1  2  3               |\n");
                printf("|                                 | |            4  5  6               |\n");
                printf("|            _ _ _ _ _            | |            7  8  9               |\n");
                printf("|                                 | |               0                  |\n");
                printf("|                                 | |                                  |\n");
                printf("|                                 | |                                  |\n");
                printf("|                                 | |   BRANCO   CORRIGE   CONFIRMA    |\n");
                printf("  --------------------------------    --------------------------------  \n");
                printf("VOTO: ");
	scanf("%i", &voto1);
	system("cls");
	if (voto1==12345){
		printf("Voto computado para David Else");
		de++;
	}else if(voto1==67890){
		printf("Voto computado para Vinicius While");
		vw++;
	}else if(voto1==98765){
		printf("Voto computado para Pollyana Return");
		pr++;
	}else if(voto1== 43210){
		printf("Voto computado para Karla Float");
		kf++;
	}else if (voto1==48444){
		printf("Voto computado para Dyego Main");
		dm++;
	}else if (voto1==00000){
		printf("Voto computado como Branco");
		brancor++;
	}else{
		printf("Voto computado como Nulo");
		nulor++;
}
					printf("  --------------------------------    --------------------------------  \n");
                printf("|                                 | |                                  |\n");
                printf("|          SEU VOTO PARA          | |       JUSTICA ESTUDANTIL         |\n");
                printf("|            PRESIDENTE           | |                                  |\n");
                printf("|                                 | |            1  2  3               |\n");
                printf("|                                 | |            4  5  6               |\n");
                printf("|            _ _ _ _ _            | |            7  8  9               |\n");
                printf("|                                 | |               0                  |\n");
                printf("|                                 | |                                  |\n");
                printf("|                                 | |                                  |\n");
                printf("|                                 | |   BRANCO   CORRIGE   CONFIRMA    |\n");
                printf("  --------------------------------    --------------------------------  \n");
                printf("VOTO: ");
	scanf("%i", &voto2);
	system("cls");
	
	if(voto2==04){
		printf("Voto computado para Hadija Printf");
		hp++;
	}else if( voto2== 8){
		printf("Voto computado para Lavínia Scanf");
		ls++;
	}else if (voto2==00){
		printf("Voto computado como branco");
		brancop++;
	}else{
		printf("Voto computado como nulo");
		nulop++;
}
printf("\n\n FIM\n");
system ("pause");
do{
	printf("\nInsira a senha:");
	scanf("%d", &senha2);
}while(senha2!=senha);
system("cls");
//for  
}
	
	
	
	
//else case2
}
break;

case 3:
	system("cls");
	printf("CONTABILIZAÇÃO DE VOTOS:");
		printf("====================================");
	printf("REPRESENTANTE ESTUDANTIL");
	printf("DAVID ELSE: %D", de);
	printf("VINICIUS WHILE: %D", vw);
	printf("POLLYANA RETURN: %D", pr);
	printf("KARLA FLOAT: %D", kf);
	printf("DYEGO MAIN: %D", dm);
	printf("Votos em BRANCO: %d", brancor);
	printf("Votos NULOS: %d", nulor);
	printf("Total de Votantes: %d", votantes);
		printf("====================================");
		
		

		printf("\n\n\n====================================");
	printf("PRESIDENTE DE GRÊMIO");
	printf("HADIJA PRINTF: %D", hp);
	printf("LAVÍNIA SCANF: %D", ls);
	printf("Votos em BRANCO: %D", brancop);
	printf("Votos NULOS: %D", nulop);

		printf("====================================");
		
		
		
	
break;
case 4:
	system ("cls");
	printf("ENCERRANDO APLICAÇÃO");
	
break;
}
}while(escolha!=4);
system("PAUSE");

	return(0);
}