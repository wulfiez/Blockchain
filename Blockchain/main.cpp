#include <iostream>
#include <ctime>
#include <vector>

#include "TransactionData.h"
#include "Block.h"
#include "Blockchain.h"

using namespace std;

int main()
{
    Blockchain Coin;
    TransactionData data;
    time_t dataTime;
    data.amount = 0.01;
    data.receiverKey = "Nikita";
    data.senderKey = "Jackob";
    data.timestamp = time(&dataTime);
    Coin.addBlock(data);
    Coin.printChain();

    return 0;
}