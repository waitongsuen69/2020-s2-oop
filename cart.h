#include "meerkat.h"
#ifndef CART
#define CART


class cart {
public:
    cart();
    // create an empty cart object
    
    bool addMeerkat(meerkat cat);
    // adds a meerkat to the cart, returns false if full
    
    void emptyCart();
    // remove all meerkats from the cart
    
    void printMeerkats();
    // print the name, a space, the age, then a new line
                                    // for each meerkat in the order they were added
    
    int index;
    meerkat oncart[5];
};




#endif
