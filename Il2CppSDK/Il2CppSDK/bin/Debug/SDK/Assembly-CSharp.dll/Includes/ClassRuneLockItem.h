#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassRuneLockItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassRuneLockItem"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _lockImage() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = TextMonoBehaviour*> T& _shLevelText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _warningMsg() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T Bind(IRuneInventoryPanel* runePanel, int32_t Index, int32_t firstLockedLevel, bool isClassLocked) {
		return ((T (*)(ClassRuneLockItem*, IRuneInventoryPanel*, int32_t, int32_t, bool))(Il2CppBase() + 0x159C950))(this, runePanel, Index, firstLockedLevel, isClassLocked);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ClassRuneLockItem*))(Il2CppBase() + 0x159E7DC))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ClassRuneLockItem*))(Il2CppBase() + 0x159E878))(this);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(ClassRuneLockItem*, bool))(Il2CppBase() + 0x159C898))(this, isActive);
	}

};

