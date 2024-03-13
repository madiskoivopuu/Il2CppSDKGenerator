#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossTracker"));
	}

	template <typename T = uintptr_t> T& _mainPanel() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _collapseButton() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _expandButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _expandIcon() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = TextImageMonoBehaviour*> T& _bossPanel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = HUDBossEnrageView*> T& _enrageView() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _magicViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& _bossId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = bool> T get_Active() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144C738))(this);
	}
	template <typename T = void> T set_Active(bool value) {
		return ((T (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C75C))(this, value);
	}
	template <typename T = bool> T get_IsExpanded() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144C7C0))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144C7EC))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144CA9C))(this);
	}
	template <typename T = void> T Collapse(bool notSave) {
		return ((T (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C934))(this, notSave);
	}
	template <typename T = void> T Expand(bool notSave) {
		return ((T (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C9E8))(this, notSave);
	}
	template <typename T = void> T Restore() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144D034))(this);
	}
	template <typename T = void> T Awakeb__13_0() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144D0A8))(this);
	}
	template <typename T = void> T Awakeb__13_1() {
		return ((T (*)(HUDBossTracker*))(Il2CppBase() + 0x144D0B0))(this);
	}

};

