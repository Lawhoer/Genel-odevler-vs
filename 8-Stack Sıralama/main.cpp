#include <iostream>
#include <stack>
#include <fstream>

using namespace std;

int main(){
	
	stack<char> a1;
	stack<char> a2;
	int n;
	string line;
	char temp;
	
	ifstream girdi;
	ofstream cikti;
	
	girdi.open("input.txt");
	cikti.open("output.txt");
	
	while(getline(girdi,line)){
		
		n=line.length();
		
		for(int i=0;i<n;i++){
			a1.push(line[i]);	
		}
		
		
		while(!a1.empty()){
			
			
		if(a1.top()=='y'){
			a2.push(a1.top());
			a1.pop();		
		}
		
		else if(a1.top()!='y'){
			temp=a1.top();
			a1.pop();
			
			if(a2.top()!='y' || a2.empty()==1){
				a2.push(temp);
			}
			else if(a2.top()=='y') {
				while(a2.top()=='y'){
					a1.push(a2.top());
					a2.pop();
					if(a2.empty()==1){
						break;
					}
				}
				a2.push(temp);
			}	
		}	
	}
		
		
		for(int j=0;j<n;j++){
			cikti << a2.top();
			a2.pop();
		}
		cikti << endl;
		

}


}

