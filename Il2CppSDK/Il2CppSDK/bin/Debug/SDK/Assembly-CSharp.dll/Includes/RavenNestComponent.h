#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RavenNestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RavenNestComponent"));
	}

	template <typename R = Il2CppArray<FuelItem*>*> R& Fuel() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	 Nullable1float>* GetTimeForItem(Il2CppString* itemName) {
		return ((Nullable1float>* (*)(RavenNestComponent*, Il2CppString*))(Il2CppBase() + 0x138F8E0))(this, itemName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RavenNestComponent*, Il2CppObject*))(Il2CppBase() + 0x138F9DC))(this, targetObject);
	}

};

