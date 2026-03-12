#include "PrintableArr.h"

std::ostream &operator<<(std::ostream &os, const PrintableArr& array) {
    array.print(os);
    return os;
}