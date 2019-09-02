#include <bits/stdc++.h>

// due date:  October First
using namespace std;

#define MAXN 100
#define MAXM 100


vector < vector < unsigned long long int > > Matrix(MAXN, vector<unsigned  long long int>(MAXM,0));

unsigned long long int pacing(long long int a, long long int b){

    return abs(a - b);
}

bool itsContained(int   i, int  j){

    if(Matrix[i][j]) return true;
    else return false;
}

void walkingThrough(){



}


int main(){

    int N = 0, M = 0; cin >> N >> M;

    Matrix.resize(N, vector<unsigned long long int>(M));


    //              Pseudo Random Generator

    random_device random_device;
    mt19937 random_engine(random_device());
    uniform_int_distribution<int> distribution_1_1000(1, 9);


    for(auto i =  0; i < N; i++){
        for(auto j =  0; j  < M; j++){
            Matrix[i][j] = distribution_1_1000(random_engine);
        }
        cout << endl;
    }
    for(auto i =  0; i < N; i++){
        for(auto j =  0; j  < M; j++){
            cout << Matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(auto i =  0; i < N; i++){
        for(auto j =  0; j  < M; j++){
            cout <<"\n Minimum is: " <<min( { pacing(i, j + 1), pacing(i, j - 1), pacing(i + 1, j), pacing(i - 1, j) } ) << endl;
        }
    }



    return 0;
}