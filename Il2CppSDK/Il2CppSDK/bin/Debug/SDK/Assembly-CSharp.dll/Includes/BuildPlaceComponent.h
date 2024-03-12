#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BuildPlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BuildPlaceComponent"));
	}

	template <typename T = uintptr_t> T& Fill() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(BuildPlaceComponent*, uintptr_t))(Il2CppBase() + 0x15A4EE0))(this, targetObject);
	}

};

}
