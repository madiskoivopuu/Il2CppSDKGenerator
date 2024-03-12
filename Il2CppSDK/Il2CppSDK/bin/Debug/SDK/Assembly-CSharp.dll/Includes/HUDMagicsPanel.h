#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDMagicsPanel
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDMagicsPanel"));
	}

	template <typename T = uintptr_t> T& _itemViewPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _scrollView() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _nextMarker() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _prevMarker() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> T& _notScrollMaxCount() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _itemViews() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _window() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _lastMagicIds() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& _currentMagicIds() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> static T& _magicDescriptionItemComparer() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(HUDMagicsPanel*))(Il2CppBase() + 0x145D3D0))(this);
	}
	template <typename T = void> T set_IsActive(bool value) {
		return ((T (*)(HUDMagicsPanel*, bool))(Il2CppBase() + 0x145D3F4))(this, value);
	}
	template <typename T = void> T Init(uintptr_t window) {
		return ((T (*)(HUDMagicsPanel*, uintptr_t))(Il2CppBase() + 0x145D458))(this, window);
	}
	template <typename T = void> T UpdateView(uintptr_t target) {
		return ((T (*)(HUDMagicsPanel*, uintptr_t))(Il2CppBase() + 0x145D688))(this, target);
	}

};

}
