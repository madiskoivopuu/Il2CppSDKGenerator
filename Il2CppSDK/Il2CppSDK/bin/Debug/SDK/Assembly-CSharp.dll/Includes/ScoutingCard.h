#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingCard"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _canvasGroup() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _icons() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _lockedPanel() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _requiredLevel() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _timerPanel() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _activeTimer() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _cooldownTimer() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _reward() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _price() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& _enough() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& _notEnough() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _wavesCount() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _selectedMarks() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _normalMarks() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = Action1ScoutingCard*>*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int32_t> T& Price() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = int32_t> T& Level() {
		return *(T*)((uintptr_t)this + 0xAC);
	}
	template <typename T = Il2CppString*> T& Name() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = bool> T& _selected() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = bool> T& _locked() {
		return *(T*)((uintptr_t)this + 0xB9);
	}
	template <typename T = bool> T& _interactable() {
		return *(T*)((uintptr_t)this + 0xBA);
	}

	template <typename T = void> T add_ClickEvent(Action1ScoutingCard*>* value) {
		return ((T (*)(ScoutingCard*, Action1ScoutingCard*>*))(Il2CppBase() + 0x13589BC))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(Action1ScoutingCard*>* value) {
		return ((T (*)(ScoutingCard*, Action1ScoutingCard*>*))(Il2CppBase() + 0x1358A5C))(this, value);
	}
	template <typename T = int32_t> T get_Price() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358AFC))(this);
	}
	template <typename T = void> T set_Price(int32_t value) {
		return ((T (*)(ScoutingCard*, int32_t))(Il2CppBase() + 0x1358B04))(this, value);
	}
	template <typename T = int32_t> T get_Level() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358B0C))(this);
	}
	template <typename T = void> T set_Level(int32_t value) {
		return ((T (*)(ScoutingCard*, int32_t))(Il2CppBase() + 0x1358B14))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358B1C))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(ScoutingCard*, Il2CppString*))(Il2CppBase() + 0x1358B24))(this, value);
	}
	template <typename T = bool> T get_Selected() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358B2C))(this);
	}
	template <typename T = void> T set_Selected(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358B34))(this, value);
	}
	template <typename T = bool> T get_Locked() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358C28))(this);
	}
	template <typename T = void> T set_Locked(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C30))(this, value);
	}
	template <typename T = bool> T get_Interactanble() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358C78))(this);
	}
	template <typename T = void> T set_Interactanble(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C80))(this, value);
	}
	template <typename T = void> T SetSelected(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358B54))(this, value);
	}
	template <typename T = void> T SetLocked(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C50))(this, value);
	}
	template <typename T = void> T SetInteractanble(bool value) {
		return ((T (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358CA0))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358CD8))(this);
	}
	template <typename T = void> T HideTimer() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x1358D74))(this);
	}
	template <typename T = void> T ShowTimer(double seconds, bool active) {
		return ((T (*)(ScoutingCard*, double, bool))(Il2CppBase() + 0x1358DC4))(this, seconds, active);
	}
	template <typename T = void> T Init(int32_t level, Il2CppString* name, int32_t wavesCount, int32_t reward, int32_t price) {
		return ((T (*)(ScoutingCard*, int32_t, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1359048))(this, level, name, wavesCount, reward, price);
	}
	template <typename T = void> T UpdateView(AccountEntity* account, ScoutStateComponent* state, int64_t now) {
		return ((T (*)(ScoutingCard*, AccountEntity*, ScoutStateComponent*, int64_t))(Il2CppBase() + 0x13592B8))(this, account, state, now);
	}
	template <typename T = void> T Awakeb__45_0() {
		return ((T (*)(ScoutingCard*))(Il2CppBase() + 0x13595D4))(this);
	}

};

