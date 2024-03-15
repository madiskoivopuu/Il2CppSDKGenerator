#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChestRewardEffectData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChestRewardEffectData"));
	}

	template <typename R = int32_t> R& TargetId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& EffectName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& IconName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Rarity> R& Rarity() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1740A1C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChestRewardEffectData*, uintptr_t))(Il2CppBase() + 0x1740A90))(this, reader);
	}

};

