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
	template <typename T = TooltipProxy*> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = ConfigEntity*> T& _statConfig() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = GameEntity*> T& _avatar() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Nullable1float>*> T& _currentValue() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = PlayerStatType*> T& StatType() {
		return *(T*)((uintptr_t)this + 0x58);
	}

	template <typename T = PlayerStatType*> T get_StatType() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E22C))(this);
	}
	template <typename T = void> T set_StatType(PlayerStatType* value) {
		return ((T (*)(PlayerStatView*, PlayerStatType*))(Il2CppBase() + 0x156E234))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E23C))(this);
	}
	template <typename T = void> T Setup(ConfigEntity* statConfig) {
		return ((T (*)(PlayerStatView*, ConfigEntity*))(Il2CppBase() + 0x156E338))(this, statConfig);
	}
	template <typename T = void> T Init(TooltipView* tooltipView) {
		return ((T (*)(PlayerStatView*, TooltipView*))(Il2CppBase() + 0x156E498))(this, tooltipView);
	}
	template <typename T = ValueTuple2Il2CppString*, Il2CppArray<uintptr_t>*>*> T GetTitleAndText() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156E53C))(this);
	}
	template <typename T = void> T UpdateView(GameEntity* avatar, bool showZero) {
		return ((T (*)(PlayerStatView*, GameEntity*, bool))(Il2CppBase() + 0x156EC20))(this, avatar, showZero);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerStatView*))(Il2CppBase() + 0x156F1EC))(this);
	}

};

