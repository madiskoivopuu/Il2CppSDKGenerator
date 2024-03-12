#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountInfoView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountInfoView"));
	}

	template <typename T = uintptr_t> T& Level() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& Name() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& ClanName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& LastLogin() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& SelectButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& Selected() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = void*> T& _onSelected() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T OnEnable() {
		return ((T (*)(AccountInfoView*))(Il2CppBase() + 0xFD0A84))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(AccountInfoView*))(Il2CppBase() + 0xFD0B20))(this);
	}
	template <typename T = void> T Init(int64_t playerId, void* onSelected) {
		return ((T (*)(AccountInfoView*, int64_t, void*))(Il2CppBase() + 0xFD0B48))(this, playerId, onSelected);
	}
	template <typename T = void> T OnSelectButtonClicked() {
		return ((T (*)(AccountInfoView*))(Il2CppBase() + 0xFD0FDC))(this);
	}
	template <typename T = void> T Deselect() {
		return ((T (*)(AccountInfoView*))(Il2CppBase() + 0xFD10D4))(this);
	}

};

}
