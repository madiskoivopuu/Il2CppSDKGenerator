#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoorWallComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoorWallComponent"));
	}

	template <typename R = bool> R& Disposable() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = bool> R& Autoopen() {
		return *(R*)((uintptr_t)this + 0x11);
	}
	template <typename R = bool> R& NoFOW() {
		return *(R*)((uintptr_t)this + 0x12);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(DoorWallComponent*, Il2CppObject*))(Il2CppBase() + 0x1302E30))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DoorWallComponent*, uintptr_t))(Il2CppBase() + 0x1302ED4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DoorWallComponent*, uintptr_t))(Il2CppBase() + 0x1302F9C))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(DoorWallComponent*, Il2CppObject*))(Il2CppBase() + 0x1302FF0))(this, blueprintComponent);
	}

};

