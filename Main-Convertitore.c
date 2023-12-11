#include<stdio.h>
#include <stdlib.h>
#include "binari-decimali.h"
#include "decimali-binari.h"
#include "decimali-romani.h"
#include "romani-decimali.h"
#include    "circuiti.h"
#define DIM 200 
int dec=0,sceltaM,sceltaE,sceltaC,bin;       // scelta menu per i menu multipli, scelta convertitore per indovina, scelta elettrica per l'altro
char conf,rom[DIM],bho;             //bho è la lettura a vuoto

int main(void){
    do{   
       printf("-------------<benvenuto nel programma>--------------\n"
              "-----<premi 1 per entrare nel convertitore>---------\n"
              "--------<premi 2 per calcoli su circuiti>-----------\n"
              "-------<premi 0 per terminare il programma>---------\n");
              scanf("%d",&sceltaM);
       switch(sceltaM){    
              case 1:
                     do{
                     printf("-------------<benvenuto nel convertitore>--------------\n"
                            "-------<per-covertire-in-numeri-romani:-premi-4>-------\n" 
                            "-------<covertire-da-romani-a-decimali:-premi-3>-------\n"
                            "-------<per-covertire-in-numeri-binari:-premi-2>-------\n"
                            "-------<covertire-da-binari-a-decimali:-premi-1>-------\n"
                            "------<premi-0-se-vuoi-tornare indietro:-premi-0>------\n"
                            "---------------<fai-la-tua-scelta-dai>-----------------\n");
                     scanf("%d",&sceltaC);
                     fflush(stdin);
                     switch(sceltaC){
                            case 4:
                            printf("---------ok-hai-scelto:-da-numeri-a-romani-------------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n");
                            
                            scanf("%c",&conf);
                            if (conf=='n'||conf=='N'){sceltaC=100;break;}
                            else
                            printf("---------ok-hai-scelto:-da-numeri-a-romani-------------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                            scanf("%d",&dec);
                            printf("--------il-numero-%d-convertito-diventa-",dec);
                            roma(dec);       
                            break;
                            case 3:
                            printf("---------ok-hai-scelto:-da-romani-a-numeri-------------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n");
                            scanf("%c",&conf);
                            if (conf=='n'||conf=='N'){sceltaC=100;break;}
                            else
                            printf("---------ok-hai-scelto:-da-romani-a-numeri-------------\n"
                                   "-------dimmi-il-numero-romano-da-convertire------------\n");
                            //scanf("%s",rom);
                            //printf("--------il-numero-%s-convertito-diventa-%d-------------\n",rom,roma2(rom));       
                            break;

                            case 2:
                            printf("---------ok-hai-scelto:-da-decimali-a-binari-----------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n");
                            scanf("%c",&conf);
                            if (conf=='n'||conf=='N'){sceltaC=100;break;}
                            else
                            printf("--------ok-hai-scelto:-da-decimali-a-binari------------\n"
                                   "--------dimmi-il-numero-che-vuoi-convertire------------\n");
                                   
                            scanf("%d",&dec);
                            binario(dec);       
                            break;
                            case 1:
                            printf("---------ok-hai-scelto:-da-binari-decimali-------------\n"
                                   "------------sicuro-che-hai-scelto-bene?----------------\n"
                                   "----------------------y-or-n---------------------------\n");
                            scanf("%c",&conf);
                            if (conf=='n'||conf=='N'){sceltaC=100;break;}
                            else
                            printf("---------ok-hai-scelto:-da-binari-decimali-------------\n"
                                   "-----------dimmi-il-binario-da-convertire--------------\n");
                            scanf("%d",&bin);
                            printf("--------il-numero-%d-convertito-diventa-%d",bin,decimale(bin));
                                   int temp = decimale(bin);
                                   int cifre=0;
                                   if(temp=0){cifre=1;}
                                   while (temp != 0) {
                                          temp /= 10;
                                          cifre++;
                                   }//10010110
                                   
                                   for(int p=13-cifre;p>=0;p--,printf("-"));//lo so  che lo sto facendo per metà ma è tardi e ho sonno
                                   printf("\n");
                            break;
                     }
                     }while(sceltaC!=0);
              break;

              case 2:
                     
                     do{   //-------------------------------------------------------
                     printf("----benvenuto nel programma per calcolare i circuti----\n"
                            "---------<premi 1 per calcolare le resistenze>---------\n"
                            "-----<premi 2 per calcolare le cadute di tensione>-----\n"//non ancora terminato
                            "------------<premi 0 per tornare indietro>-------------\n");
                     scanf("%d",&sceltaE);
                     switch (sceltaE)
                     {
                     case 1://calcolo resistenze
                            resistenzaMain();
                            break;
                     
                     default:
                            break;
                     }
                     }while(sceltaE!=0);
              break;
              }
       }while(sceltaM!=0);
}
