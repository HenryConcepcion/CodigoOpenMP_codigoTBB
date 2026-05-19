#include <iostream>
#include <omp.h>

using namespace std;

int main() {

    #pragma omp parallel for
    for(int i = 0; i < 10; i++) {
        cout << "Iteracion " << i
             << " ejecutada por hilo "
             << omp_get_thread_num()
             << endl;
    }

    return 0;
}
