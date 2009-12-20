//==========================  Open Steamworks  ================================
//
// This file is part of the Open Steamworks project. All individuals associated
// with this project do not claim ownership of the contents
// 
// The code, comments, and all related files, projects, resources,
// redistributables included with this project are Copyright Valve Corporation.
// Additionally, Valve, the Valve logo, Half-Life, the Half-Life logo, the
// Lambda logo, Steam, the Steam logo, Team Fortress, the Team Fortress logo,
// Opposing Force, Day of Defeat, the Day of Defeat logo, Counter-Strike, the
// Counter-Strike logo, Source, the Source logo, and Counter-Strike Condition
// Zero are trademarks and or registered trademarks of Valve Corporation.
// All other trademarks are property of their respective owners.
//
//=============================================================================

#ifndef EGAMECOORDINATORRESULT_H
#define EGAMECOORDINATORRESULT_H
#ifdef _WIN32
#pragma once
#endif

#include "EnumString.h"

enum EGameCoordinatorResult
{
	k_EGameCoordinatorResultOK,
	k_EGameCoordinatorResultDenied, // probably named this
};

Begin_Enum_String( EGameCoordinatorResult )
{
	Enum_String( k_EGameCoordinatorResultOK );
	Enum_String( k_EGameCoordinatorResultDenied );
}
End_Enum_String;

#endif // EGAMECOORDINATORRESULT_H
