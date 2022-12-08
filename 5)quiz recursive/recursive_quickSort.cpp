#include <iostream>
#include <fstream>

using namespace std;

void printArr(int arr[], int size)
{
    for (int i=0; i <size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

 int partition(int A[],int p, int r){
    int tmp;
    int pivot = A[r];
    int i = p-1;

    for(int j=p; j<=r-1; j++)
    {
        if(A[j]<=pivot)
        {
            i++;
            tmp=A[i];
            A[i]=A[j];
            A[j]=tmp;
        }
    }
    tmp=A[i+1];
    A[i+1]=A[r];
    A[r]=tmp;
    return i+1;
}

void quickSort(int A[],int p, int r)
{
    int q;
    if(p<r)
    {
        q=partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q,r);
    }
}

int main(){
	
	int dizi[100],n=0;
    
	ifstream input;
	input.open ("input.txt");
	
	while(!input.eof()){    // Satýr satýr okudugu yer
		
		input >> dizi[n];
		n++;
		
		if(n==20){
			n=0;
			quickSort(dizi,0,19);
	        printArr(dizi,20);
		}	
	}
}
