// Copyright (C) 2016 Tom Zander <tomz@freedommail.ch>
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef TRANSACTION_4_H
#define TRANSACTION_4_H

namespace Consensus {
enum TxMessageFields {
    TxEnd = 0,          // BoolTrue
    TxInPrevHash,       // sha256 (Bytearray)
    TxInPrevIndex,      // PositiveNumber
    TxInputStackItem,  // bytearray
    TxInputStackItemContinued, // bytearray
    TxOutValue,         // PositiveNumber (in satoshis)
    TxOutScript,        // bytearray
    TxRelativeBlockLock,// PositiveNumber
    TxRelativeTimeLock, // PositiveNumber
    CoinbaseMessage     // Bytearray. Max 100 bytes.
};
}

#endif
