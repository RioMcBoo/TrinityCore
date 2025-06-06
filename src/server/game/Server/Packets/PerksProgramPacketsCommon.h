/*
 * This file is part of the TrinityCore Project. See AUTHORS file for Copyright information
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef TRINITYCORE_PERKS_PROGRAM_PACKETS_COMMON_H
#define TRINITYCORE_PERKS_PROGRAM_PACKETS_COMMON_H

#include "PacketUtilities.h"

namespace WorldPackets::PerksProgram
{
struct PerksVendorItem
{
    int32 VendorItemID = 0;
    int32 MountID = 0;
    int32 BattlePetSpeciesID = 0;
    int32 TransmogSetID = 0;
    int32 ItemModifiedAppearanceID = 0;
    int32 TransmogIllusionID = 0;
    int32 ToyID = 0;
    int32 WarbandSceneID = 0;
    int32 Price = 0;
    int32 OriginalPrice = 0;
    Timestamp<> AvailableUntil;
    bool Disabled = false;
    bool DoesNotExpire = false;
};

ByteBuffer& operator<<(ByteBuffer& data, PerksVendorItem const& perksVendorItem);
}

#endif // TRINITYCORE_PERKS_PROGRAM_PACKETS_COMMON_H
