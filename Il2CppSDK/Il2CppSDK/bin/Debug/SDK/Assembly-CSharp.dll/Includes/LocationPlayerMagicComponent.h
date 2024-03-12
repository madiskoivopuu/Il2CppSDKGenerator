#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationPlayerMagicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationPlayerMagicComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Names() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& AsChildren() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(LocationPlayerMagicComponent*, uintptr_t))(Il2CppBase() + 0x17BAACC))(this, target);
	}

};

}
