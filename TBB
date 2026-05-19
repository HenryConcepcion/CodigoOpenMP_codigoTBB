#include <iostream>
#include <tbb/parallel_for.h>

using namespace std;

int main() {

    tbb::parallel_for(0, 10, [](int i) {
        cout << "Iteracion "
             << i
             << endl;
    });

    return 0;
}
