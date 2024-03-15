#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampBathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathComponent"));
	}

	template <typename R = Il2CppArray<FuelItem*>*> R& Fuel() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& MaxWorkTime() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	 Nullable1float>* GetTimeForItem(Il2CppString* itemName) {
		return ((Nullable1float>* (*)(CampBathComponent*, Il2CppString*))(Il2CppBase() + 0x15B390C))(this, itemName);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CampBathComponent*, Il2CppObject*))(Il2CppBase() + 0x15B3A08))(this, targetObject);
	}

};

