#include <iostream>
using namespace std;

int main() {
    int niz[10] = {2, 4, 5, 1, 3, 7, 8, 10, 9, 6};
    int velicina = 10;

    for (int krajSortiranog = velicina - 1; krajSortiranog > 0;) {
        int noviKrajSortiranog = 0;
        for (int i = 0; i < krajSortiranog; i++) {
            if (niz[i] > niz[i + 1]) {
                int pom = niz[i];
                niz[i] = niz[i + 1];
                niz[i + 1] = pom;
                noviKrajSortiranog = i;
            }
        }
        krajSortiranog = noviKrajSortiranog;
    }
    for (int i = 0; i < velicina; i++) {
        cout << niz[i] << " ";
    }

    return 0;
}
