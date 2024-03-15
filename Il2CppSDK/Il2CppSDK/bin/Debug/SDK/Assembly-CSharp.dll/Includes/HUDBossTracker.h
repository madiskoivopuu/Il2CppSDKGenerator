#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDBossTracker
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDBossTracker"));
	}

	template <typename R = uintptr_t> R& _mainPanel() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _collapseButton() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _expandButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _expandIcon() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TextImageMonoBehaviour*> R& _bossPanel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = HUDBossEnrageView*> R& _enrageView() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppArray<HUDBossMagicView*>*> R& _magicViews() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _bossId() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = bool> R get_Active() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144C738))(this);
	}
	template <typename R = void> R set_Active(bool value) {
		return ((R (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C75C))(this, value);
	}
	template <typename R = bool> R get_IsExpanded() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144C7C0))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144C7EC))(this);
	}
	template <typename R = void> R UpdateView() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144CA9C))(this);
	}
	template <typename R = void> R Collapse(bool notSave) {
		return ((R (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C934))(this, notSave);
	}
	template <typename R = void> R Expand(bool notSave) {
		return ((R (*)(HUDBossTracker*, bool))(Il2CppBase() + 0x144C9E8))(this, notSave);
	}
	template <typename R = void> R Restore() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144D034))(this);
	}
	template <typename R = void> R Awakeb__13_0() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144D0A8))(this);
	}
	template <typename R = void> R Awakeb__13_1() {
		return ((R (*)(HUDBossTracker*))(Il2CppBase() + 0x144D0B0))(this);
	}

};

