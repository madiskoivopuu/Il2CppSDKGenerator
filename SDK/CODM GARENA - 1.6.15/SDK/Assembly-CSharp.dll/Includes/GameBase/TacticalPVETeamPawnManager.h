#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace GameBase {

class TacticalPVETeamPawnManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "GameBase", "TacticalPVETeamPawnManager"));
	}

	template <typename T = uintptr_t> static T& _c__Hotfix0_ctor() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& __Hotfix0_UpdatePlayerSpriteInfo() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = bool> T UpdatePlayerSpriteInfo(uintptr_t inPawnSprite, uintptr_t inPawn) {
		return ((T (*)(TacticalPVETeamPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x2797F90))(this, inPawnSprite, inPawn);
	}
	template <typename T = bool> T xLuaBaseProxy_UpdatePlayerSpriteInfo(uintptr_t P0, uintptr_t P1) {
		return ((T (*)(TacticalPVETeamPawnManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x27985E4))(this, P0, P1);
	}

};

}