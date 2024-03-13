#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NeedRemoveEmptyComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NeedRemoveEmptyComponent"));
	}

	template <typename T = bool> T& Value() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& SpawnObject() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(NeedRemoveEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x13A9540))(this, target);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(NeedRemoveEmptyComponent*, Il2CppObject*))(Il2CppBase() + 0x13A95E0))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(NeedRemoveEmptyComponent*, uintptr_t))(Il2CppBase() + 0x13A96AC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(NeedRemoveEmptyComponent*, uintptr_t))(Il2CppBase() + 0x13A9814))(this, writer);
	}

};

