#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EquipQuestComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EquipQuestComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1int32_t>*& ActiveSlotIndex() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(EquipQuestComponent*, Il2CppObject*))(Il2CppBase() + 0x137BD24))(this, target);
	}

};
