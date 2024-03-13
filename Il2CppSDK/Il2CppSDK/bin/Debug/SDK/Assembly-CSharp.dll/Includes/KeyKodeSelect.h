#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyKodeSelect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyKodeSelect"));
	}

	template <typename T = StandartButton*> T& buttonPrefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& panel() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& okButton() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppList<StandartButton*>*> T& buttons() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = bool> T& isInit() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = HashSet1uintptr_t>*> T& keys() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Action1Il2CppArray<uintptr_t>*>*> T& OnOk() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T SelectKeys(Il2CppArray<uintptr_t>* current, Action1Il2CppArray<uintptr_t>*>* onSelected) {
		return ((T (*)(KeyKodeSelect*, Il2CppArray<uintptr_t>*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x14EA824))(this, current, onSelected);
	}
	template <typename T = void> T OnKeyClick(StandartButton* button, uintptr_t key) {
		return ((T (*)(KeyKodeSelect*, StandartButton*, uintptr_t))(Il2CppBase() + 0x14EB85C))(this, button, key);
	}
	template <typename T = void> T OkClicked() {
		return ((T (*)(KeyKodeSelect*))(Il2CppBase() + 0x14EBC14))(this);
	}

};

