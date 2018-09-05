
//EDGARDO ERNESTO ESPADERO MIRANDA EM16006
#include <stdio.h>
#include <stdlib.h>

int main() {
    int columnas,filas,auxiliar;
    int fil=0,col=0,aux=0,contador=0,contV=0,contA=0;
    int i=0,j=0,h=0;
    printf("Numero de filas que tendran la matrices\n");
    scanf("%d",&filas);
    printf("Numero de columnas que tendran la matrices \n");
    scanf("%d",&columnas);

    int m1[filas][columnas];
    int m2[filas][columnas];
    int mResultante[filas][columnas];
    
     //LLENANDO MATRIZ 1
    printf("Ingrese la matriz 1:\n");
    for(fil=0; fil< filas; fil++)
    {
		for(col=0; col< columnas; col++)
		{
                    printf("Posicion (%d,%d): ",fil,col);
                    scanf("%d",&m1[fil][col]);	
		}	
    }
	
	//LLENANDO MATRIZ 2
	printf("Ingrese la matriz 2:\n");
    for(fil=0; fil< filas; fil++)
    {
		for(col=0; col< columnas; col++)
		{
			printf("Posicion (%d,%d): ",fil,col);
			scanf("%d",&m2[fil][col]);
		}	
    }
        
        //MOSTRAR MATRIZ 1
	printf("\n Matriz 1:\n"); 
	        for(int fil=0;fil<filas;fil++)
	        {
	            printf("[ ");
	            for(int col=0;col<columnas;col++)
	            {
	                printf("%d ",m1[fil][col]);
				}
	            printf("]");
	            printf("\n");
	        }
	//MOSTRAR MATRIZ 2 
	printf("\n Matriz 2:\n"); 
	        for(int fil=0;fil<filas;fil++)
	        {
	            printf("[ ");
	            for(int col=0;col<columnas;col++)
	            {
	                printf("%d ",m2[fil][col]);
                    }
	            printf("]");
	            printf("\n");
                } 
    
           
        if(columnas==filas)
	{
            printf("La matriz resultante es: \n");
 
	    for(int i=0;i<filas;i++)
	    {
	    printf("[ ");
 
            for(int j=0;j<columnas;j++)
            {
                mResultante[i][j]=0;
                for(int h=0;h<columnas;h++)
                {
                    mResultante[i][j]=mResultante[i][j]+(m1[i][h]*m2[h][j]);
						}
                    printf("%d ",mResultante[i][j]);
            }
                    printf("]");
                    printf("\n");
            }
	}
	else
	{
		printf("Las matrices deben ser cuadradas");
        } 
      printf("Numeros Primos: \n");  
    //BUSCARA LOS NUMEROS PRIMOS Y CUANTOS HAY
       for(int fil=0;fil<filas;fil++)
	{
	   for(int col=0;col<columnas;col++)
	    {
               for(int h=1;h<=mResultante[fil][col];h++){
                   if (mResultante[fil][col]%h==0) {
                       contador++;      
                    }                       
                }
                if (contador==2) {
                   contV++;
                printf("%d posicion (%d,%d)  ",mResultante[fil][col],fil,col);
                }
               contador=0;

            }
	}
       
        printf("\n");
        int vector[contV];
        //introducira los primos de la matriz en el vector
        for(int fil=0;fil<filas;fil++)
	{
	   for(int col=0;col<columnas;col++)
	    {
               for(int h=1;h<=mResultante[fil][col];h++){
                   if (mResultante[fil][col]%h==0) {
                       contador++;      
                    }                       
                }
                if (contador==2) {
                    vector[contA]=mResultante[fil][col];
                    contA++;
                }
               contador=0;
               

            }
	}

        //ORDENARA EL VECTOR
    for (i = 0; i <contV-1; i++) {
        for(j=0; j<contV-1; j++){
            if (vector[j]>vector[j+1]) {
                auxiliar=vector[j];
                vector[j]=vector[j+1];
                vector[j+1]=auxiliar;
            }
        }          
    }

        printf("\nLOS NUMEROS PRIMOS SON:\n");
    for (i = 0; i < contV; i++) {
        printf("%d ",vector[i]); 

    }
  
        
    return 0;
}
