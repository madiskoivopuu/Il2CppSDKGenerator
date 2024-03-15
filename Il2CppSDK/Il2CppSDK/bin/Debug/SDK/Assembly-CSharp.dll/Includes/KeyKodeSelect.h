#pragma once
#include <Il2Cpp/Il2Cpp.h>

class KeyKodeSelect
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "KeyKodeSelect"));
	}

	template <typename R = StandartButton*> R& buttonPrefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& panel() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& okButton() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	 Il2CppList<StandartButton*>*& buttons() {
		return *(Il2CppList<StandartButton*>**)((uintptr_t)this + 0x30);
	}
	template <typename R = bool> R& isInit() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 HashSet1uintptr_t>*& keys() {
		return *(HashSet1uintptr_t>**)((uintptr_t)this + 0x40);
	}
	 Action1Il2CppArray<uintptr_t>*>*& OnOk() {
		return *(Action1Il2CppArray<uintptr_t>*>**)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R SelectKeys(Il2CppArray<uintptr_t>* current, Action1Il2CppArray<uintptr_t>*>* onSelected) {
		return ((R (*)(KeyKodeSelect*, Il2CppArray<uintptr_t>*, Action1Il2CppArray<uintptr_t>*>*))(Il2CppBase() + 0x14EA824))(this, current, onSelected);
	}
	template <typename R = void> R OnKeyClick(StandartButton* button, uintptr_t key) {
		return ((R (*)(KeyKodeSelect*, StandartButton*, uintptr_t))(Il2CppBase() + 0x14EB85C))(this, button, key);
	}
	template <typename R = void> R OkClicked() {
		return ((R (*)(KeyKodeSelect*))(Il2CppBase() + 0x14EBC14))(this);
	}

};

