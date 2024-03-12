#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizableBase"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& _toDiactivateOnEdit() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _disactivated() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T SwitchCustomizationMode(bool isEditModeOn) {
		return ((T (*)(HUDCustomizableBase*, bool))(Il2CppBase() + 0x14509B8))(this, isEditModeOn);
	}

};

}
