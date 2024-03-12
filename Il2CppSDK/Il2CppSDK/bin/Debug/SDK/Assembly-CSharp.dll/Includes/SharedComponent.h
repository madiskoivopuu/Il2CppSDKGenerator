#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SharedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SharedComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& CantSwitch() {
		return *(T*)((uintptr_t)this + 0x11);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FC94))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FD30))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FDCC))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(uintptr_t blueprintComponent) {
		return ((T (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FE10))(this, blueprintComponent);
	}

};

}
