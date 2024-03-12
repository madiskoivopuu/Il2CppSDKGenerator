#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LootStatusComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LootStatusComponent"));
	}

	template <typename T = Il2CppString*> T& Tag() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Weight() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(LootStatusComponent*, uintptr_t))(Il2CppBase() + 0x17335A0))(this, targetObject);
	}

};

}
