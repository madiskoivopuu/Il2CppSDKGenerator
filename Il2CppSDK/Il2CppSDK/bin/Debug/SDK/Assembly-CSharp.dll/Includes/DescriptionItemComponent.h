#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionItemComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionItemComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& ShowCooldown() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& Hidden() {
		return *(R*)((uintptr_t)this + 0x19);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DescriptionItemComponent*, Il2CppObject*))(Il2CppBase() + 0xEBA380))(this, target);
	}

};

