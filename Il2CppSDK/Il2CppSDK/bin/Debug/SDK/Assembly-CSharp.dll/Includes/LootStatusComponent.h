#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LootStatusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LootStatusComponent"));
	}

	template <typename R = Il2CppString*> R& Tag() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Weight() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LootStatusComponent*, Il2CppObject*))(Il2CppBase() + 0x17335A0))(this, targetObject);
	}

};

