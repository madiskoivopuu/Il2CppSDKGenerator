#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SharedComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SharedComponent"));
	}

	template <typename R = bool> R& Value() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& CantSwitch() {
		return *(R*)((uintptr_t)this + 0x11);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SharedComponent*, Il2CppObject*))(Il2CppBase() + 0x162FC94))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FD30))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(SharedComponent*, uintptr_t))(Il2CppBase() + 0x162FDCC))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(SharedComponent*, Il2CppObject*))(Il2CppBase() + 0x162FE10))(this, blueprintComponent);
	}

};

