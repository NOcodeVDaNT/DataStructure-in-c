#include<stdio.h>
void insertMIN(int arr[], int size, int x) {

    arr[size]=x;
    int i=size;
    while (i >= 1 && arr[i/2] > x) {
        int temp=arr[i];
        arr[i]=arr[i/2];
        arr[i/2]=temp;

        i=i/2;


    }

}



void insertMAX(int arr[], int size, int x) {

    arr[size]=x;
    int i=size;
    while (i >= 1 && arr[i/2] < x) {
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


}


int main(){

}
