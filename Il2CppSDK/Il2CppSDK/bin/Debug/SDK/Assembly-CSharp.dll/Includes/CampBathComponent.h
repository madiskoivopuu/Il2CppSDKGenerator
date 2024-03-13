#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CampBathComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Fuel() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& MaxWorkTime() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Nullable1float>*> T GetTimeForItem(Il2CppString* itemName) {
		return ((T (*)(CampBathComponent*, Il2CppString*))(Il2CppBase() + 0x15B390C))(this, itemName);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(CampBathComponent*, Il2CppObject*))(Il2CppBase() + 0x15B3A08))(this, targetObject);
	}

};

