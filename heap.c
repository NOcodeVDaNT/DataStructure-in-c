#include<stdio.h>
void insertMIN(int arr[], int size, int x) {

    arr[size]=x;
    int i=size;
    while (i >= 1 && arr[i/2] > a[i]) {
        int temp=arr[i];
        arr[i]=arr[i/2];
        arr[i/2]=temp;

        i=i/2;


    }

}



void insertMAX(int arr[], int size, int x) {

    arr[size]=x;
    int i=size;
    while (i >= 1 && arr[i/2] < a[i]) {
        int temp=arr[i];
        arr[i]=arr[i/2];
        arr[i/2]=temp;

        i=i/2;


    }

}


void heapifyMAXadjust(int a[],int size,int index)
{
    int largest = index;
    int left = 2 * index ;
    int right = 2 * index + 1;

    if(left<=size && a[left]>a[largest]){
        largest = left;
    }

    if(left<=size && a[right]>a[largest]){
        largest = right;
    }

    if(largest!=index){
        int temp=a[index];
        a[index]=a[largest];
        a[largest]=temp;
        heapifyMAXadjust(a,size,largest);
    }
    if(largest==i){
        return;
    }


}


int deleteMAXheap(int a[], int n) {
    if (n <= 0) {
        printf("Heap is empty.\n");
        return -1; 
    }

    
    int deleted= a[0];

    
    a[0] = a[n - 1];
    n--; // Reduce the size of the heap

   
    int i = 0;
    while (1) {
        int largest = i;        
        int left = 2 * i + 1;  
        int right = 2 * i + 2;  
        
        if (left < n && a[left] > a[largest]) {
            largest = left;
        }      
        if (right < n && a[right] > a[largest]) {
            largest = right;
        }  
        if (largest == i) {
            break;
        }
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;     
        i = largest;
    }

    return maxElement;
}


int main(){

}
