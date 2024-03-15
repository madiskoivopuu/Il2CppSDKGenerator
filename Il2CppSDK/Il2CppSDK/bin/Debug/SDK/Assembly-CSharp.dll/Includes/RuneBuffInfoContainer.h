#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneBuffInfoContainer
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneBuffInfoContainer"));
	}

	template <typename R = uintptr_t> R& _scrollHolder() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _content() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _flyingContent() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _flyingTarget() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	 Il2CppList<RuneBuffInfoItem*>*& _buffs() {
		return *(Il2CppList<RuneBuffInfoItem*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = RuneBuffInfoItem*> R& _buffPrefab() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<RuneBuffInfoItem*>*& _flyingBuffs() {
		return *(Il2CppList<RuneBuffInfoItem*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = PlayerClassesWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = PlayerClassType> R& _playerClassType() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = bool> R& _isInited() {
		return *(R*)((uintptr_t)this + 0x59);
	}
	 Il2CppList<int32_t>*& _runeInFly() {
		return *(Il2CppList<int32_t>**)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel) {
		return ((R (*)(RuneBuffInfoContainer*, IRuneInventoryPanel*))(Il2CppBase() + 0x11A7600))(this, runePanel);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7F64))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7F68))(this);
	}
	template <typename R = void> R AddListeners() {
		return ((R (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7808))(this);
	}
	template <typename R = void> R RemoveListeners() {
		return ((R (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A7FC4))(this);
	}
	template <typename R = void> R OnClassRuneChanged(ClassRuneChangedData data) {
		return ((R (*)(RuneBuffInfoContainer*, ClassRuneChangedData))(Il2CppBase() + 0x11A813C))(this, data);
	}
	template <typename R = void> R OnClassRuneDeactivated(HashSet1<PlayerClassType>* playerClasses, ClassRuneDeactivatedData data) {
		return ((R (*)(RuneBuffInfoContainer*, HashSet1<PlayerClassType>*, ClassRuneDeactivatedData))(Il2CppBase() + 0x11A8144))(this, playerClasses, data);
	}
	template <typename R = void> R UpdateActiveBuffs(int32_t changedSlot) {
		return ((R (*)(RuneBuffInfoContainer*, int32_t))(Il2CppBase() + 0x11A7984))(this, changedSlot);
	}
	template <typename R = void> R UpdateAllBuffs() {
		return ((R (*)(RuneBuffInfoContainer*))(Il2CppBase() + 0x11A8CA8))(this);
	}
	template <typename R = void> R UpdateAllBuffs_1(Il2CppArray<Il2CppString*>* classRunes) {
		return ((R (*)(RuneBuffInfoContainer*, Il2CppArray<Il2CppString*>*))(Il2CppBase() + 0x11A9144))(this, classRunes);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(RuneBuffInfoContainer*, bool))(Il2CppBase() + 0x11A95C8))(this, isActive);
	}

};

