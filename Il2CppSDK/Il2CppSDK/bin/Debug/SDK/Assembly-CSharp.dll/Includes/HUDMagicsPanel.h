#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDMagicsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMagicsPanel"));
	}

	template <typename R = MagicDescriptionItemView*> R& _itemViewPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _scrollView() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _nextMarker() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _prevMarker() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> R& _notScrollMaxCount() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Il2CppList<MagicDescriptionItemView*>*& _itemViews() {
		return *(Il2CppList<MagicDescriptionItemView*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = UIWindow*> R& _window() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppDictionary<int32_t, int32_t>*& _lastMagicIds() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x58);
	}
	 Il2CppDictionary<int32_t, int32_t>*& _currentMagicIds() {
		return *(Il2CppDictionary<int32_t, int32_t>**)((uintptr_t)this + 0x60);
	}
	template <typename R = MagicDescriptionItemComparer*> static R& _magicDescriptionItemComparer() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = bool> R get_IsActive() {
		return ((R (*)(HUDMagicsPanel*))(Il2CppBase() + 0x145D3D0))(this);
	}
	template <typename R = void> R set_IsActive(bool value) {
		return ((R (*)(HUDMagicsPanel*, bool))(Il2CppBase() + 0x145D3F4))(this, value);
	}
	template <typename R = void> R Init(UIWindow* window) {
		return ((R (*)(HUDMagicsPanel*, UIWindow*))(Il2CppBase() + 0x145D458))(this, window);
	}
	template <typename R = void> R UpdateView(GameEntity* target) {
		return ((R (*)(HUDMagicsPanel*, GameEntity*))(Il2CppBase() + 0x145D688))(this, target);
	}

};

