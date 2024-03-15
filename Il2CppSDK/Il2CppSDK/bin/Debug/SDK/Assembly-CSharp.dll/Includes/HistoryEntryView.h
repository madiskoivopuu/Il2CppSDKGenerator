#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntryView"));
	}

	template <typename R = uintptr_t> R& icon() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& nameLabel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& cheatButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& durabilityPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& durability() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = CheatData> R& _data() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _onCheatButtonClicked() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = void> R set_Durability(Nullable1<float>* value) {
		return ((R (*)(HistoryEntryView*, Nullable1<float>*))(Il2CppBase() + 0x1C52094))(this, value);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(HistoryEntryView*))(Il2CppBase() + 0x1C52114))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(HistoryEntryView*))(Il2CppBase() + 0x1C521B0))(this);
	}
	template <typename R = void> R Bind(CheatData data, uintptr_t onCheatButtonClicked) {
		return ((R (*)(HistoryEntryView*, CheatData, uintptr_t))(Il2CppBase() + 0x1C51F90))(this, data, onCheatButtonClicked);
	}
	template <typename R = void> R OnCheatButtonClick() {
		return ((R (*)(HistoryEntryView*))(Il2CppBase() + 0x1C521D8))(this);
	}

};

