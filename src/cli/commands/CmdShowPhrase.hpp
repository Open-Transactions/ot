// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDSHOWPHRASE_HPP
#define OPENTXS_CLIENT_CMDSHOWPHRASE_HPP

#include "CmdBase.hpp"

namespace opentxs
{

class CmdShowPhrase : public CmdBase
{
public:
    EXPORT CmdShowPhrase();
    virtual ~CmdShowPhrase();

    EXPORT int32_t run();

protected:
    virtual int32_t runWithOptions();
};

} // namespace opentxs

#endif // OPENTXS_CLIENT_CMDSHOWPHRASE_HPP
