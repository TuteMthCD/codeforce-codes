/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1971/F , nose si este link seguira funcionando
 */


#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

int main(int argc, char* argv[]) {
    int TestCases = 0;
    scanf("%d", &TestCases);

    for(int Case = 0; Case < TestCases; Case++) {

        int Radius = 0;
        scanf("%d", &Radius);

        int PointsCounter = 0;

        for(int x = 1; x <= Radius; x++) {

            int64_t ymin = sqrt(pow(Radius, 2) - x * x);
            int64_t ymax = sqrt(pow(Radius + 1, 2) - x * x);

            for(int64_t y = ymin; y <= ymax; y++)
                if(x + y >= Radius) {
                    double Distance = sqrt((int64_t)x * x + (int64_t)y * y);

                    if(Distance >= Radius && Distance < Radius + 1)
                        PointsCounter++;
                }
        }

        PointsCounter *= 4;
        printf("%d\n", PointsCounter);
    }

    return 0;
}
