#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneBuffInfoContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneBuffInfoContainer"));
	}

	template <typename T = uintptr_t> T& _scrollHolder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _content() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _flyingContent() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _flyingTarget() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _buffs() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _buffPrefab() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _flyingBuffs() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _playerClassType() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _isInited() {
		return *(T*)((uintptr_t)this + 0x59);
	}
	template <typename T = Il2CppList<int32_t>*> T& _runeInFly() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T Bind(uintptr_t runePanel) {
		return ((T (*)(RuneBuffInfoContainer*, uintptr_t))(Il2CppBase() + 0x11A7600))(this, runePanel);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7F64))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7F68))(this);
	}
	template <typename T = void> T AddListeners() {
		return ((T (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7808))(this);
	}
	template <typename T = void> T RemoveListeners() {
		return ((T (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7FC4))(this);
	}
	template <typename T = void> T OnClassRuneChanged(uintptr_t data) {
		return ((T (*)(RuneBuffInfoContainer*, uintptr_t))(Il2CppBase() + 0x11A813C))(this, data);
	}
	template <typename T = void> T OnClassRuneDeactivated(void* playerClasses, uintptr_t data) {
		return ((T (*)(RuneBuffInfoContainer*, void*, uintptr_t))(Il2CppBase() + 0x11A8144))(this, playerClasses, data);
	}
	template <typename T = void> T UpdateActiveBuffs(int32_t changedSlot) {
		return ((T (*)(RuneBuffInfoContainer*, int32_t))(Il2CppBase() + 0x11A7984))(this, changedSlot);
	}
	template <typename T = void> T UpdateAllBuffs() {
		return ((T (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A8CA8))(this);
	}
	template <typename T = void> T UpdateAllBuffs_1(Il2CppArray<uintptr_t>* classRunes) {
		return ((T (*)(RuneBuffInfoContainer*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11A9144))(this, classRunes);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(RuneBuffInfoContainer*, bool))(Il2CppBase() + 0x11A95C8))(this, isActive);
	}

};

}
