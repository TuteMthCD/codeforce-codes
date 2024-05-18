/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1971/F , nose si este link seguira funcionando
 */


#include <cmath>
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
            for(int y = Radius - x; y <= Radius; y++) {
                if(x + y >= Radius) {
                    double Distance = sqrt(x * x + y * y);

                    if(Distance >= Radius && Distance < Radius + 1) {
                        // printf("%d, %d, %f\n", x, y, Distance);
                        PointsCounter++;
                    }
                }
            }
        }
        PointsCounter *= 4;
        printf("%d\n", PointsCounter);
    }

    return 0;
}
