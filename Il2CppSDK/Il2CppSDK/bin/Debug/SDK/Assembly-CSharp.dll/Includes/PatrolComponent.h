#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PatrolComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PatrolComponent"));
	}

	template <typename T = Il2CppString*> T& NextPoint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& MagicName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Delay() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(PatrolComponent*, Il2CppObject*))(Il2CppBase() + 0x11E9CA4))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(PatrolComponent*, Il2CppObject*))(Il2CppBase() + 0x11E9D58))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(PatrolComponent*, uintptr_t))(Il2CppBase() + 0x11E9E24))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(PatrolComponent*, uintptr_t))(Il2CppBase() + 0x11E9EEC))(this, writer);
	}

};

