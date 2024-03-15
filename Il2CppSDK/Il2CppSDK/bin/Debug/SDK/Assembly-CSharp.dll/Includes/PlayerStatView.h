#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerStatView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerStatView"));
	}

	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _valueText() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _buffMark() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _debuffMark() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = TooltipProxy*> R& _tooltipProxy() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = ConfigEntity*> R& _statConfig() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = GameEntity*> R& _avatar() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	 Nullable1<float>*& _currentValue() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x50);
	}
	template <typename R = PlayerStatType> R& StatType() {
		return *(R*)((uintptr_t)this + 0x58);
	}

	template <typename R = PlayerStatType> R get_StatType() {
		return ((R (*)(PlayerStatView*))(Il2CppBase() + 0x156E22C))(this);
	}
	template <typename R = void> R set_StatType(PlayerStatType value) {
		return ((R (*)(PlayerStatView*, PlayerStatType))(Il2CppBase() + 0x156E234))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerStatView*))(Il2CppBase() + 0x156E23C))(this);
	}
	template <typename R = void> R Setup(ConfigEntity* statConfig) {
		return ((R (*)(PlayerStatView*, ConfigEntity*))(Il2CppBase() + 0x156E338))(this, statConfig);
	}
	template <typename R = void> R Init(TooltipView* tooltipView) {
		return ((R (*)(PlayerStatView*, TooltipView*))(Il2CppBase() + 0x156E498))(this, tooltipView);
	}
	 ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* GetTitleAndText() {
		return ((ValueTuple2<Il2CppString*, Il2CppArray<Il2CppString*>*>* (*)(PlayerStatView*))(Il2CppBase() + 0x156E53C))(this);
	}
	template <typename R = void> R UpdateView(GameEntity* avatar, bool showZero) {
		return ((R (*)(PlayerStatView*, GameEntity*, bool))(Il2CppBase() + 0x156EC20))(this, avatar, showZero);
	}
	template <typename R = void> R Clean() {
		return ((R (*)(PlayerStatView*))(Il2CppBase() + 0x156F1EC))(this);
	}

};

