#ifndef Blockchain_h
#define Blockchain_h

#include <vector>

class Blockchain
{
private:
    Block createGenesisBlock();
    std::vector<Block> chain;

public:
    Blockchain();

    std::vector<Block> getChain();
    Block* getLatestBlock();
    bool isChainValid();
    void printChain();
    void addBlock(TransactionData data);
};

#endif

