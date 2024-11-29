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
int main(){

}