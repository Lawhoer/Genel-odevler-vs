#include <iostream>
#include "gauss.h"

float tersi(int n,float matrix1[][10],float x[][10]){

	
	int cevap,i,j;
	float detA=1,oran;
	
	int k,c,b,ea=1;
	float gecici1[n],gecici2[n],gx1[10],gx2[10];
		
	

	
	    for(i=0;i<n;i++){
	    	
	    	
	    	
	    	if(matrix1[i][i] == 0.0)
		  {
			  for(k=0;k<n;k++){
			  	gecici1[k]=matrix1[i+1][k];
			  	gecici2[k]=matrix1[i][k];
			  	matrix1[i+1][k]=gecici2[k];
			  	matrix1[i][k]=gecici1[k];
			  	
			  	gx1[k]=x[i+1][k];
			  	gx2[k]=x[i][k];
			  	x[i+1][k]=gx2[k];
			  	x[i][k]=gx1[k];
			  }			  			  
			  ea=-1;			  			  
		  }
		  
		  
		  
		  
		  for(j=i+1;j<n;j++)
		  {
			   oran = matrix1[j][i]/matrix1[i][i];                   
			   for(k=0;k<n;k++)
			   {
			  		matrix1[j][k] = matrix1[j][k] - oran*matrix1[i][k];
			  		x[j][k] = x[j][k] - oran*x[i][k];
			   }  			   			            
		  } 
	}		 
	
	
	
	
	for(i=n-1;i>=0;i--){
                
		  for(j=i-1;j>=0;j--)
		  {
			   oran = matrix1[j][i]/matrix1[i][i];                   
			   for(k=n-1;k>=0;k--)
			   {
			  		matrix1[j][k] = matrix1[j][k] - oran*matrix1[i][k];
			  		x[j][k] = x[j][k] - oran*x[i][k];
			   }  
			   
				
					   			            
		  } 
		  
	}
	
		
			
				
	
	// köþegenleri 1 yapma iþlemi
	for(i=0;i<n;i++){
	    	
	    	if(matrix1[i][i] != 1.00)
		  {
		  	    float s=matrix1[i][i];
			  	for(j=0;j<n;j++){
			  		matrix1[i][j] = matrix1[i][j]/matrix1[i][i]; // sorun yok
			  		x[i][j] = x[i][j]/s;
			
			  	}		 	
			  		  			  
		  }
	}

	
   
     

}



float gauss(int n,float matrix1[][10]){

	
	int cevap,i,j;
	float detA=1,oran;
	
	int k,c,b,ea=1;
	float gecici1[n],gecici2[n];
	if(n>2){	
	    for(i=0;i<n;i++){
	    	if(matrix1[i][i] == 0.0)
		  {
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
			   for(k=0;k<n;k++)
			   {
			  		matrix1[j][k] = matrix1[j][k] - oran*matrix1[i][k];
			   }  			   			            
		  } 
	}		       	
		for(i=0;i< n;i++)
     {
         detA = detA * matrix1[i][i]; 
     }
     return ea*detA;
     }
     if(n==2){
     	return (matrix1[0][0]*matrix1[1][1])-(matrix1[0][1]*matrix1[1][0]);
	 }
}

void kopyala(int n,float g1[][10],float g2[][10]){
	
	int i,j;
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		  	g1[i][j]=g2[i][j];
		}
	}
} 

float gauss(int n,float matrix1[][10],float x[]){

	int cevap,i,j;
	float detA=1,oran;
	
	int k,c,b,ea=1;
	float gecici1[n],gecici2[n],xg1[n];
	
	for(int k=0;k<n;k++){
    	xg1[k]=x[k];
	}
	
	if(n>2){	
	    for(i=0;i<n;i++){
	    	if(matrix1[i][i] == 0.0)
		  {
			  for(k=0;k<n;k++){
			  	gecici1[k]=matrix1[i+1][k];
			  	gecici2[k]=matrix1[i][k];
			  	matrix1[i+1][k]=gecici2[k];
			  	matrix1[i][k]=gecici1[k];  	
			  	xg1[k]=x[k];
			  }	
			  x[i+1]=xg1[i];
			  x[i]=xg1[i+1];		  			  
			  ea=-1;			  			  
		  }
		  for(j=i+1;j<n;j++)
		  {
			   oran = matrix1[j][i]/matrix1[i][i];                   
			   for(k=0;k<n;k++)
			   {
			  		matrix1[j][k] = matrix1[j][k] - oran*matrix1[i][k];
			  		
			   }  
			   x[j]= x[j] - oran*x[i];			   			            
		  } 
	}		       	
		for(i=0;i< n;i++)
     {
         detA = detA * matrix1[i][i]; 
     }
     return ea*detA;
     }
     if(n==2){
     	return (matrix1[0][0]*matrix1[1][1])-(matrix1[0][1]*matrix1[1][0]);
	 }
}



