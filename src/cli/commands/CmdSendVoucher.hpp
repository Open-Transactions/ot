// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDSENDVOUCHER_HPP
#define OPENTXS_CLIENT_CMDSENDVOUCHER_HPP

#include "CmdBaseInstrument.hpp"

namespace opentxs
{

class CmdSendVoucher : public CmdBaseInstrument
{
public:
    EXPORT CmdSendVoucher();
    virtual ~CmdSendVoucher();

    EXPORT int32_t run(std::string myacct, std::string hisnym,
                       std::string amount, std::string memo);

protected:
    virtual int32_t runWithOptions();
};

} // namespace opentxs

#endif // OPENTXS_CLIENT_CMDSENDVOUCHER_HPP
