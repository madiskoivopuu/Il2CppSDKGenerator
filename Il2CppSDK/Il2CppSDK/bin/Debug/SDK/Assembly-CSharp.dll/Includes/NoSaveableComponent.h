#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NoSaveableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NoSaveableComponent"));
	}

	template <typename T = bool> T& SaveInLocation() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(NoSaveableComponent*, Il2CppObject*))(Il2CppBase() + 0x13B1DF0))(this, target);
	}

};

