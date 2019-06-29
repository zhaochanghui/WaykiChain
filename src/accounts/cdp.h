// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2017-2019 The WaykiChain Developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef CDP_H
#define CDP_H

// #include <memory>
#include <string>
// #include <vector>
// #include <unordered_map>

#include "persistence/leveldbwrapper.h"

#include "json/json_spirit_utils.h"
#include "json/json_spirit_value.h"
#include "commons/serialize.h"
#include "persistence/block.h"
#include "main.h"

// #include "key.h"
// #include "chainparams.h"
// #include "crypto/hash.h"
// #include "vote.h"

class CCdp {
private:
    uint64_t bcoins;   // collatorized basecoin amount
    uint64_t scoins;   // minted stablecoin amount

public:
    CCdp() {}
    CCdp(uint64_t bcoinsIn, uint64_t scoinsIn): bcoins(bcoinsIn), scoins(scoinsIn) {}

    uint64_t GetBcoins() const { return bcoins; }
    uint64_t GetScoins() const { return scoins; }

    IMPLEMENT_SERIALIZE(
        READWRITE(bcoins);
        READWRITE(scoins);
    )
};

#endif //CDP_H
