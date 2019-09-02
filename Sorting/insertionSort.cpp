#include <bits/stdc++.h> 

using namespace std;

void insertionASC(int A[]){

    int current = 0,
        j = 0;
    for(int i  = 1; i < 7; i++){ // 7 maximum array length
        current = A[i];
        j = i - 1;

        while(j >= 0 &&  A[j] > current){ // in example 5 > 2, true
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = current;
    }

}

void insertionDESC(int A[]){

    int current = 0,
        j = 0;
    for(int i = 1; i < 7; i++){ // 7 maximum array length
        current = A[i];
        j = i - 1;
        while(j >=0 && A[j] < current){ // in example 5 < 2 false
          A[j + 1] = A[j];
          j--;
        }
      A[j + 1] = current;
    }
}

int main(){

    int A[7] = {5,2,4,6,1,3};
    cout << "Unordered Array: \n\t";
    for(int i = 0; i < 7; i++){
        cout << A[i] << " ";
    }


    auto start = chrono::steady_clock::now();
    insertionASC(A);
    auto end = chrono::steady_clock::now();

    cout << "\n\nInsertion Sorted ASC:\n\t";
    for(int i = 0; i < 7; i++){
        cout << A[i] << " ";
    }
    cout << "\n\t\tTime taken  = " << chrono::duration_cast<chrono::nanoseconds>(end-start).count() << " [ns]" ;


    cout << endl << endl;
    start = chrono::steady_clock::now();
    insertionDESC(A);
    end = chrono::steady_clock::now();

    cout << "Insertion Sorted DESC: \n\t";
    for(int i = 0; i < 7; i++){
        cout << A[i] << " ";
    }
    cout <<"\n\t\tTime taken  = " << chrono::duration_cast<chrono::nanoseconds>(end-start).count() << " [ns]" ;

    return 0;
}