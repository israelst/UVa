#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

//Fatores
int F[1001];
int nf;

void fatora (long long int q){
    for (int i=2; i<=q; i++)
        while(q % i == 0){
            F[++nf] = i;
            q = q / i;
        }
}

int main() {
    int i, n, br;
    int w[1001];
    while(cin >> n, n) {
        nf = 0;
        br = 0;
        cout <<  setw(3) << n << "! =";
        for(i=0; i<=1001; i++)
            w[i] = 0;

        for(i=2; i<=n; i++)
            fatora(i);

        for(i=1; i<=nf; i++) 
            w[F[i]]++;

        for(i=2; i<=1001; i++)
            if(w[i]){
                if(br++ == 15){
                    br = 1;
                    cout << endl << "      ";
                }
                cout << setw(3) << w[i];
            }
        cout << endl;
    }
    return 0;
}
