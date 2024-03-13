#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntryView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntryView"));
	}

	template <typename T = uintptr_t> T& icon() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& nameLabel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& cheatButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& durabilityPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& durability() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = CheatData*> T& _data() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _onCheatButtonClicked() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = void> T set_Durability(Nullable1float>* value) {
		return ((T (*)(HistoryEntryView*, Nullable1float>*))(Il2CppBase() + 0x1C52094))(this, value);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(HistoryEntryView*))(Il2CppBase() + 0x1C52114))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(HistoryEntryView*))(Il2CppBase() + 0x1C521B0))(this);
	}
	template <typename T = void> T Bind(CheatData* data, uintptr_t onCheatButtonClicked) {
		return ((T (*)(HistoryEntryView*, CheatData*, uintptr_t))(Il2CppBase() + 0x1C51F90))(this, data, onCheatButtonClicked);
	}
	template <typename T = void> T OnCheatButtonClick() {
		return ((T (*)(HistoryEntryView*))(Il2CppBase() + 0x1C521D8))(this);
	}

};

