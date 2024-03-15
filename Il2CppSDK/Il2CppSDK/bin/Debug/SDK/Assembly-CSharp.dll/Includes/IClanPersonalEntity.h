#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanPersonalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanPersonalEntity"));
	}


	template <typename R = ClanPersonalComponent*> R get_clanPersonal() {
		return ((R (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClanPersonal() {
		return ((R (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClanPersonal(int64_t newClanId) {
		return ((R (*)(IClanPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newClanId);
	}
	template <typename R = void> R ReplaceClanPersonal(int64_t newClanId) {
		return ((R (*)(IClanPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newClanId);
	}
	template <typename R = void> R RemoveClanPersonal() {
		return ((R (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

