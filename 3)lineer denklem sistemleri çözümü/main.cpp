#include <iostream>
#include "gauss.h"



using namespace std;

int main() {
	
int p,bosoge=1;	
	
	cout << "Yapmak istediniz islemin numarasini giriniz: " << endl;
	cout << "1) Cramer Yontemi" << endl;
	cout << "2) Gauss Eleminasyon Yontemi" << endl;
	cout << "3) Matrix Tersi Yontemi" << endl; 
	cout << "Hangisini: ";
    scanf("%d",&p);	
    
   if(p==3){ // MATRÝX TERSÝ
   	
   	int n;
   	float matrix[10][10],a[10];
   	float x[10][10]={{1,0,0},{0,1,0},{0,0,1}};
   	printf("-Birazdan Matrixin tersiyle bulma yontemindeki denklemlerden olusturulmus A.x=b in degerlerini giriceksiniz-\n");
    printf("nxn'deki n kac olsun?: ");
    scanf("%d",&n);	


    printf("Degerleri giriniz:\n");
    for(int i = 0 ;i < n;i++){
        for(int j = 0;j < n;j++){
	       printf("A[%d][%d]: ",i+1,j+1);
           scanf("%f", &matrix[i][j]);
    }}
    
    printf("b matrixinin degerlerini giriniz: \n");
    for(int j = 0;j < n;j++){
    	printf("b[%d]: ",j);
        scanf("%f", &a[j]);
	}
    
    float sonuc[10]={0};
    tersi(n,matrix,x);
   	
    
    for(int i=0;i<n;i++){
    	for(int j=0;j<n;j++){
    		sonuc[i]=sonuc[i] + x[i][j]*a[j];
		}
	}
   	
   	
   	for(int i=0;i<n;i++){
   		 printf("x%d: %.2f\n",i+1,sonuc[i]);
	   }
   	
   	
   }
   
	
	
if(bosoge==1){
   if(p==1){  // CRAMER
   	
int n,i,j;
float matrix[10][10],g2[10][10],g1[10][10],a[10],sonuc,detA;

printf("-Birazdan Cramer yontemindeki denklemlerdn olusturulmus A.x=b in degerlerini giriceksiniz-\n");
printf("nxn'deki n kac olsun?: ");
scanf("%d",&n);	


printf("Degerleri giriniz:\n");
for(i = 0 ;i < n;i++){
      for(j = 0;j < n;j++){
	       printf("A[%d][%d]: ",i+1,j+1);
           scanf("%f", &matrix[i][j]);
}}

kopyala(n,g1,matrix);
kopyala(n,g2,matrix);


detA=gauss(n,g2);

	printf("b matrixinin degerlerini giriniz: \n");
    for(j = 0;j < n;j++){
    	printf("b[%d]: ",j);
        scanf("%f", &a[j]);
	}

	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			g1[j][i]=a[j];
		}	
	
		sonuc = gauss(n,g1)/detA;
		printf("x%d: %.2f\n",i,sonuc);
		
		kopyala(n,g1,matrix);	
	}
   }
}
   
   if(p==2){  // GAUSS ELEMÝNASYON
   	
   	int n;
   	float matrix[10][10],a[10];
   	
   	printf("-Birazdan Gauss eleminasyon yontemindeki denklemlerden olusturulmus A.x=b in degerlerini giriceksiniz-\n");
    printf("nxn'deki n kac olsun?: ");
    scanf("%d",&n);	


    printf("Degerleri giriniz:\n");
    for(int i = 0 ;i < n;i++){
        for(int j = 0;j < n;j++){
	       printf("A[%d][%d]: ",i+1,j+1);
           scanf("%f", &matrix[i][j]);
    }}
    
    printf("b matrixinin degerlerini giriniz: \n");
    for(int j = 0;j < n;j++){
    	printf("b[%d]: ",j);
        scanf("%f", &a[j]);
	}
	
    gauss(n,matrix,a);
    
  
   
    float z,gecici[10]={0};
    
   if(n==2){
   	gecici[1]=a[1]/matrix[1][1];
   	gecici[0]=(a[0]-matrix[0][1]*gecici[1])/matrix[0][0];
   }
   if(n==3){
   	gecici[2]=a[2]/matrix[2][2];
   	gecici[1]=(a[1]-matrix[1][2]*gecici[2])/matrix[1][1];
   	gecici[0]=(a[0]-matrix[0][2]*gecici[2]-matrix[0][1]*gecici[1])/matrix[0][0];
   }
   if(n==4){
   	gecici[3]=a[3]/matrix[3][3];
   	gecici[2]=(a[2]-matrix[2][3]*gecici[3])/matrix[2][2];
   	gecici[1]=(a[1]-matrix[1][3]*gecici[3]-matrix[1][2]*gecici[2])/matrix[1][1];
   	gecici[0]=(a[0]-matrix[0][3]*gecici[3]-matrix[0][2]*gecici[2]-matrix[0][1]*gecici[1])/matrix[0][0];
   }
   
   
  
	
	for(int k=0;k<n;k++){
		printf("x%d: %.2f\n",k+1,gecici[k]);
	}







}


     system("pause");
     return 0;
}
