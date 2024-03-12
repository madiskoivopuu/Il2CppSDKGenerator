#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItemDragged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemDragged"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _gradeText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& SlotEntity() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& RectTransform() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& Id() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& IsRuneItem() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = bool> T& IsMaxGrade() {
		return *(T*)((uintptr_t)this + 0x3D);
	}
	template <typename T = bool> T& Permanent() {
		return *(T*)((uintptr_t)this + 0x3E);
	}
	template <typename T = int32_t> T& RuneCount() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> T& _index() {
		return *(T*)((uintptr_t)this + 0x44);
	}
	template <typename T = uintptr_t> T& _slot() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _parentId() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& _runeInventoryId() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppString*> T& _runeBlueprint() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& _grade() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = void*> T& _handler() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = uintptr_t> T& _playerClassType() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& RuneItemState() {
		return *(T*)((uintptr_t)this + 0x7C);
	}

	template <typename T = uintptr_t> T get_Item() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x135286C))(this);
	}
	template <typename T = uintptr_t> T get_SlotEntity() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352970))(this);
	}
	template <typename T = void> T set_SlotEntity(uintptr_t value) {
		return ((T (*)(RuneItemDragged*, uintptr_t))(Il2CppBase() + 0x1352978))(this, value);
	}
	template <typename T = uintptr_t> T get_Slot() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352980))(this);
	}
	template <typename T = uintptr_t> T get_ParentEntity() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352988))(this);
	}
	template <typename T = uintptr_t> T get_RectTransform() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352A84))(this);
	}
	template <typename T = void> T set_RectTransform(uintptr_t value) {
		return ((T (*)(RuneItemDragged*, uintptr_t))(Il2CppBase() + 0x1352A8C))(this, value);
	}
	template <typename T = int32_t> T get_Id() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352A94))(this);
	}
	template <typename T = void> T set_Id(int32_t value) {
		return ((T (*)(RuneItemDragged*, int32_t))(Il2CppBase() + 0x1352A9C))(this, value);
	}
	template <typename T = int32_t> T get_Index() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AA4))(this);
	}
	template <typename T = Il2CppString*> T get_RuneBlueprint() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AAC))(this);
	}
	template <typename T = bool> T get_IsRuneItem() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AB4))(this);
	}
	template <typename T = void> T set_IsRuneItem(bool value) {
		return ((T (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352ABC))(this, value);
	}
	template <typename T = bool> T get_IsMaxGrade() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AC8))(this);
	}
	template <typename T = void> T set_IsMaxGrade(bool value) {
		return ((T (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352AD0))(this, value);
	}
	template <typename T = bool> T get_Permanent() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352ADC))(this);
	}
	template <typename T = void> T set_Permanent(bool value) {
		return ((T (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1352AE4))(this, value);
	}
	template <typename T = int32_t> T get_RuneCount() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352AF0))(this);
	}
	template <typename T = void> T set_RuneCount(int32_t value) {
		return ((T (*)(RuneItemDragged*, int32_t))(Il2CppBase() + 0x1352AF8))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352B00))(this);
	}
	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352B08))(this);
	}
	template <typename T = uintptr_t> T get_RuneItemState() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x1352CD8))(this);
	}
	template <typename T = void> T set_RuneItemState(uintptr_t value) {
		return ((T (*)(RuneItemDragged*, uintptr_t))(Il2CppBase() + 0x1352CE0))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t runePanel, Il2CppString* blueprint, int32_t index, bool isRuneItem) {
		return ((T (*)(RuneItemDragged*, uintptr_t, Il2CppString*, int32_t, bool))(Il2CppBase() + 0x1352CE8))(this, runePanel, blueprint, index, isRuneItem);
	}
	template <typename T = void> T Close() {
		return ((T (*)(RuneItemDragged*))(Il2CppBase() + 0x135343C))(this);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1353500))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(RuneItemDragged*, bool))(Il2CppBase() + 0x1353504))(this, visual);
	}

};

}
