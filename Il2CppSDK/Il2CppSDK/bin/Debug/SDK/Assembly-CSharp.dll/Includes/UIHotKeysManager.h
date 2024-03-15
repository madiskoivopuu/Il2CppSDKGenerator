#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHotKeysManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHotKeysManager"));
	}

	template <typename R = uintptr_t> R& _graphicRaycaster() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _eventSystem() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _pointerEventData() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<uintptr_t>*& _raycastResults() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x30);
	}
	 Il2CppDictionary<uintptr_t, Il2CppList<UIHotKey*>*>*& _hotKeys() {
		return *(Il2CppDictionary<uintptr_t, Il2CppList<UIHotKey*>*>**)((uintptr_t)this + 0x38);
	}
	 Il2CppList<uintptr_t>*& _keys() {
		return *(Il2CppList<uintptr_t>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R Add(UIHotKey* hotKey) {
		return ((R (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152A9F4))(this, hotKey);
	}
	template <typename R = void> R Remove(UIHotKey* hotKey) {
		return ((R (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152ADA8))(this, hotKey);
	}
	template <typename R = void> R Update() {
		return ((R (*)(UIHotKeysManager*))(Il2CppBase() + 0x152AF2C))(this);
	}
	template <typename R = bool> R TryClickTo(UIHotKey* hotKey) {
		return ((R (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152B08C))(this, hotKey);
	}
	template <typename R = bool> R IsClickable(uintptr_t target, bool log) {
		return ((R (*)(UIHotKeysManager*, uintptr_t, bool))(Il2CppBase() + 0x152B280))(this, target, log);
	}
	template <typename R = bool> R IsParent(uintptr_t target, uintptr_t targetParent) {
		return ((R (*)(UIHotKeysManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x152B854))(this, target, targetParent);
	}
	template <typename R = bool> R CheckUIClick(Il2CppString* targetTag) {
		return ((R (*)(UIHotKeysManager*, Il2CppString*))(Il2CppBase() + 0x152B928))(this, targetTag);
	}

};

