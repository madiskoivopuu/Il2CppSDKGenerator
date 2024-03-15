#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CreateInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CreateInventoryComponent"));
	}

	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(CreateInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCB904))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CreateInventoryComponent*, uintptr_t))(Il2CppBase() + 0x1BCB99C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CreateInventoryComponent*, uintptr_t))(Il2CppBase() + 0x1BCBA08))(this, writer);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(CreateInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x1BCBA1C))(this, blueprintComponent);
	}

};

