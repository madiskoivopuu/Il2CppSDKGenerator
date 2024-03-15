#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanJoinTimeEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanJoinTimeEntity"));
	}


	template <typename R = ClanJoinTimeComponent*> R get_clanJoinTime() {
		return ((R (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClanJoinTime() {
		return ((R (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClanJoinTime(int64_t newValue) {
		return ((R (*)(IClanJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceClanJoinTime(int64_t newValue) {
		return ((R (*)(IClanJoinTimeEntity*, int64_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveClanJoinTime() {
		return ((R (*)(IClanJoinTimeEntity*))(Il2CppBase() + 0x0))(this);
	}

};

