#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RandomGroupComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RandomGroupComponent"));
	}

	template <typename R = Il2CppArray<RGItem*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MaxItemsCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(RandomGroupComponent*, Il2CppObject*))(Il2CppBase() + 0x171181C))(this, targetObject);
	}

};

