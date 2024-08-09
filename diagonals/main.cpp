
/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1995/A, nose si este link seguira funcionando
 */

#include <cstdint>
#include <cstdio>
#include <sys/types.h>
#include <vector>

int main(int argc, char* argv[]) {
    int TestCases = 0;

    scanf("%d", &TestCases);

    for(int Case = 0; Case < TestCases; Case++) {

        uint32_t Side = 0;
        int32_t Chips = 0;

        scanf("%d %d", &Side, &Chips);

        std::vector<uint32_t> Diagonals = { Side }; // tamaño del vector lado +1.

        for(uint32_t i = Side - 1; i > 0; i--) {
            Diagonals.push_back(i);
            Diagonals.push_back(i);
        }

        uint32_t DiagonalsUsedCounter = 0;
        for(int i = 0; i < Diagonals.size() && Chips > 0; i++) {
            Chips -= Diagonals[i];
            DiagonalsUsedCounter++;
        }
        printf("%d\n", DiagonalsUsedCounter);
    }
    return 0;
}
