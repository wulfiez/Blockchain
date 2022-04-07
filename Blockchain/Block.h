#ifndef Block_h
#define Block_h

#include "TransactionData.h"

class Block
{
private:
    int index;
    size_t blockHash;
    size_t generateHash();
    size_t previousHash;

public:
    Block(int idx, TransactionData d, size_t prevHash);

    int getIndex();

    size_t getPrevHash();

    size_t getHash();

    TransactionData data;

    bool isHashValid();
};

#endif
