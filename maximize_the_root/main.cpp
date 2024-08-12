/*
 * La idea de este codigo es resolver este problema
 * https://codeforces.com/problemset/problem/1997/D, nose si este link seguira funcionando
 */
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <vector>

#define CAN_REST 1
#define CANNOT_REST 0

struct node_t {
    int64_t Value;
    std::vector<node_t*> Childs;
};

void printNodes(node_t* Node) {

    printf("value -> %ld \n", Node->Value);

    if(Node->Childs.size() < 0)
        return;

    for(node_t* Child : Node->Childs) {
        printNodes(Child);
    }
}


bool rest_to_child(node_t* Father) {
    if(Father->Value <= 0) {
        if(Father->Childs.size() > 0) {
            for(node_t* Child : Father->Childs) {
                if(rest_to_child(Child) == CANNOT_REST) {
                    return CANNOT_REST;
                }
            }
            Father->Value++;
        } else {
            return CANNOT_REST;
        }
    }
    if(Father->Childs.size() > 0) {
        for(node_t* child : Father->Childs) {
            if(rest_to_child(child) == CANNOT_REST) {
                return CANNOT_REST;
            }
        }
    }
    Father->Value--;
    return CAN_REST;
}

bool operation(node_t* Father) {
    if(Father->Childs.size() > 0) {
        for(node_t* Child : Father->Childs) {
            if(rest_to_child(Child) == CANNOT_REST)
                return CANNOT_REST;
        }
        Father->Value++;
        return CAN_REST;
    }
    return CANNOT_REST;
}


int main(int argc, char* argv[]) {

    uint32_t TestCases = 0;
    scanf("%d", &TestCases);

    for(uint32_t Case = 0; Case < TestCases; Case++) {

        uint32_t numNodes = 0;
        scanf("%d", &numNodes);

        node_t nodes[numNodes];
        memset(&nodes, 0, sizeof(node_t) * numNodes);

        // get values
        for(uint32_t i = 0; i < numNodes; i++) {
            scanf("%ld", &nodes[i].Value);
        }

        // links nodes
        for(uint32_t i = 1; i < numNodes; i++) {
            uint32_t ref = 0;
            scanf("%d", &ref);
            ref--; // empieza a contar desde el 1 //IDK

            node_t* father = &nodes[ref];
            node_t* child = &nodes[i];

            father->Childs.push_back(child);
        }

        bool canOperation = CAN_REST;
        while(canOperation) {
            // printf("------------------------\n");
            // printNodes(&nodes[0]);
            canOperation = operation(&nodes[0]);
        }

        printf("%ld\n", nodes[0].Value);
    }
    return 0;
}
