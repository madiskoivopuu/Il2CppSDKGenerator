#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseItemConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseItemConditionComponent"));
	}

	template <typename T = bool> T& OrEmpty() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& AnyTags() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& NoTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& EquipmentType() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(BaseItemConditionComponent*, uintptr_t))(Il2CppBase() + 0x166DDFC))(this, target);
	}
	template <typename T = bool> T Check(uintptr_t itemEntity) {
		return ((T (*)(BaseItemConditionComponent*, uintptr_t))(Il2CppBase() + 0x166DED8))(this, itemEntity);
	}

};

}
