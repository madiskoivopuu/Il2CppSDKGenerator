#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BossDescriptionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BossDescriptionComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Phases() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Skills() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Difficulty*> T& Difficulty() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& LocationName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& ExitTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& ToLocationName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& LocationImage() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& BossTransparentImage() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& BestRewards() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(BossDescriptionComponent*, Il2CppObject*))(Il2CppBase() + 0x16C9C84))(this, target);
	}

};

