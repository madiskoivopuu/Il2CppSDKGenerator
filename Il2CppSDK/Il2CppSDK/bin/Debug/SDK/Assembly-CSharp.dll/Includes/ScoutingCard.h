#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ScoutingCard
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ScoutingCard"));
	}

	template <typename R = uintptr_t> R& _button() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& _canvasGroup() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _icons() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _lockedPanel() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _requiredLevel() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _timerPanel() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = uintptr_t> R& _activeTimer() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = uintptr_t> R& _cooldownTimer() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = uintptr_t> R& _reward() {
		return *(R*)((uintptr_t)this + 0x58);
	}
	template <typename R = uintptr_t> R& _price() {
		return *(R*)((uintptr_t)this + 0x60);
	}
	template <typename R = uintptr_t> R& _enough() {
		return *(R*)((uintptr_t)this + 0x68);
	}
	template <typename R = uintptr_t> R& _notEnough() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _wavesCount() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _selectedMarks() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _normalMarks() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	 Action1<ScoutingCard*>*& ClickEvent() {
		return *(Action1<ScoutingCard*>**)((uintptr_t)this + 0xA0);
	}
	template <typename R = int32_t> R& Price() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = int32_t> R& Level() {
		return *(R*)((uintptr_t)this + 0xAC);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = bool> R& _selected() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = bool> R& _locked() {
		return *(R*)((uintptr_t)this + 0xB9);
	}
	template <typename R = bool> R& _interactable() {
		return *(R*)((uintptr_t)this + 0xBA);
	}

	template <typename R = void> R add_ClickEvent(Action1<ScoutingCard*>* value) {
		return ((R (*)(ScoutingCard*, Action1<ScoutingCard*>*))(Il2CppBase() + 0x13589BC))(this, value);
	}
	template <typename R = void> R remove_ClickEvent(Action1<ScoutingCard*>* value) {
		return ((R (*)(ScoutingCard*, Action1<ScoutingCard*>*))(Il2CppBase() + 0x1358A5C))(this, value);
	}
	template <typename R = int32_t> R get_Price() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358AFC))(this);
	}
	template <typename R = void> R set_Price(int32_t value) {
		return ((R (*)(ScoutingCard*, int32_t))(Il2CppBase() + 0x1358B04))(this, value);
	}
	template <typename R = int32_t> R get_Level() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358B0C))(this);
	}
	template <typename R = void> R set_Level(int32_t value) {
		return ((R (*)(ScoutingCard*, int32_t))(Il2CppBase() + 0x1358B14))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358B1C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(ScoutingCard*, Il2CppString*))(Il2CppBase() + 0x1358B24))(this, value);
	}
	template <typename R = bool> R get_Selected() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358B2C))(this);
	}
	template <typename R = void> R set_Selected(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358B34))(this, value);
	}
	template <typename R = bool> R get_Locked() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358C28))(this);
	}
	template <typename R = void> R set_Locked(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C30))(this, value);
	}
	template <typename R = bool> R get_Interactanble() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358C78))(this);
	}
	template <typename R = void> R set_Interactanble(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C80))(this, value);
	}
	template <typename R = void> R SetSelected(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358B54))(this, value);
	}
	template <typename R = void> R SetLocked(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358C50))(this, value);
	}
	template <typename R = void> R SetInteractanble(bool value) {
		return ((R (*)(ScoutingCard*, bool))(Il2CppBase() + 0x1358CA0))(this, value);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358CD8))(this);
	}
	template <typename R = void> R HideTimer() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x1358D74))(this);
	}
	template <typename R = void> R ShowTimer(double seconds, bool active) {
		return ((R (*)(ScoutingCard*, double, bool))(Il2CppBase() + 0x1358DC4))(this, seconds, active);
	}
	template <typename R = void> R Init(int32_t level, Il2CppString* name, int32_t wavesCount, int32_t reward, int32_t price) {
		return ((R (*)(ScoutingCard*, int32_t, Il2CppString*, int32_t, int32_t, int32_t))(Il2CppBase() + 0x1359048))(this, level, name, wavesCount, reward, price);
	}
	template <typename R = void> R UpdateView(AccountEntity* account, ScoutStateComponent* state, int64_t now) {
		return ((R (*)(ScoutingCard*, AccountEntity*, ScoutStateComponent*, int64_t))(Il2CppBase() + 0x13592B8))(this, account, state, now);
	}
	template <typename R = void> R Awakeb__45_0() {
		return ((R (*)(ScoutingCard*))(Il2CppBase() + 0x13595D4))(this);
	}

};

