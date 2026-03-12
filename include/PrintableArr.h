#ifndef PRINTABLEARR_h
#define PRINTABLEARR_h
#include <iostream>

class PrintableArr {
    friend std::ostream &operator<<(std::ostream &os,const PrintableArr &array);
public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~PrintableArr() = default;
};
#endif