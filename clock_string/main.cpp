/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1971/C, nose si este link seguira funcionando
 */

#include <algorithm>
#include <cstdio>
#include <vector>


struct Clock_t {
    int HandPosition = 0;
    enum {
        Red,
        Blue,
    } StringColor;
};

int main(int argc, char* argv[]) {

    int AmountTest = 0;
    scanf("%d", &AmountTest);

    for(int Cases = 0; Cases < AmountTest; Cases++) {
        std::vector<Clock_t> Strings(4);

        Strings[0].StringColor = Clock_t::Red;
        Strings[1].StringColor = Clock_t::Red;
        Strings[2].StringColor = Clock_t::Blue;
        Strings[3].StringColor = Clock_t::Blue;

        for(int i = 0; i < Strings.size(); i++)
            scanf("%d", &Strings[i].HandPosition);

        std::sort(Strings.begin(), Strings.end(), [](const Clock_t& a, const Clock_t& b) {
            return a.HandPosition < b.HandPosition && a.StringColor == b.StringColor; // mmmmmmmmmmmmm
        });

        bool Intersect = false;

        for(int i = Strings[0].HandPosition; i < Strings[1].HandPosition; i++)
            if(i == Strings[2].HandPosition || i == Strings[3].HandPosition)
                Intersect = !Intersect;

        printf("%s\n", Intersect ? "YES" : "NO");
    }


    return 0;
}
