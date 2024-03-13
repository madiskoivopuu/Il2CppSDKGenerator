#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateInventoryComponent"));
	}

	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(CreateInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCB904))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(CreateInventoryComponent*, uintptr_t))(Il2CppBase() + 0x1BCB99C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(CreateInventoryComponent*, uintptr_t))(Il2CppBase() + 0x1BCBA08))(this, writer);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(CreateInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCBA1C))(this, blueprintComponent);
	}

};

