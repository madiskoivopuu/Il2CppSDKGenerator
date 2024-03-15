#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KefirIdPlayerView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KefirIdPlayerView"));
	}

	template <typename R = uintptr_t> R& ImageBackground() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& TextName() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& TextBattleTag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& TextLevel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& ImageStatus() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R Init(LinkingPlayerData playerData, bool isSelected) {
		return ((R (*)(KefirIdPlayerView*, LinkingPlayerData, bool))(Il2CppBase() + 0x14E9540))(this, playerData, isSelected);
	}

};

