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

	template <typename T = Nullable1float>*> T GetTimeForItem(Il2CppString* itemName) {
		return ((T (*)(RavenNestComponent*, Il2CppString*))(Il2CppBase() + 0x138F8E0))(this, itemName);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(RavenNestComponent*, Il2CppObject*))(Il2CppBase() + 0x138F9DC))(this, targetObject);
	}

};

