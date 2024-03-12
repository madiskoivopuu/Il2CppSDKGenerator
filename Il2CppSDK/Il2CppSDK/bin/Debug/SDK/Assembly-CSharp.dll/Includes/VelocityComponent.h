#pragma once
#include <Il2Cpp/Il2Cpp.h>

class VelocityComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "VelocityComponent"));
	}

	template <typename T = float> T& X() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Y() {
		return *(T*)((uintptr_t)this + 0x14);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4B00))(this, targetObject);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4B9C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4BE0))(this, reader);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(VelocityComponent*, uintptr_t))(Il2CppBase() + 0x15C4C7C))(this, blueprintComponent);
	}

};

}
