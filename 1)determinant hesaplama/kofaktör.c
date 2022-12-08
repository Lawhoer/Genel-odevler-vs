#include <stdio.h>
#include<math.h>
#include<stdlib.h>



int main() {
	
	int k,l,i,j,boy,Determinant,us1,us2,us3,us4,det1,det2,det3,det4;
	
	printf("nxn'deki n kac olsun?: ");
		scanf("%d",&boy);
		int matris[boy][boy];
		for(i=0;i<boy;i++){
			for(j=0;j<boy;j++){
				printf("A[%d][%d]: ",i+1,j+1);
				scanf("%d",&matris[i][j]);
				
			}
		}
		
		
		if(boy==1){
			printf("Determinant: %d",matris[0][0]);
		}
		else if (boy==2){
			printf("Determinant: %d",((matris[0][0]*matris[1][1])-(matris[0][1]*matris[1][0])));
		}
		else if(boy==3){
			us1=pow((-1),(1+1));
			us2=pow((-1),(1+2));
			us3=pow((-1),(1+3));
		
		Determinant= (matris[0][0]*us1*((matris[1][1]*matris[2][2])-(matris[1][2]*matris[2][1])))+(matris[0][1]*us2*((matris[1][0]*matris[2][2])-(matris[1][2]*matris[2][0])))+(matris[0][2]*us3*((matris[1][0]*matris[2][1])-(matris[1][1]*matris[2][0])));
	    
	    
	    printf("  Determinant = %d",Determinant);
		}
		else if (boy==4){
			us1=pow((-1),(1+1));
			us2=pow((-1),(1+2));
			us3=pow((-1),(1+3));
			us4=pow((-1),(1+4));
			det1=(((matris[1][1]*matris[2][2]*matris[3][3])+(matris[2][1]*matris[3][2]*matris[1][3])+(matris[3][1]*matris[1][2]*matris[2][3]))-((matris[1][3]*matris[2][2]*matris[3][1])+(matris[2][3]*matris[3][2]*matris[1][1])+(matris[3][3]*matris[1][2]*matris[2][1])));
			det2=(((matris[1][0]*matris[2][2]*matris[3][3])+(matris[2][0]*matris[3][2]*matris[1][3])+(matris[3][0]*matris[1][2]*matris[2][3]))-((matris[1][3]*matris[2][2]*matris[3][0])+(matris[2][3]*matris[3][2]*matris[1][0])+(matris[3][3]*matris[1][2]*matris[2][0])));
			det3=(((matris[1][0]*matris[2][1]*matris[3][3])+(matris[2][0]*matris[3][1]*matris[1][3])+(matris[3][0]*matris[1][1]*matris[2][3]))-((matris[1][3]*matris[2][1]*matris[3][0])+(matris[2][3]*matris[3][1]*matris[1][0])+(matris[3][3]*matris[1][1]*matris[2][0])));
			det4=(((matris[1][0]*matris[2][1]*matris[3][2])+(matris[2][0]*matris[3][1]*matris[1][2])+(matris[3][0]*matris[1][1]*matris[2][2]))-((matris[1][2]*matris[2][1]*matris[3][0])+(matris[2][2]*matris[3][1]*matris[1][0])+(matris[3][2]*matris[1][1]*matris[2][0])));
			Determinant=((matris[0][0]*us1*det1)+(matris[0][1]*us2*det2)+(matris[0][2]*us3*det3)+(matris[0][3]*us4*det4));
			
			printf("Determinant = %d",Determinant);
			system("pause");
            return 0;
		}
	
	
	
}
