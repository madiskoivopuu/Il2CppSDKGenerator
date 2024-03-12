#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotCountComponent"));
	}

	template <typename T = int32_t> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SlotCountComponent*, uintptr_t))(Il2CppBase() + 0x14840C0))(this, targetObject);
	}

};

}
