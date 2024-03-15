#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDCustomizableBase
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDCustomizableBase"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _toDiactivateOnEdit() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<uintptr_t>*& _disactivated() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R SwitchCustomizationMode(bool isEditModeOn) {
		return ((R (*)(HUDCustomizableBase*, bool))(Il2CppBase() + 0x14509B8))(this, isEditModeOn);
	}

};

