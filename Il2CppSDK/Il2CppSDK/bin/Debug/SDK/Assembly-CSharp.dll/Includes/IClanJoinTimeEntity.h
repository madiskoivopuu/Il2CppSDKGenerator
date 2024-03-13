#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanJoinTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanJoinTimeEntity"));
	}


	template <typename T = ClanJoinTimeComponent*> T get_clanJoinTime() {
		return ((T (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClanJoinTime() {
		return ((T (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClanJoinTime(int64_t newValue) {
		return ((T (*)(IClanJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceClanJoinTime(int64_t newValue) {
		return ((T (*)(IClanJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveClanJoinTime() {
		return ((T (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

