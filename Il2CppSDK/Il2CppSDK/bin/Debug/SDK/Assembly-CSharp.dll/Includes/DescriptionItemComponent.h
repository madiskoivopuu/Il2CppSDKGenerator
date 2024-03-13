#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionItemComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& ShowCooldown() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& Hidden() {
		return *(T*)((uintptr_t)this + 0x19);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DescriptionItemComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA380))(this, target);
	}

};

