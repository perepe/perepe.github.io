#include<stdio.h>
#include<conio.h>
int o1x,o2x,o3x,o4x,o5x,o6x,o7x,o8x,o9x,o10x,o11x,o12x,o13x,o14x,o15x,o16x,o17x,o18x,o19x,o20x,o21x,o22x,o23x,o24x,o25x,o26x;
int o1y,o2y,o3y,o4y,o5y,o6y,o7y,o8y,o9y,o10y,o11y,o12y,o13y,o14y,o15y,o16y,o17y,o18y,o19y,o20y,o21y,o22y,o23y,o24y,o25y,o26y;

int o27x,o28x,o29x,o30x,o31x,o32x,o33x,o34x,o35x,o36x,o37x,o38x,o39x,o40x,o41x,o42x,o43x,o44x,o45x,o46x,o47x,o48x,o49x,o50x;
int o27y,o28y,o29y,o30y,o31y,o32y,o33y,o34y,o35y,o36y,o37y,o38y,o39y,o40y,o41y,o42y,o43y,o44y,o45y,o46y,o47y,o48y,o49y,o50y;

int mx,my,rdx,rdy,px,py,tx,ty,cx,cy,c2x,c2y,p2x,p2y,p,pmax;
int d,d2,g,gx,gy,pantallax,pantallay,qx,qy,increment,dist;
char ull,cosb,menjar,menjar2;
void main() {

ull='*'; cosb='o'; menjar='*'; menjar2='O';
pantallax=125; pantallay=33; increment=10; dist=1;
rdx=1; rdy=1; mx=32+((pantallax-62)/2); my=10+6; p2x=2+((pantallax-62)/2); p2y=6; px=5+((pantallax-62)/2); py=6; 
cx=4+((pantallax-62)/2); cy=6; c2x=3+((pantallax-62)/2); c2y=6; tx=1+((pantallax-62)/2); ty=6; d=7; p=0; pmax=0; d2=4;
while(d!=0){
	 
	 if(d==7){      
		   while(d!=1&&d!=4){
			clrscr();
			gotoxy((pantallax/2) - 16,2);
			printf("         -------------         ");
			gotoxy((pantallax/2) - 16,3);
			printf("        |  S N A K E  |        ");
			gotoxy((pantallax/2) - 16,4);
			printf("         -------------         ");
			gotoxy((pantallax/2) - 16,7);
			printf("   oooo  oooo  oooo  oooo  oo*<");
			gotoxy((pantallax/2) - 16,8);
			printf("   o  o  o  o  o  o  o  o  o   ");
			gotoxy((pantallax/2) - 16,9);
			printf("oooo  oooo  oooo  oooo  oooo   ");
			gotoxy(pantallax - 21,pantallay);
			printf("made by Pere Rajadell");
			gotoxy((pantallax/2) - 8,11);
			printf("1. Jugar");
			gotoxy((pantallax/2) - 8,12);
			printf("2. Opcions");
			gotoxy((pantallax/2) - 8,13);
			printf("3. Instruccions");
			gotoxy((pantallax/2) - 8,14);
			printf("4. Sortir");
			gotoxy((pantallax/2) - 18,17);
			printf("Introdueix una opcio  per continuar:");
			gotoxy((pantallax/2) - 1,18);
			scanf("%d",&d);
		    switch(d){
			  case 1:break;
			  case 2:
				while(d!=5){
			      clrscr();
			      gotoxy((pantallax/2) - 4,2);
				  printf("OPCIONS");
			      gotoxy((pantallax/2) - 14,4);
			      printf("1. Tamany de la pantalla");
			      gotoxy((pantallax/2) - 14,5);
			      printf("2. Increment de la puntuacio");
			      gotoxy((pantallax/2) - 14,6);
			      printf("3. Velocitat snake");
			      gotoxy((pantallax/2) - 14,7);
			      printf("4. Forma snake");
			      gotoxy((pantallax/2) - 14,8);
			      printf("5. Tornar enrere");
				  gotoxy((pantallax/2)-1,9);
			      scanf("%d",&d);
			      switch(d){
			        case 1:
					   while(d!=5){
					       clrscr();
						   gotoxy((pantallax/2)-9,2);
						   printf("TAMANY DE LA PANTALLA");
						   gotoxy((pantallax/2)-42,4);
					       printf("Aqui pots ajustar el tamany de la pantalla per tal de que el joc quedi ben centrat en");
						   gotoxy((pantallax/2)-42,5);
						   printf("teu monitor. El tamany actual es %dx per %dy.",pantallax,pantallay);
						   gotoxy((pantallax/2)-42,7);
					       printf("Per introduir els valors directament, introdueix 0. Per a ajustar el tamany manualment,");
						   gotoxy((pantallax/2)-42,8);
						   printf("introdueix 1,2,3 i 4 fins que el dibuix quedi a l'extrem inferior dret de la pantalla.");
						   gotoxy((pantallax/2)-42,10);
					       printf("Introdueix 5 per a tornar enrere.\n");
			               gotoxy(pantallax - 9,pantallay - 5); printf("    ^    |");
			               gotoxy(pantallax - 9,pantallay - 4); printf("    2    |");
			               gotoxy(pantallax - 9,pantallay - 3); printf("< 1   3 >|");
			               gotoxy(pantallax - 9,pantallay - 2); printf("    4    |");
			               gotoxy(pantallax - 9,pantallay - 1); printf("    v    |");
			               gotoxy(pantallax - 9,pantallay);     printf("---------*");
						   gotoxy(pantallax/2,11);
						   scanf("%d",&d);
					       if(d==0){
						    gotoxy((pantallax/2)-9,12);
							printf("Amplada <X> ? ");
						    scanf("%d",&pantallax);
						    gotoxy((pantallax/2)-9,13);
						    printf("Altura <Y> ? ");
						    scanf("%d",&pantallay);
							}
						   switch(d){
						        case 1: pantallax=pantallax-1;break;
								case 2: pantallay=pantallay-1;break;
								case 3: pantallax=pantallax+1;break;
								case 4: pantallay=pantallay+1;break;
					            }
					       }
					      d=6;
					      break;
					  case 2:
					      while(d!=5){
						  clrscr();
						  gotoxy((pantallax/2) - 12,2);
						  printf("INCREMENT DE LA PUNTUACIO");
						  gotoxy((pantallax/2) - 40,4);
						  printf("Aqui pots ajustar els punts que augmenten en el marcador al augmentar la longitud.");
						  gotoxy((pantallax/2) - 40,5);
						  printf("Introdueix un increment diferent a 5 o 5 per a tornar enrere. L'increment actual es: %d"
						  ,increment);
						  gotoxy((pantallax/2) - 1,6);
						  scanf("%d",&d);
						  if(d!=5){
						    increment=d;
					          }
							  }
						  d=6;
						  break;
					  case 3:
					      while(d!=5){
						  clrscr();
						  gotoxy((pantallax/2) - 8,2);
						  printf("VELOCITAT SNAKE");
						  gotoxy((pantallax/2) - 45,4);
						  printf("Aqui pots ajustar la distancia que recorre la snake en cada moviment.");
						  gotoxy((pantallax/2) - 45,5);
						  printf("Tingues en compte que si canvies aquest valor pot ser que no es pugui assolir");
						  gotoxy((pantallax/2) - 45,6);
						  printf("algun objectiu.");
						  gotoxy((pantallax/2) - 45,7);
						  printf("Introdueix una distancia diferent a 5 o 5 per a tornar enrere. La distancia actual es: %d"
						  ,dist);
						  gotoxy((pantallax/2) - 1,8);
						  scanf("%d",&d);
						  if(d!=5){
						    dist=d;
							}
						  }
						  d=6;
						  break;
					  case 4:
					  while(d!=5){
					  clrscr();
					  gotoxy((pantallax/2)-6,2);
					  printf("FORMA SNAKE");
					  gotoxy((pantallax/2)-42,4);
					  printf("Aqui pots canviar l'aspecte de les diferents parts del cos de la snake.");
					  gotoxy((pantallax/2)-42,5);
					  printf("Per a fer-ho, introdueix la opcio que vols canviar i, a continuacio, un caracter.");
					  gotoxy((pantallax/2)-42,6);
					  printf("Alerta, si introdueixes una cosa que no sigui un caracter el programa petara!");
					  gotoxy((pantallax/2)-42,8);
					  printf("Snake actual: %c%c%c%c<   %c",cosb,cosb,cosb,ull,menjar);
					  gotoxy((pantallax/2)-42,9);
					  printf("                     %c%c%c%c<",cosb,menjar2,cosb,ull);
					  gotoxy((pantallax/2)-9,11);
					  printf("1. Ull:       ");
					  gotoxy((pantallax/2)-9,12);
					  printf("2. Cos:       ");
					  gotoxy((pantallax/2)-9,13);
					  printf("3. Menjar:    ");
					  gotoxy((pantallax/2)-9,14);
					  printf("4. Digestio:  ");
					  gotoxy((pantallax/2)-9,15);
					  printf("5. Tornar enrere:");
					  gotoxy((pantallax/2)-9,17);
					  printf(" >>Opcio: ");
					  scanf("%d",&d);
					  switch(d){
					    case 1:
					      gotoxy((pantallax/2)+8,11);
						  fflushnou();scanf("%c",&ull);
						break;
						case 2:
					      gotoxy((pantallax/2)+8,12);
					      fflushnou();scanf("%c",&cosb);
						break;
						case 3:
					      gotoxy((pantallax/2)+8,13);
					      fflushnou();scanf("%c",&menjar);
						break;
						case 4:
					      gotoxy((pantallax/2)+8,14);
					      fflushnou();scanf("%c",&menjar2);
						break;
						case 5:
						break;
					    } 
					  }
					  d=6;
					  break;
					  case 5:
					  break;
					  
					  }
				}break;
			case 3:
			clrscr();
			gotoxy((pantallax/2)-6,2);
			printf("INSTRUCCIONS");
			gotoxy((pantallax/2)-50,4);
			printf("Aquest videojoc consisteix en moure una serp per la pantalla i fer que passi per sobre del simbol *");
			gotoxy((pantallax/2)-50,5);
			printf("per a sumar punts, pero alerta, com mes punts, mes llarga es la serp i mes dificil es no quedarse");
			gotoxy((pantallax/2)-50,6);
			printf("encallat.");
			gotoxy((pantallax/2)-50,8);
			printf("Els moviments possibles son:");
			gotoxy((pantallax/2)-24,11);
			printf("                   2: Amunt                 ");
			gotoxy((pantallax/2)-24,13);
            printf("                       V                    ");
			gotoxy((pantallax/2)-24,14);
            printf("                       %c                    ",ull);
			gotoxy((pantallax/2)-24,15);
            printf("                       %c                    ",cosb);
			gotoxy((pantallax/2)-24,16);
            printf("                       %c                    ",cosb);
			gotoxy((pantallax/2)-24,17);
            printf("1: Esquerra  >%c%c%c%c           %c%c%c%c<  3: Dreta",ull,cosb,cosb,cosb,cosb,cosb,cosb,ull);
			gotoxy((pantallax/2)-24,18);
            printf("                       %c                    ",cosb);
			gotoxy((pantallax/2)-24,19);
            printf("                       %c                    ",cosb);
			gotoxy((pantallax/2)-24,20);
            printf("                       %c                    ",ull);
			gotoxy((pantallax/2)-24,21);
            printf("                       ^                    ");
			gotoxy((pantallax/2)-24,23);
            printf("                    4: Avall                ");
			gotoxy((pantallax/2)-18,25);
			printf("Introdueix un 5 per a tornar enrere.");
			gotoxy((pantallax/2-1),26);
			scanf("%d",&d);
			break;
			case 4:break;
		}
	}
	if(d==4){d=0;}
  clrscr();
  }
 if(
   (px==o1x&&py==o1y)||
   (px==o2x&&py==o2y)||
   (px==o3x&&py==o3y)||
   (px==o4x&&py==o4y)||
   (px==o5x&&py==o5y)||
   (px==o6x&&py==o6y)||
   (px==o7x&&py==o7y)||
   (px==o8x&&py==o8y)||
   (px==o9x&&py==o9y)||
   (px==o10x&&py==o10y)||
   (px==o11x&&py==o11y)||
   (px==o12x&&py==o12y)||
   (px==o13x&&py==o13y)||
   (px==o14x&&py==o14y)||
   (px==o15x&&py==o15y)||
   (px==o16x&&py==o16y)||
   (px==o17x&&py==o17y)||
   (px==o18x&&py==o18y)||
   (px==o19x&&py==o19y)||
   (px==o20x&&py==o20y)||
   (px==o21x&&py==o21y)||
   (px==o22x&&py==o22y)||
   (px==o23x&&py==o23y)||
   (px==o24x&&py==o24y)||
   (px==o25x&&py==o25y)||
   (px==o26x&&py==o26y)||
   (px==o27x&&py==o27y)||
   (px==o28x&&py==o28y)||
   (px==o29x&&py==o29y)||
   (px==o30x&&py==o30y)||
   (px==o31x&&py==o31y)||
   (px==o32x&&py==o32y)||
   (px==o33x&&py==o33y)||
   (px==o34x&&py==o34y)||
   (px==o35x&&py==o35y)||
   (px==o36x&&py==o36y)||
   (px==o37x&&py==o37y)||
   (px==o38x&&py==o38y)||
   (px==o39x&&py==o39y)||
   (px==o40x&&py==o40y)||
   (px==o41x&&py==o41y)||
   (px==o42x&&py==o42y)||
   (px==o43x&&py==o43y)||
   (px==o44x&&py==o44y)||
   (px==o45x&&py==o45y)||
   (px==o46x&&py==o46y)||
   (px==o47x&&py==o47y)||
   (px==o48x&&py==o48y)||
   (px==o49x&&py==o49y)||
   (px==o50x&&py==o50y)){
 if(p>=increment){
 clrscr();
 gotoxy((pantallax/2)-6,2);
 printf(" GAME OVER  ");
 gotoxy((pantallax/2)-6,4);
 printf("1. Continuar");
 gotoxy((pantallax/2)-6,5);
 printf("2. Menu     ");
 gotoxy((pantallax/2)-6,6);
 printf("3. Sortir   ");
 gotoxy((pantallax/2)-1,7);
 scanf("%d",&d);
 clrscr();
 switch(d){
    case 1:if(p>pmax){pmax=p;}p=0;d=6;break;
	case 2:if(p>pmax){pmax=p;}p=0;d=7;break;
	case 3:d=0;break;
	      }
 }
 }
		
 if(px<=(pantallax/2)-32){px=(pantallax/2)-29;}
 if(cx<=(pantallax/2)-32){cx=(pantallax/2)-30;}
 if(c2x<=(pantallax/2)-32){c2x=(pantallax/2)-31;}
 if(d!=0){
	 gotoxy((pantallax/2)-5,2);
	 printf("SNAKE v1.0");
	 gotoxy((pantallax/2)-32,5);
	 printf(" --------------------------------------------------------------- ");
	 gotoxy((pantallax/2)-32,6);
	 printf("|");
	 gotoxy((pantallax/2)-32,7);
	 printf("|");
	 gotoxy((pantallax/2)-32,8);
	 printf("|");
	 gotoxy((pantallax/2)-32,9);
	 printf("|");
	 gotoxy((pantallax/2)-32,10);
	 printf("|");
	 gotoxy((pantallax/2)-32,11);
	 printf("|");
	 gotoxy((pantallax/2)-32,12);
	 printf("|");
	 gotoxy((pantallax/2)-32,13);
	 printf("|");
	 gotoxy((pantallax/2)-32,14);
	 printf("|");
	 gotoxy((pantallax/2)-32,15);
	 printf("|");
	 gotoxy((pantallax/2)-32,16);
	 printf("|");
	 gotoxy((pantallax/2)-32,17);
	 printf("|");
	 gotoxy((pantallax/2)-32,18);
	 printf("|");
	 gotoxy((pantallax/2)-32,19);
	 printf("|");
	 gotoxy((pantallax/2)-32,20);
	 printf("|");
	 gotoxy((pantallax/2)-32,21);
	 printf("|");
	 gotoxy((pantallax/2)-32,22);
	 printf("|");
	 gotoxy((pantallax/2)-32,23);
	 printf("|");
	 gotoxy((pantallax/2)-32,24);
	 printf("|");
	 gotoxy((pantallax/2)-32,25);
	 printf("|");
	 gotoxy((pantallax/2)-32,26);
	 printf(" --------------------------------------------------------------- ");
	 gotoxy((pantallax/2)+32,6);
	 printf("|");
	 gotoxy((pantallax/2)+32,7);
	 printf("|");
	 gotoxy((pantallax/2)+32,8);
	 printf("|");
	 gotoxy((pantallax/2)+32,9);
	 printf("|");
	 gotoxy((pantallax/2)+32,10);
	 printf("|");
	 gotoxy((pantallax/2)+32,11);
	 printf("|");
	 gotoxy((pantallax/2)+32,12);
	 printf("|");
	 gotoxy((pantallax/2)+32,13);
	 printf("|");
	 gotoxy((pantallax/2)+32,14);
	 printf("|");
	 gotoxy((pantallax/2)+32,15);
	 printf("|");
	 gotoxy((pantallax/2)+32,16);
	 printf("|");
	 gotoxy((pantallax/2)+32,17);
	 printf("|");
	 gotoxy((pantallax/2)+32,18);
	 printf("|");
	 gotoxy((pantallax/2)+32,19);
	 printf("|");
	 gotoxy((pantallax/2)+32,20);
	 printf("|");
	 gotoxy((pantallax/2)+32,21);
	 printf("|");
	 gotoxy((pantallax/2)+32,22);
	 printf("|");
	 gotoxy((pantallax/2)+32,23);
	 printf("|");
	 gotoxy((pantallax/2)+32,24);
	 printf("|");
	 gotoxy((pantallax/2)+32,25);
	 printf("|");
	 gotoxy(1,pantallay-4);
	 printf("Direccio:    1:Esquerra  2:Amunt  3:Dreta  4:Avall  7:Menu  0:Sortir");
	 if(d!=0&&d!=7){
	 gotoxy(1,pantallay-3);
	 scanf("%d",&d);	
	 clrscr();
	 }
		    
		   if(p==0){tx=p2x; ty=p2y;}
		   if(p==increment){
             tx=o1x; ty=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==2*increment){
             tx=o2x; ty=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==3*increment){
             tx=o3x; ty=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==4*increment){
             tx=o4x; ty=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==5*increment){
             tx=o5x; ty=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==6*increment){
             tx=o6x; ty=o6y; o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; 
			 o1x=p2x; o1y=p2y;
		   }
	       if(p==7*increment){
             tx=o7x; ty=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==8*increment){
             tx=o8x; ty=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==9*increment){
             tx=o9x; ty=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==10*increment){
             tx=o10x; ty=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==11*increment){
             tx=o11x; ty=o11y; 
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==12*increment){
             tx=o12x; ty=o12y; o12x=o11x; o12y=o11y; 
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==13*increment){
             tx=o13x; ty=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==14*increment){
             tx=o14x; ty=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==15*increment){
             tx=o15x; ty=o15y; o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==16*increment){
             tx=o16x; ty=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==17*increment){
             tx=o17x; ty=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==18*increment){
             tx=o18x; ty=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==19*increment){
             tx=o19x; ty=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==20*increment){
             tx=o20x; ty=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==21*increment){
             tx=o21x; ty=o21y; 
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==22*increment){
             tx=o22x; ty=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==23*increment){
             tx=o23x; ty=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==24*increment){
             tx=o24x; ty=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==25*increment){
             tx=o25x; ty=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==26*increment){
             tx=o26x; ty=o26y; 
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==27*increment){
             tx=o27x; ty=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==28*increment){
             tx=o28x; ty=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==29*increment){
             tx=o29x; ty=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==30*increment){
             tx=o30x; ty=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==31*increment){
             tx=o31x; ty=o31y; 
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x;
			 o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==32*increment){
             tx=o32x; ty=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==33*increment){
             tx=o33x; ty=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==34*increment){
             tx=o34x; ty=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==35*increment){
             tx=o35x; ty=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==36*increment){
             tx=o36x; ty=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==37*increment){
             tx=o37x; ty=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==38*increment){
             tx=o38x; ty=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==39*increment){
             tx=o39x; ty=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==40*increment){
             tx=o40x; ty=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==41*increment){
             tx=o41x; ty=o41y; 
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==42*increment){
             tx=o42x; ty=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==43*increment){
             tx=o43x; ty=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==44*increment){
             tx=o44x; ty=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==45*increment){
             tx=o45x; ty=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==46*increment){
             tx=o46x; ty=o46y; 
			 o46x=o45x; o46y=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==47*increment){
             tx=o47x; ty=o47y; o47x=o46x; o47y=o46y;
			 o46x=o45x; o46y=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==48*increment){
             tx=o48x; ty=o48y; o48x=o47x; o48y=o47y; o47x=o46x; o47y=o46y;
			 o46x=o45x; o46y=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p==49*increment){
             tx=o49x; ty=o49y; o49x=o48x; o49y=o48y; o48x=o47x; o48y=o47y; o47x=o46x; o47y=o46y;
			 o46x=o45x; o46y=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
	       if(p>=50*increment){
             tx=o50x; ty=o50y; o50x=o49x; o50y=o49y; o49x=o48x; o49y=o48y; o48x=o47x; o48y=o47y; o47x=o46x; o47y=o46y;
			 o46x=o45x; o46y=o45y; o45x=o44x; o45y=o44y; o44x=o43x; o44y=o43y; o43x=o42x; o43y=o42y; o42x=o41x; o42y=o41y;
			 o41x=o40x; o41y=o40y; o40x=o39x; o40y=o39y; o39x=o38x; o39y=o38y; o38x=o37x; o38y=o37y; o37x=o36x; o37y=o36y; 
			 o36x=o35x; o36y=o35y; o35x=o34x; o35y=o34y; o34x=o33x; o34y=o33y; o33x=o32x; o33y=o32y; o32x=o31x; o32y=o31y;
			 o31x=o30x; o31y=o30y; o30x=o29x; o30y=o29y; o29x=o28x; o29y=o28y; o28x=o27x; o28y=o27y; o27x=o26x; o27y=o26y;
			 o26x=o25x; o26y=o25y; o25x=o24x; o25y=o24y; o24x=o23x; o24y=o23y; o23x=o22x; o23y=o22y; o22x=o21x; o22y=o21y;
			 o21x=o20x; o21y=o20y; o20x=o19x; o20y=o19y; o19x=o18x; o19y=o18y; o18x=o17x; o18y=o17y; o17x=o16x; o17y=o16y; 
			 o16x=o15x; o16y=o15y;o15x=o14x; o15y=o14y; o14x=o13x; o14y=o13y; o13x=o12x; o13y=o12y; o12x=o11x; o12y=o11y;
			 o11x=o10x; o11y=o10y; o10x=o9x; o10y=o9y; o9x=o8x; o9y=o8y; o8x=o7x; o8y=o7y; o7x=o6x; o7y=o6y; 
			 o6x=o5x; o6y=o5y; o5x=o4x; o5y=o4y; o4x=o3x; o4y=o3y; o3x=o2x; o3y=o2y; o2x=o1x; o2y=o1y; o1x=p2x; o1y=p2y;
		   }
		   if(p>=increment){gotoxy(o1x,o1y);printf("%c",cosb);}
		   if(p>=increment*2){gotoxy(o2x,o2y);printf("%c",cosb);}
		   if(p>=increment*3){gotoxy(o3x,o3y);printf("%c",cosb);}
		   if(p>=increment*4){gotoxy(o4x,o4y);printf("%c",cosb);}
		   if(p>=increment*5){gotoxy(o5x,o5y);printf("%c",cosb);}
		   if(p>=increment*6){gotoxy(o6x,o6y);printf("%c",cosb);}
		   if(p>=increment*7){gotoxy(o7x,o7y);printf("%c",cosb);}
		   if(p>=increment*8){gotoxy(o8x,o8y);printf("%c",cosb);}
		   if(p>=increment*9){gotoxy(o9x,o9y);printf("%c",cosb);}
		   if(p>=increment*10){gotoxy(o10x,o10y);printf("%c",cosb);}
		   if(p>=increment*11){gotoxy(o11x,o11y);printf("%c",cosb);}
		   if(p>=increment*12){gotoxy(o12x,o12y);printf("%c",cosb);}
		   if(p>=increment*13){gotoxy(o13x,o13y);printf("%c",cosb);}
		   if(p>=increment*14){gotoxy(o14x,o14y);printf("%c",cosb);}
		   if(p>=increment*15){gotoxy(o15x,o15y);printf("%c",cosb);}
		   if(p>=increment*16){gotoxy(o16x,o16y);printf("%c",cosb);}
		   if(p>=increment*17){gotoxy(o17x,o17y);printf("%c",cosb);}
		   if(p>=increment*18){gotoxy(o18x,o18y);printf("%c",cosb);}
		   if(p>=increment*19){gotoxy(o19x,o19y);printf("%c",cosb);}
		   if(p>=increment*20){gotoxy(o20x,o20y);printf("%c",cosb);}
		   if(p>=increment*21){gotoxy(o21x,o21y);printf("%c",cosb);}
		   if(p>=increment*22){gotoxy(o22x,o22y);printf("%c",cosb);}
		   if(p>=increment*23){gotoxy(o23x,o23y);printf("%c",cosb);}
		   if(p>=increment*24){gotoxy(o24x,o24y);printf("%c",cosb);}
		   if(p>=increment*25){gotoxy(o25x,o25y);printf("%c",cosb);}
		   if(p>=increment*26){gotoxy(o26x,o26y);printf("%c",cosb);}
		   if(p>=increment*27){gotoxy(o27x,o27y);printf("%c",cosb);}
		   if(p>=increment*28){gotoxy(o28x,o28y);printf("%c",cosb);}
		   if(p>=increment*29){gotoxy(o29x,o29y);printf("%c",cosb);}
		   if(p>=increment*30){gotoxy(o30x,o30y);printf("%c",cosb);}
		   if(p>=increment*31){gotoxy(o31x,o31y);printf("%c",cosb);}
		   if(p>=increment*32){gotoxy(o32x,o32y);printf("%c",cosb);}
		   if(p>=increment*33){gotoxy(o33x,o33y);printf("%c",cosb);}
		   if(p>=increment*34){gotoxy(o34x,o34y);printf("%c",cosb);}
		   if(p>=increment*35){gotoxy(o35x,o35y);printf("%c",cosb);}
		   if(p>=increment*36){gotoxy(o36x,o36y);printf("%c",cosb);}
		   if(p>=increment*37){gotoxy(o37x,o37y);printf("%c",cosb);}
		   if(p>=increment*38){gotoxy(o38x,o38y);printf("%c",cosb);}
		   if(p>=increment*39){gotoxy(o39x,o39y);printf("%c",cosb);}
		   if(p>=increment*40){gotoxy(o40x,o40y);printf("%c",cosb);}
		   if(p>=increment*41){gotoxy(o41x,o41y);printf("%c",cosb);}
		   if(p>=increment*42){gotoxy(o42x,o42y);printf("%c",cosb);}
		   if(p>=increment*43){gotoxy(o43x,o43y);printf("%c",cosb);}
		   if(p>=increment*44){gotoxy(o44x,o44y);printf("%c",cosb);}
		   if(p>=increment*45){gotoxy(o45x,o45y);printf("%c",cosb);}
		   if(p>=increment*46){gotoxy(o46x,o46y);printf("%c",cosb);}
		   if(p>=increment*47){gotoxy(o47x,o47y);printf("%c",cosb);}
		   if(p>=increment*48){gotoxy(o48x,o48y);printf("%c",cosb);}
		   if(p>=increment*49){gotoxy(o49x,o49y);printf("%c",cosb);}
		   if(p>=increment*50){gotoxy(o50x,o50y);printf("%c",cosb);}
		   
		   if(d==1){
		      p2x=cx; p2y=cy; c2x=cx; c2y=cy; cx=px; cy=py; 
			  if(px<=(pantallax/2)-31){px=(pantallax/2)+31;}else{px=px-dist;}
              gotoxy(px,py);printf(">"); 
		   }
		   if(d==2){
		      p2x=cx; p2y=cy; c2x=cx; c2y=cy; cx=px; cy=py; 
			  if(py<=6){py=25;}else{py=py-dist;}
              gotoxy(px,py);printf("V"); 
		   }
		   if(d==3){
		      p2x=cx; p2y=cy; c2x=cx; c2y=cy; cx=px; cy=py; 
			  if(px>=(pantallax/2)+31){px=(pantallax/2)-31;}else{px=px+dist;}
              gotoxy(px,py);printf("<"); 
		   }
		   if(d==4){
		      p2x=cx; p2y=cy; c2x=cx; c2y=cy; cx=px; cy=py; 
			  if(py>=25){py=6;}else{py=py+dist;}
              gotoxy(px,py);printf("^"); 
	       }
		   rdx=rdx+d;
		   rdy=rdy+d;
		   if(px==mx&&py==my){gx=mx; gy=my; mx=(rdx%61)+(pantallax-62)/2;my=(rdy%19)+6;p=p+increment;
		     g=(p/increment)+3;
		   }
		   gotoxy(cx,cy); printf("%c",ull); gotoxy(c2x,c2y); printf("%c",cosb); gotoxy(p2x,p2y);printf("%c",cosb);
		   gotoxy(tx,ty); printf(" ");
		   gotoxy(mx,my);printf("%c",menjar);
		   gotoxy(pantallax-5,1); printf("SCORE:"); gotoxy(pantallax-5,2); printf("%d",p);
		   gotoxy(pantallax-5,4); printf("BEST:"); gotoxy(pantallax-5,5); printf("%d",pmax);
		   if(g>0){gotoxy(gx,gy);printf("%c",menjar2);g=g-1;}
	 
 }
}
clrscr();
gotoxy(1,1);

}
