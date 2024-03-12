#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "RuneItem" 

class ClassRuneItem: RuneItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneItem"));
	}

	template <typename T = uintptr_t> T& _lifeTimePanel() {
		return *(T*)((uintptr_t)this + 0x100);
	}
	template <typename T = uintptr_t> T& _lifeTimeProgress() {
		return *(T*)((uintptr_t)this + 0x108);
	}
	template <typename T = float> T& _lifeTime() {
		return *(T*)((uintptr_t)this + 0x110);
	}
	template <typename T = int64_t> T& _endTime() {
		return *(T*)((uintptr_t)this + 0x118);
	}
	template <typename T = void*> T& _active() {
		return *(T*)((uintptr_t)this + 0x120);
	}

	template <typename T = bool> T get_IsEmptySlot() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159D150))(this);
	}
	template <typename T = uintptr_t> T get_SlotEntity() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159D15C))(this);
	}
	template <typename T = bool> T get_NeedShowGrade() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159D164))(this);
	}
	template <typename T = bool> T get_Active() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159CF10))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D1D8))(this, value);
	}
	template <typename T = void> T Lock(bool visual) {
		return ((T (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D358))(this, visual);
	}
	template <typename T = void> T Unlock(bool visual) {
		return ((T (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D464))(this, visual);
	}
	template <typename T = bool> T get_DragEnable() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159D574))(this);
	}
	template <typename T = void> T set_DragEnable(bool value) {
		return ((T (*)(ClassRuneItem*, bool))(Il2CppBase() + 0x159D594))(this, value);
	}
	template <typename T = void> T Bind(uintptr_t runePanel, uintptr_t entity, int32_t index, uintptr_t slot, Il2CppString* blueprint) {
		return ((T (*)(ClassRuneItem*, uintptr_t, uintptr_t, int32_t, uintptr_t, Il2CppString*))(Il2CppBase() + 0x159D5A0))(this, runePanel, entity, index, slot, blueprint);
	}
	template <typename T = void> T InitItem() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159D80C))(this);
	}
	template <typename T = void> T UpdateLifeTime() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159DA3C))(this);
	}
	template <typename T = void> T AddListeners() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159DE8C))(this);
	}
	template <typename T = void> T RemoveListeners() {
		return ((T (*)(ClassRuneItem*))(Il2CppBase() + 0x159E15C))(this);
	}
	template <typename T = void> T OnClassRuneChanged(uintptr_t data) {
		return ((T (*)(ClassRuneItem*, uintptr_t))(Il2CppBase() + 0x159E428))(this, data);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(ClassRuneItem*, float))(Il2CppBase() + 0x159E544))(this, deltaTime);
	}

};

}
