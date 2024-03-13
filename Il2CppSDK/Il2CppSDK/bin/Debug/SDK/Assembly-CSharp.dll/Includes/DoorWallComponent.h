#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DoorWallComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DoorWallComponent"));
	}

	template <typename T = bool> T& Disposable() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = bool> T& Autoopen() {
		return *(T*)((uintptr_t)this + 0x11);
	}
	template <typename T = bool> T& NoFOW() {
		return *(T*)((uintptr_t)this + 0x12);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(DoorWallComponent*, Il2CppObject*))(Il2CppBase() + 0x1302E30))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DoorWallComponent*, uintptr_t))(Il2CppBase() + 0x1302ED4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DoorWallComponent*, uintptr_t))(Il2CppBase() + 0x1302F9C))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(DoorWallComponent*, Il2CppObject*))(Il2CppBase() + 0x1302FF0))(this, blueprintComponent);
	}

};

