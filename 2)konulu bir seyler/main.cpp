#include <iostream>
#include "ders.h"
#include <vector>

using namespace std;

int main() {
	

	vector <dersler> vec;
	dersler a;
	char girdi,dersadi;
	int notu,toplam=0;
	
    while(1){
    	cout << "Hangi islemi yapmak istiyorsun: ";
    	cin >> girdi;
    	
    	if(girdi == 'd'){
    		cout << "Hangi ders: ";
    		cin >> girdi;
    		dersadi=girdi;
    		cout << "Not: ";
    		cin >> notu;
    		
    		
    		for(int i=0;i<vec.size();i++){
    			
    			if(dersadi==vec[i].readAdi()){
    				vec[i].write(dersadi, notu);
    				cout << "basarýyla ayný dersin baska bir notu kaydedildi" << endl;
				  	break;
				}
    			 if(i == vec.size() - 1){		
						a.write(dersadi, notu);
						vec.push_back(a);
						a.sil();
						cout << "basariyla yeni ders ve not kaydedildi" << endl;
						break;
				}			
			}   		
    		if(vec.size()==0){
    			a.write(dersadi,notu);
    			vec.push_back(a);
    		//	a.sil();
    			cout << "basariyla yeni ders ve not kaydedildi" << endl;
			}
    			
		}
		if(girdi == 'z'){
			cout << "gorev tamam" << endl;
			break;
		}		
		if(girdi == 'n') {
			cout << "Hangi dersin ortalamasini istiyorsun: ";
			cin >> girdi;
    		
    		dersadi=girdi;
    		
    			for(int i=0;i<vec.size();i++){
    			    if(dersadi==vec[i].readAdi()){
    			    	cout << vec[i].readOrtalama() << endl;
					}   			 			
			}		
		}
    	if(girdi == 't'){
    		for(int i=0;i<vec.size();i++){
    			    toplam += vec[i].readToplam();  			 			
			}
			cout << "Girilen butun sayilarin toplami: " << toplam << endl;				
		}
    	
    	
    	
    	
	}	
	return 0;	
	}
	

	


