#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdPlayerView"));
	}

	template <typename T = uintptr_t> T& ImageBackground() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& TextName() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& TextBattleTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& TextLevel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& ImageStatus() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T Init(LinkingPlayerData* playerData, bool isSelected) {
		return ((T (*)(KefirIdPlayerView*, LinkingPlayerData*, bool))(Il2CppBase() + 0x14E9540))(this, playerData, isSelected);
	}

};

