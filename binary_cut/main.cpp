/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1971/D, nose si este link seguira funcionando
 */

#include <cstdio>
#include <cstring>
#include <string>

std::string getStringInput(void) {
    char buff[501];
    scanf("%500s", buff);
    return std::string(buff);
}

int main(int argc, char* argv[]) {

    int TestCases = 0;

    scanf("%d", &TestCases);
    for(int Case = 0; Case < TestCases; Case++) {
        std::string Binary = getStringInput();

        int Counter = 1;
        int EvilSwitch = 0;

        for(int i = 0; i < Binary.size() - 1; i++) { // -1 to avoid out of bounds
            if(Binary[i] != Binary[i + 1]) {
                Counter++;
            }

            if(Binary[i] == '0' && Binary[i + 1] == '1') {
                EvilSwitch = 1;
            }
        }
        printf("%d \n", Counter - EvilSwitch);
    }

    return 0;
}
