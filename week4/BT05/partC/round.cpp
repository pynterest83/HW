#include <cmath>

int round__(double num) {
    return (int)std::round(num);
}

int round_(double num) {
    if (num >= 0) {
        return (int)(num + 0.5);
    } else {
        return (int)(num - 0.5);
    }
}
