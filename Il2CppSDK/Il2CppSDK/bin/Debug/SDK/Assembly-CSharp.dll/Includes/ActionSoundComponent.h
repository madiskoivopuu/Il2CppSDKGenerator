#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ActionSoundComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ActionSoundComponent"));
	}

	template <typename T = Il2CppString*> T& Start() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Apply() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Target() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& Break() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ActionSoundComponent*, uintptr_t))(Il2CppBase() + 0x18ACC4C))(this, targetObject);
	}

};

}
