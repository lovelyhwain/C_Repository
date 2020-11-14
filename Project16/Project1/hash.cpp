#include <iostream>
#include <string.h>
#include "hash.h"

using namespace std;

int Hash(const char* key)
{
    int sum = 0;
    int len = strlen(key);
    for (int i = 0; i < len; i++)
        sum += (key[i] * key[i]);
    return sum;
}

int main()
{
    const char* keys[] = { "bill", "lee", "pauline", "alan", "julie",
                    "mike", "elizabeth", "mark", "ashley", "peter",
                    "joan", "john", "charles", "mary", "emily" };

    myHash h(10);
    const int numkeys = 15;

    for (int i = 0; i < numkeys; i++)
    {
        int hk1 = h.Hash(keys[i]);
        int hk2 = hk1 % 10 +1;

        printf("%10s %10d %5d\n", keys[i], hk1, hk2);
    }
    return 1;
}