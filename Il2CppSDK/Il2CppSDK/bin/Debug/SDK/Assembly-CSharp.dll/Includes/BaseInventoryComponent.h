#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryComponent"));
	}

	template <typename R = Il2CppString*> R& SlotBlueprint() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& MaxCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = InventoryAccess*> R& Access() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = bool> R& ApplyInventoryMagics() {
		return *(R*)((uintptr_t)this + 0x1D);
	}

	template <typename R = bool> R PutAllowed() {
		return ((R (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CEE0))(this);
	}
	template <typename R = bool> R GetAllowed() {
		return ((R (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CEF0))(this);
	}
	template <typename R = int32_t> R GetMaxSlotsCount() {
		return ((R (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CF00))(this);
	}
	template <typename R = Il2CppString*> R GetSlotBlueprint(int32_t index) {
		return ((R (*)(BaseInventoryComponent*, int32_t))(Il2CppBase() + 0x166CF08))(this, index);
	}
	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(BaseInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x166CF7C))(this, targetObject);
	}
	template <typename R = bool> R IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((R (*)(BaseInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x166D030))(this, blueprintComponent);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(BaseInventoryComponent*, uintptr_t))(Il2CppBase() + 0x166D114))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(BaseInventoryComponent*, uintptr_t))(Il2CppBase() + 0x166D1E8))(this, writer);
	}

};

