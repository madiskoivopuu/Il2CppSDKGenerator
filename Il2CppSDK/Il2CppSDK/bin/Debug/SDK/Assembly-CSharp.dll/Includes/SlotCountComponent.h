#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SlotCountComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SlotCountComponent"));
	}

	template <typename R = int32_t> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SlotCountComponent*, Il2CppObject*))(Il2CppBase() + 0x14840C0))(this, targetObject);
	}

};

