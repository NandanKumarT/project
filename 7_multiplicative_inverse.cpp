#include <iostream>
using namespace std;

int main() {
    int n, m = 1, mod;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the modulus: ";
    cin >> mod;

        //Bruteforce
    while (((n * m) % mod) != 1) {
        m++ ;
    }

    cout << "The multiplicative inverse is: " << m << endl;
    cout<<"Name :  Ashwini R, Nandan Kumar.T "<<endl<<"Roll No : 02 and 19"<<endl;
    return 0;
}
