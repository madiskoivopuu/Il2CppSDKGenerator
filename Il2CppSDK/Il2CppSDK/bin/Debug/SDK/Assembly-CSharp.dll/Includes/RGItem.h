#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RGItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RGItem"));
	}

	template <typename T = Il2CppString*> T& TargetCondition() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SourceCondition() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Resource() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Creatures() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& Chance() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& UseShamanChance() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = int32_t> T& Count() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& MinCount() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x4C);
	}
	template <typename T = void*> T& MinDurability() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = void*> T& MaxDurability() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = bool> T IsValid(uintptr_t world, uintptr_t account, uintptr_t avatar, uintptr_t source) {
		return ((T (*)(RGItem*, uintptr_t, uintptr_t, uintptr_t, uintptr_t))(Il2CppBase() + 0x10BF2E8))(this, world, account, avatar, source);
	}

};

}
