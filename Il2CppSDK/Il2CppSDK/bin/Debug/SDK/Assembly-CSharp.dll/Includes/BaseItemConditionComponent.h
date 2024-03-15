#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseItemConditionComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseItemConditionComponent"));
	}

	template <typename R = bool> R& OrEmpty() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& AnyTags() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& NoTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = EquipmentType> R& EquipmentType() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(BaseItemConditionComponent*, Il2CppObject*))(Il2CppBase() + 0x166DDFC))(this, target);
	}
	template <typename R = bool> R Check(ItemEntity* itemEntity) {
		return ((R (*)(BaseItemConditionComponent*, ItemEntity*))(Il2CppBase() + 0x166DED8))(this, itemEntity);
	}

};

