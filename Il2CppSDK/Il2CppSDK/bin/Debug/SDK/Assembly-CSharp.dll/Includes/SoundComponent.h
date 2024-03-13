#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SoundComponent"));
	}

	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(SoundComponent*, Il2CppObject*))(Il2CppBase() + 0x1485068))(this, targetObject);
	}

};

