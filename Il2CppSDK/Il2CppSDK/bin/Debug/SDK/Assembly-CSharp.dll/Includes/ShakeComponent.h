#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ShakeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ShakeComponent"));
	}

	template <typename T = Il2CppString*> T& TriggerName() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& BoolName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& MaxRadius() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& CameraUniqueLookup() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ShakeComponent*, uintptr_t))(Il2CppBase() + 0x162FA1C))(this, targetObject);
	}

};

}
