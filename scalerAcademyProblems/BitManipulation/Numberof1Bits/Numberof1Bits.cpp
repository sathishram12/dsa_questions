
#include <vector>

using namespace std;
int numSetBits(int A) {
    if (A == 0) {
        return 0;
    } else {
        return A && 1  + numSetBits(A>>1);
    }
}