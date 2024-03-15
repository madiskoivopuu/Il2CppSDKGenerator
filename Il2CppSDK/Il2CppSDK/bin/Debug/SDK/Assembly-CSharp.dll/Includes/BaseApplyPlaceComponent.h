#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyPlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyPlaceComponent"));
	}

	template <typename R = ApplyPlaceParams*> R& Params() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppArray<ApplyPlaceItem*>*> R& Items() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& RandomCount() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseApplyPlaceComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC34C))(this, targetObject);
	}

};

