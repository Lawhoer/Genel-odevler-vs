#include <iostream>

using namespace std;

class dugum {
	public:
		// klasik düðüm oluþturken hangi veriyi ve nereyi göstericeðini de yazabilmek için
		dugum(int _veri,dugum* _pSonraki){
			veri=_veri;
			pSonraki=_pSonraki;
		}
		// eger bir yeri göstermicekse
		dugum(int _veri){
			veri=_veri;
			pSonraki=NULL;
		}
		int veri;
		dugum* pSonraki;	
};

void pList(dugum* pBas){
	while(pBas!=NULL){
		cout << pBas->veri;
		pBas=pBas->pSonraki;	
	}
	cout << endl;	
}
/*
void sonEkleme(dugum* pBas,dugum* pY){
	while(pBas->pSonraki!=NULL){
		pBas=pBas->pSonraki;
	}
	pBas->pSonraki=pY;
}

dugum* sonCikarma(dugum* pBas){
	dugum* ptemp;
	while(pBas->pSonraki->pSonraki!=NULL){
		pBas=pBas->pSonraki;
	}
	ptemp=pBas->pSonraki;
	pBas->pSonraki=NULL;
	return ptemp;
}  */

void Ekleme(dugum* pBas,dugum* pY,int yeri){
	for(int i=1;i<yeri-1;i++){
		pBas=pBas->pSonraki;
	}
	if(pBas->pSonraki!=NULL){
	    pY->pSonraki=pBas->pSonraki;
	    pBas->pSonraki=pY;		
	}
	else{
		pBas->pSonraki=pY;
	}
	
}

dugum* Cikarma(dugum* pBas,int yeri){
	
	dugum* ptemp;
	
	for(int i=1;i<yeri-1;i++){
		pBas=pBas->pSonraki;
	}
	if(pBas->pSonraki->pSonraki!=NULL){
	    ptemp=pBas->pSonraki;
	    pBas->pSonraki=pBas->pSonraki->pSonraki;
	    return ptemp;
	}
	else{
		ptemp=pBas->pSonraki;
		pBas->pSonraki=NULL;
		return ptemp;
	}	
}


int main() {
	// burda node'larý oluþtururken terten yazýyorum ki program varlýgýný tanýsýn
	dugum* p8=new dugum(9);
	dugum* p5=new dugum(5);
	dugum* p4=new dugum(4,p5);
	dugum* p3=new dugum(3,p4);
	dugum* p2=new dugum(2,p3);
	dugum* p1=new dugum(1,p2);
	
	pList(p1);
	
	Cikarma(p1,2);
	
	
    pList(p1);
	
 
	
	
	
	
	
	
	
	
	
}
