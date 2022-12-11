#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){

///////////////////////  D E Ð E R  O K U M A  ////////////////////////////

int cevap,n,i,j;

printf("nxn'deki n kac olsun?: ");
scanf("%d",&n);	
	

float matrix1[10][10],detA=1,oran;

printf("Degerleri giriniz:\n");

for(i = 0 ;i < n;i++){
      for(j = 0;j < n;j++){
	       printf("A[%d][%d]: ",i+1,j+1);
           scanf("%f", &matrix1[i][j]);
}}

printf("\nIlk Matrix:\n");    //Kontrol elemaný: Ýlk girilen matrixi görmek için
  for(i = 0;i < n; i++){
      printf("\n");
      for(j = 0;j < n; j++)
           printf("%.2f\t", matrix1[i][j]);
  }
  printf("\n");
    
 //////////////////////   D E T E R M Ý N A N T   ////////////////////////////////////////// 
	int k,c,b,ea=1;
	float gecici1[n],gecici2[n];	
	    for(i=0;i<n;i++){
	    	if(matrix1[i][i] == 0.0)
		  {
		//	   printf("Yerler degistirildi");  Kontrol elemaný: Yer deðiþikliði oldugunda bildirmek için
			  for(k=0;k<n;k++){
			  	gecici1[k]=matrix1[i+1][k];
			  	gecici2[k]=matrix1[i][k];
			  	matrix1[i+1][k]=gecici2[k];
			  	matrix1[i][k]=gecici1[k];
			  }			  			  
			  ea=-1;			  			  
		  }
		  for(j=i+1;j<n;j++)
		  {
			   oran = matrix1[j][i]/matrix1[i][i];
               printf("\n(i=%d,j=%d|oran: %.2f)",i,j,oran);  //Kontrol elemaný: Ýþlemin sýrasýný burdaki deðerlerle bulabilirsiniz                     
			   for(k=0;k<n;k++)
			   {
			  		matrix1[j][k] = matrix1[j][k] - oran*matrix1[i][k];
			   }  			   			   
			printf("\nAra Matrix:\n");       //Kontrol elemaný: Eðer sýrayla adým adým iþlemlerin sonuçlarýný görmek isterseniz burayý acýn
               for(c = 0;c < n; c++){                
                printf("\n");
                  for(b = 0;b < n; b++)
                    printf("%.2f\t", matrix1[c][b]);
            }
            printf("\n"); 
            
		  } 
	}		       	
		for(i=0;i< n;i++)
     {
         detA = detA * matrix1[i][i]; 
     }
     printf("\n\nDeterminant: %0.2f\n", ea*detA);
     system("pause");
     return 0;
}
