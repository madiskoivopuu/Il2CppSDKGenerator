#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountInfoView"));
	}

	template <typename R = uintptr_t> R& Level() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& Name() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& ClanName() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& LastLogin() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& SelectButton() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& Selected() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	 Action1AccountInfoView*>*& _onSelected() {
		return *(Action1AccountInfoView*>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R OnEnable() {
		return ((R (*)(AccountInfoView*))(Il2CppBase() + 0xFD0A84))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(AccountInfoView*))(Il2CppBase() + 0xFD0B20))(this);
	}
	template <typename R = void> R Init(int64_t playerId, Action1AccountInfoView*>* onSelected) {
		return ((R (*)(AccountInfoView*, int64_t, Action1AccountInfoView*>*))(Il2CppBase() + 0xFD0B48))(this, playerId, onSelected);
	}
	template <typename R = void> R OnSelectButtonClicked() {
		return ((R (*)(AccountInfoView*))(Il2CppBase() + 0xFD0FDC))(this);
	}
	template <typename R = void> R Deselect() {
		return ((R (*)(AccountInfoView*))(Il2CppBase() + 0xFD10D4))(this);
	}

};

