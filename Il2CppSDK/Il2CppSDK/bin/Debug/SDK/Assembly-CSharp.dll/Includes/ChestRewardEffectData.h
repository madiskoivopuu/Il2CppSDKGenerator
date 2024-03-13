#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardEffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardEffectData"));
	}

	template <typename T = int32_t> T& TargetId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& EffectName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = Il2CppString*> T& IconName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Rarity*> T& Rarity() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1740A1C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1740A90))(this, reader);
	}

};

