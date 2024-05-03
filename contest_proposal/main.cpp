
/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1972/A
 */

#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <vector>

int getIntInput() {
    std::string input;
    input.reserve(10);

    std::scanf("%s", input.data());

    return atoi(input.data());
}

int main(int argc, char* argv[]) {
    int AmountTest;

    std::scanf("%d", &AmountTest);

    for(int test = 0; test < AmountTest; test++) {
        std::vector<int> An, Bn;
        int AmountProblems, CountProblems;


        std::scanf("%d", &AmountProblems);

        for(int i = 0; i < AmountProblems; i++)
            An.push_back(getIntInput());

        for(int i = 0; i < AmountProblems; i++)
            Bn.push_back(getIntInput());

        std::sort(An.begin(), An.end());
        std::sort(Bn.begin(), Bn.end());

        auto IteA = An.begin();
        auto IteB = Bn.begin();

        while(IteA != An.end() && IteB != Bn.end()) {
            if(*IteA <= *IteB) {
                IteA++;
                IteB++;
            } else {
                An.erase(An.end() - 1);
                An.insert(IteA, *IteB);
                CountProblems++;
                IteA = An.begin();
                IteB = Bn.begin();
            }
        }
        printf("%d\n", CountProblems);

        CountProblems = 0;
        AmountProblems = 0;
        An.clear();
        Bn.clear();
    }


    return 0;
}
