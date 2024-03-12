#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void*> T GetTimeForItem(Il2CppString* itemName) {
		return ((T (*)(RavenNestComponent*, Il2CppString*))(Il2CppBase() + 0x138F8E0))(this, itemName);
	}
	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(RavenNestComponent*, uintptr_t))(Il2CppBase() + 0x138F9DC))(this, targetObject);
	}

};

}
