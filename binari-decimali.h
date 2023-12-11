#include <math.h>
#include <stdio.h>
                                                      //int bum;
int decimale(int bin);                               //main portatile per il test decommenta e salva .c per usare
                                                    //int main (void){printf("dammi ");scanf("%d",&bum);printf("%d",decimale(bum));}
int decimale(int bin){
    int ris=0;                  //è il decimale
    int marck,i=0;             //mark è un remainder mentre i serve per la potenza
    while(bin>0){
        marck=bin%10;
        if(marck==0||marck==1){
            ris= ris + marck *pow(2,i);
            bin/=10;
            i++;
        }else{return 0;}

    }
    return ris;
}
