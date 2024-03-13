#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseApplyPlaceComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseApplyPlaceComponent"));
	}

	template <typename T = ApplyPlaceParams*> T& Params() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Items() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& RandomCount() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseApplyPlaceComponent*, Il2CppObject*))(Il2CppBase() + 0xFBC34C))(this, targetObject);
	}

};

