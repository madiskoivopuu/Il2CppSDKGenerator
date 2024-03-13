#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipFxs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipFxs"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = Il2CppArray<uintptr_t>*> T Setup(HideHelper* hideHelper) {
		return ((T (*)(EquipFxs*, HideHelper*))(Il2CppBase() + 0x137B2CC))(this, hideHelper);
	}

};

