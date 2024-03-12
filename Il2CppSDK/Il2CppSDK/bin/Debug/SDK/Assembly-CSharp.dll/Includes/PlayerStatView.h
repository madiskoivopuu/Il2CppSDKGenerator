#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatView"));
	}

	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _valueText() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _buffMark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _debuffMark() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _statConfig() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _avatar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = void*> T& _currentValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& StatType() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = uintptr_t> T get_StatType() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E22C))(this);
	}
	template <typename T = void> T set_StatType(uintptr_t value) {
		return ((T (*)(PlayerStatView*, uintptr_t))(Il2CppBase() + 0x156E234))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E23C))(this);
	}
	template <typename T = void> T Setup(uintptr_t statConfig) {
		return ((T (*)(PlayerStatView*, uintptr_t))(Il2CppBase() + 0x156E338))(this, statConfig);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(PlayerStatView*, uintptr_t))(Il2CppBase() + 0x156E498))(this, tooltipView);
	}
	template <typename T = void*> T GetTitleAndText() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E53C))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t avatar, bool showZero) {
		return ((T (*)(PlayerStatView*, uintptr_t, bool))(Il2CppBase() + 0x156EC20))(this, avatar, showZero);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156F1EC))(this);
	}

};

}
