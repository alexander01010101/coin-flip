#include "coin_generator.h"
#include <cstdlib>


char FlipCoin(){

    // we generate 0 and 1
    int result = rand() % 2;
    
    return (result ==0)  ? 'H' : 'T';

}