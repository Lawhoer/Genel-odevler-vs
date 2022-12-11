#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
	int i,j,n,c,b,detA=0,k,g,h,l,p,m,cn,ae=1;
	int gecici1,gecici2;	
	printf("nxn'deki n kac olsun?: ");
    scanf("%d",&n);
    float matrix[10][10],y[10][10],y1[10][10];  
    double oran=1;
    printf("Degerleri giriniz:\n");
    
/////////////////// Y E D E K L E M E /////////////////////////////// 
    for(i = 0 ;i < n;i++){
      for(j = 0;j < n;j++){
	       printf("A[%d][%d]: ",i+1,j+1);
           scanf("%f", &matrix[i][j]);
           y[i][j]=matrix[i][j];
}}
///////////////// Ý Þ L E M L E R ////////////////////////////////////


if(n>2){
	if(n==5){
	
		oran = oran*1/(pow(matrix[0][0],n-2));
		
		for(i=0;i<n-1;i++){
      for(j=0;j<n-1;j++){    	 
	       matrix[i][j]=(y[0][0]*matrix[i+1][j+1] - y[0][j+1]*matrix[i+1][0]);
		 }
      }
	  
	
	     
      oran = oran*1/(pow(matrix[0][0],n-3));
      
 /*     //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<4;c++){
        for(b=0;b<4;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); */
    for(k = 0 ;k <n-1;k++){
      for(g = 0;g <n-1;g++){
           y1[k][g]=matrix[k][g];
        }
	}
	  for(i=0;i<n-2;i++){
        for(j=0;j<n-2;j++){
	     	matrix[i][j]=(y1[0][0]*matrix[i+1][j+1] - y1[0][j+1]*matrix[i+1][0]);
		 }
      }
      
      
      
      oran = oran*1/(pow(matrix[0][0],n-4));
  /*    //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<3;c++){
        for(b=0;b<3;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); */
      for(k = 0 ;k <n-2;k++){
      for(g = 0;g <n-2;g++){
           y1[k][g]=matrix[k][g];
        }
	}
	  for(i=0;i<n-3;i++){
        for(j=0;j<n-3;j++){
	     	matrix[i][j]=(y1[0][0]*matrix[i+1][j+1] - y1[0][j+1]*matrix[i+1][0]);
		 }
      }
     /* //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<2;c++){
        for(b=0;b<2;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); */
    }
    if(n==4){
 	
    	oran = oran*1/(pow(matrix[0][0],n-2));
    	
   	for(i=0;i<n-1;i++){
      for(j=0;j<n-1;j++){    	 
       matrix[i][j]=(y[0][0]*matrix[i+1][j+1] - y[0][j+1]*matrix[i+1][0]);
     	  }
       }
          
	  	oran = oran*1/(pow(matrix[0][0],n-3));   
		   
		   
		   
		   
  /*    //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<3;c++){
        for(b=0;b<3;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); */
    for(k = 0 ;k <n-1;k++){
      for(g = 0;g <n-1;g++){
           y1[k][g]=matrix[k][g];
        }
	}
	  for(i=0;i<n-2;i++){
        for(j=0;j<n-2;j++){
	     	matrix[i][j]=(y1[0][0]*matrix[i+1][j+1] - y1[0][j+1]*matrix[i+1][0]);
		 }
      }
  /*    //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<2;c++){
        for(b=0;b<2;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); */
    }
    if(n==3){ 		
    	oran = oran*1/(pow(matrix[0][0],n-2));
    	
    	for(i=0;i<n-1;i++){
      for(j=0;j<n-1;j++){    	 
	       matrix[i][j]=(y[0][0]*matrix[i+1][j+1] - y[0][j+1]*matrix[i+1][0]);
		 }
      }
     
/*  //////////////// Matrix gösterme ////////////////////	  
    for(c=0;c<2;c++){
        for(b=0;b<2;b++){
	     	printf("%.2f\t", matrix[c][b]);
		 }   	
	printf("\n");
    }    
    printf("\n"); 	    */
    }
	}  
	
/////////////// Output ////////////////////////////////////        
    detA = matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
    printf("\noran: %.2f\n",oran);
    detA= detA*oran;
    printf("\nDeterminant: %d\n",detA);  
    system("pause");
     return 0;
}
