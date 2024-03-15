#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Args
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Args"));
	}

	template <typename R = ICommonContexts*> R& World() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = GameEntity*> R& Target() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = GameEntity*> R& Source() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = AccountEntity*> R& _targetAccount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = AccountEntity*> R& _sourceAccount() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = LocationEntity*> R& _location() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = ClanEntity*> R& _targetClan() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = ClanEntity*> R& _sourceClan() {
		return *(R*)((uintptr_t)this + 0x38);
	}

	template <typename R = AccountEntity*> R get_TargetAccount() {
		return ((R (*)(Args*))(Il2CppBase() + 0x111E9F8))(this);
	}
	template <typename R = AccountEntity*> R get_SourceAccount() {
		return ((R (*)(Args*))(Il2CppBase() + 0x112758C))(this);
	}
	template <typename R = LocationEntity*> R get_Location() {
		return ((R (*)(Args*))(Il2CppBase() + 0x111EF70))(this);
	}
	template <typename R = ClanEntity*> R get_TargetClan() {
		return ((R (*)(Args*))(Il2CppBase() + 0x11202F4))(this);
	}
	template <typename R = ClanEntity*> R get_SourceClan() {
		return ((R (*)(Args*))(Il2CppBase() + 0x1128060))(this);
	}

};

