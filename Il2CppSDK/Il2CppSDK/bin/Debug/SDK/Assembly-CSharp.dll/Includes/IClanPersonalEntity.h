#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanPersonalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanPersonalEntity"));
	}


	template <typename T = ClanPersonalComponent*> T get_clanPersonal() {
		return ((T (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClanPersonal() {
		return ((T (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClanPersonal(int64_t newClanId) {
		return ((T (*)(IClanPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newClanId);
	}
	template <typename T = void> T ReplaceClanPersonal(int64_t newClanId) {
		return ((T (*)(IClanPersonalEntity*, int64_t))(Il2CppBase() + 0x0))(this, newClanId);
	}
	template <typename T = void> T RemoveClanPersonal() {
		return ((T (*)(IClanPersonalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

