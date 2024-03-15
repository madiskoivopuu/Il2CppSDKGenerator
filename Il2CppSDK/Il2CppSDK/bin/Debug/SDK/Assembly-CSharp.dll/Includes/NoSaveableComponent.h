#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoSaveableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoSaveableComponent"));
	}

	template <typename R = bool> R& SaveInLocation() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(NoSaveableComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1DF0))(this, target);
	}

};

