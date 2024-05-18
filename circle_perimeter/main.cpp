/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1971/F , nose si este link seguira funcionando
 */


#include <cmath>
#include <cstdio>

double EuclideanDistance(int x, int y) {
    return sqrt(x * x + y * y);
}


int main(int argc, char* argv[]) {
    int TestCases = 0;
    scanf("%d", &TestCases);

    for(int Case = 0; Case < TestCases; Case++) {

        int Radius = 0;
        scanf("%d", &Radius);

        int PointsCounter = 0;

        for(int x = -Radius; x <= Radius; x++) {
            for(int y = -Radius; y <= Radius; y++) {
                double Distance = EuclideanDistance(x, y);

                if(Distance >= Radius && Distance < Radius + 1)
                    PointsCounter++;
            }
        }

        printf("%d\n", PointsCounter);
    }

    return 0;
}
