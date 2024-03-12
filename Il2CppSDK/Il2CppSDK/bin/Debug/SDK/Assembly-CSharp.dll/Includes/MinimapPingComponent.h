#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapPingComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapPingComponent"));
	}

	template <typename T = float> T& Lifetime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Radius() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(MinimapPingComponent*, uintptr_t))(Il2CppBase() + 0x12D39F8))(this, targetObject);
	}

};

}
