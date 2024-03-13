#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanEntity"));
	}


	template <typename T = ClanComponent*> T get_clan() {
		return ((T (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasClan() {
		return ((T (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddClan(int64_t newId) {
		return ((T (*)(IClanEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T ReplaceClan(int64_t newId) {
		return ((T (*)(IClanEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename T = void> T RemoveClan() {
		return ((T (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}

};

