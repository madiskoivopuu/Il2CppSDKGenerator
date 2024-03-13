#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BaseInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseInventoryComponent"));
	}

	template <typename T = Il2CppString*> T& SlotBlueprint() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& MaxCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = InventoryAccess*> T& Access() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = bool> T& ApplyInventoryMagics() {
		return *(T*)((uintptr_t)this + 0x1D);
	}

	template <typename T = bool> T PutAllowed() {
		return ((T (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CEE0))(this);
	}
	template <typename T = bool> T GetAllowed() {
		return ((T (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CEF0))(this);
	}
	template <typename T = int32_t> T GetMaxSlotsCount() {
		return ((T (*)(BaseInventoryComponent*))(Il2CppBase() + 0x166CF00))(this);
	}
	template <typename T = Il2CppString*> T GetSlotBlueprint(int32_t index) {
		return ((T (*)(BaseInventoryComponent*, int32_t))(Il2CppBase() + 0x166CF08))(this, index);
	}
	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(BaseInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x166CF7C))(this, targetObject);
	}
	template <typename T = bool> T IsEqualsDefault(Il2CppObject* blueprintComponent) {
		return ((T (*)(BaseInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x166D030))(this, blueprintComponent);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(BaseInventoryComponent*, uintptr_t))(Il2CppBase() + 0x166D114))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(BaseInventoryComponent*, uintptr_t))(Il2CppBase() + 0x166D1E8))(this, writer);
	}

};

