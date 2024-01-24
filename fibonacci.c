#include <stdio.h>
int a;

void matrixdoldur(int matrix[a][a]){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a-i; j++)
        {
            matrix[i][j+i] = 1+j;
        }
        
    }
}
void matrixyaz(int matrix[a][a]){
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
        
    }
    

}

int main(){
    FILE *dosya;
    printf("Boyut Giriniz: ");
    scanf("%d",&a);
    int matrix[a][a];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            matrix[i][j] = 0;
        }
        
    }
    matrixdoldur(matrix);
    matrixyaz(matrix);
    dosya = fopen("Matrix.txt","w");
    if (dosya == NULL)
    {
        printf("Dosyaya erislemedi!");
        return 1;
    }
    else{
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < a; j++)
            {
                fprintf(dosya,"%d ",matrix[i][j]);
            }
            fprintf(dosya,"\n");
        }
    }
    
    return 0;
}