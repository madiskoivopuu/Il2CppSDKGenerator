#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneLockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneLockItem"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _lockImage() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = TextMonoBehaviour*> R& _shLevelText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _warningMsg() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Bind(IRuneInventoryPanel* runePanel, int32_t Index, int32_t firstLockedLevel, bool isClassLocked) {
		return ((R (*)(ClassRuneLockItem*, IRuneInventoryPanel*, int32_t, int32_t, bool))(Il2CppBase() + 0x159C950))(this, runePanel, Index, firstLockedLevel, isClassLocked);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ClassRuneLockItem*))(Il2CppBase() + 0x159E7DC))(this);
	}
	template <typename R = void> R OnClick() {
		return ((R (*)(ClassRuneLockItem*))(Il2CppBase() + 0x159E878))(this);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(ClassRuneLockItem*, bool))(Il2CppBase() + 0x159C898))(this, isActive);
	}

};

