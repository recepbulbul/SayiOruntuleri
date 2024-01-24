#include <stdio.h>
void bosluk(int x){
    for (int i = 0; i < x; i++)
    {
        printf("  ");
    }
    
}
int main(){
    int satir,sayiolmali=0,sonuc=0,fakt2=1,sayac=1,fakt=1,sayi=0;
    printf("Satir Giriniz: ");
    scanf("%d",&satir);
    for (int x = satir; x > 0 ; x--)
    {
        bosluk(x);
        printf("1   ");
        while (sayiolmali > 0)
        {
            fakt*=sayi;
            fakt2*= sayac;
            sonuc= fakt/fakt2;
            
            if (sonuc==1)
            {
                printf("%d   ",sonuc);
                break;
            }
            printf("%d   ",sonuc);
            sayac++;
            sayi--;
            
        }
        fakt2=1;
        fakt=1;
        sonuc=0;
        sayac=1;
        sayiolmali++;
        sayi=sayiolmali;
        printf("\n");
        
    }
    
    return 0;
}
