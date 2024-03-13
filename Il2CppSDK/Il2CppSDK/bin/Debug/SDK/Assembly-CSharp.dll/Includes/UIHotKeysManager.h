#pragma once
#include <Il2Cpp/Il2Cpp.h>

class UIHotKeysManager
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "UIHotKeysManager"));
	}

	template <typename T = uintptr_t> T& _graphicRaycaster() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _eventSystem() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _pointerEventData() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _raycastResults() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppDictionary<uintptr_t, Il2CppList<UIHotKey*>*>*> T& _hotKeys() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _keys() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T Add(UIHotKey* hotKey) {
		return ((T (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152A9F4))(this, hotKey);
	}
	template <typename T = void> T Remove(UIHotKey* hotKey) {
		return ((T (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152ADA8))(this, hotKey);
	}
	template <typename T = void> T Update() {
		return ((T (*)(UIHotKeysManager*))(Il2CppBase() + 0x152AF2C))(this);
	}
	template <typename T = bool> T TryClickTo(UIHotKey* hotKey) {
		return ((T (*)(UIHotKeysManager*, UIHotKey*))(Il2CppBase() + 0x152B08C))(this, hotKey);
	}
	template <typename T = bool> T IsClickable(uintptr_t target, bool log) {
		return ((T (*)(UIHotKeysManager*, uintptr_t, bool))(Il2CppBase() + 0x152B280))(this, target, log);
	}
	template <typename T = bool> T IsParent(uintptr_t target, uintptr_t targetParent) {
		return ((T (*)(UIHotKeysManager*, uintptr_t, uintptr_t))(Il2CppBase() + 0x152B854))(this, target, targetParent);
	}
	template <typename T = bool> T CheckUIClick(Il2CppString* targetTag) {
		return ((T (*)(UIHotKeysManager*, Il2CppString*))(Il2CppBase() + 0x152B928))(this, targetTag);
	}

};

