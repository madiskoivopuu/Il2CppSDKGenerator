#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class CampBathFuelPopup : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CampBathFuelPopup"));
	}

	template <typename R = FuelListView*> R& _list() {
		return *(R*)((uintptr_t)this + 0x78);
	}

	template <typename R = void> R OnShow() {
		return ((R (*)(CampBathFuelPopup*))(Il2CppBase() + 0x15B3AB4))(this);
	}

};

