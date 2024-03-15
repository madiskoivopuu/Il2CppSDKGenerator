#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SoundComponent*, Il2CppObject*))(Il2CppBase() + 0x1485068))(this, targetObject);
	}

};

