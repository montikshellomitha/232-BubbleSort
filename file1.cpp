#include <iostream>
#include <string>
using namespace std;

int arr[20];  // Deklarasi variable global array dengan panjang 20
int n;  // Deklarasi variable global n untuk menyimpan elemen pada array

void input(){  // Prosedur input
    int d;
    while (true){
        cout << "Masukkan banyaknya elemen array: ";
        cin >> n;
        if (n <= 20) {
            break;
        }
        else {
            cout << "\nArray maksimal 20 elemen. \n" << endl;
        }
    }
    cout << endl;
    cout << "=====================" << endl;
    cout << "Masukkan elemen array" << endl;
    cout << "=====================" << endl;

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i << " = ";
        cin >> arr[i];
    }
}

void bubbleSortArray(){
    int pass = 1;  //Step 1
    do {
        for (int j=0;j<=n-1-pass;j++){ //Step 2
            if (arr[j] > arr[j+1]) {    //Step 3
                int temp;                 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        pass = pass + 1;  //Step 4
    }while(pass <= n-1);  //Step 5
}

void display(){
     cout << "================================" << endl;
     cout << "Elemen Array yang telah tersusun" << endl;
     cout << "================================" << endl;
     cout << endl;
     for (int j= 0;j<n;j++){
         cout << arr[j];
         if (j<n-1){
             cout << "-->>";
         }
     }
}

int main(){
    input();
    bubbleSortArray();
    display();
}

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

