#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Args
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Args"));
	}

	template <typename T = ICommonContexts*> T& World() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = GameEntity*> T& Target() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = GameEntity*> T& Source() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = AccountEntity*> T& _targetAccount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = AccountEntity*> T& _sourceAccount() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = LocationEntity*> T& _location() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = ClanEntity*> T& _targetClan() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = ClanEntity*> T& _sourceClan() {
		return *(T*)((uintptr_t)this + 0x38);
	}

	template <typename T = AccountEntity*> T get_TargetAccount() {
		return ((T (*)(Args*))(Il2CppBase() + 0x111E9F8))(this);
	}
	template <typename T = AccountEntity*> T get_SourceAccount() {
		return ((T (*)(Args*))(Il2CppBase() + 0x112758C))(this);
	}
	template <typename T = LocationEntity*> T get_Location() {
		return ((T (*)(Args*))(Il2CppBase() + 0x111EF70))(this);
	}
	template <typename T = ClanEntity*> T get_TargetClan() {
		return ((T (*)(Args*))(Il2CppBase() + 0x11202F4))(this);
	}
	template <typename T = ClanEntity*> T get_SourceClan() {
		return ((T (*)(Args*))(Il2CppBase() + 0x1128060))(this);
	}

};

