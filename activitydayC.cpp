#include <iostream>
using namespace std;

int main(){
    cout << "Hello world!!! :D" << endl;

    cout << "Here are the first 20 prime numbers:" << endl;

    int count = 0; // number of prime numbers
    int i = 0; //integer iterator
    while (count <= 20){
        if (i > 1){
            int factors = 0;
            for (int st = 1; st <= i; st++){ // for every number from 1 to i, if there are more than 2 factors then i is not prime
                if (i % st == 0){
                    factors ++;
                }
            }
            if (factors <= 2){
                cout << int(i) << " is prime." << endl;
                count++;
            }
        }
        i++;
    }

    return 0;
}