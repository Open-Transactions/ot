// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDNOTIFYBAILMENT_HPP
#define OPENTXS_CLIENT_CMDNOTIFYBAILMENT_HPP

#include "CmdBase.hpp"

#include <cstdint>
#include <string>

namespace opentxs
{

class CmdNotifyBailment : public CmdBase
{
public:
    EXPORT CmdNotifyBailment();
    virtual ~CmdNotifyBailment();

    EXPORT std::int32_t run(
        std::string server,
        std::string mynym,
        std::string hisnym,
        std::string mypurse,
        std::string request,
        std::string amount);

protected:
    std::int32_t runWithOptions() override;
};

}  // namespace opentxs

#endif  // OPENTXS_CLIENT_CMDNOTIFYBAILMENT_HPP
