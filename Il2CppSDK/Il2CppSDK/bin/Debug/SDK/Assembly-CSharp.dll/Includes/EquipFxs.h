#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipFxs
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipFxs"));
	}

	template <typename R = Il2CppArray<Item*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = Il2CppArray<uintptr_t>*> R Setup(HideHelper* hideHelper) {
		return ((R (*)(EquipFxs*, HideHelper*))(Il2CppBase() + 0x137B2CC))(this, hideHelper);
	}

};

