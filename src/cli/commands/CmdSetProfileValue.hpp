// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_CLIENT_CMDSETPROFILEVALUE_HPP
#define OPENTXS_CLIENT_CMDSETPROFILEVALUE_HPP

#include "CmdBase.hpp"

#include <cstdint>
#include <string>

namespace opentxs
{

class CmdSetProfileValue : public CmdBase
{
public:
    CmdSetProfileValue();

    std::int32_t run(
        std::string mynym,
        const std::string& section,
        const std::string& type,
        const std::string& value);

    ~CmdSetProfileValue() = default;

private:
    template <typename L, typename V>
    bool section_exists(const L& list, const V value)
    {
        for (const auto& item : list) {
            if (item.first == value) { return true; }
        }

        return false;
    }

    std::int32_t runWithOptions() override;
};
}  // namespace opentxs
#endif  // OPENTXS_CLIENT_CMDSETPROFILEVALUE_HPP
