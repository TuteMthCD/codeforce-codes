/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1972/B //nose si este link seguira funcionando
 */

#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char* argv[]) {
    int TestCases, AmountCoins;
    std::vector<bool> Coins;

    std::cin >> TestCases;

    for(int i = 0; i < TestCases; i++) {
        std::cin >> AmountCoins;

        for(int j = 0; j < AmountCoins; j++) {
            char coin = getchar();

            if(coin == 'U' || coin == 'D')
                Coins.push_back(coin == 'U');
            else
                j--;
        }

        bool WinAlice = false;
        while(true) {
            auto ite = std::find(Coins.begin(), Coins.end(), true);

            WinAlice = !WinAlice;

            if(ite != Coins.end()) {
                Coins.erase(ite);
                if(Coins.size() > 1) {
                    for(int i = 1; i <= 2; i++)
                        *(ite + i) = ((std::rand() % 1) == 1);
                } else {
                    break;
                }

            } else
                break;
        }

        Coins.clear();

        std::cout << (WinAlice ? "YES" : "NO") << std::endl;
    }


    return 0;
}
