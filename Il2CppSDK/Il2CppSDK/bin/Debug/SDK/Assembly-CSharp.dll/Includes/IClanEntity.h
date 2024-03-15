#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IClanEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IClanEntity"));
	}


	template <typename R = ClanComponent*> R get_clan() {
		return ((R (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasClan() {
		return ((R (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddClan(int64_t newId) {
		return ((R (*)(IClanEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R ReplaceClan(int64_t newId) {
		return ((R (*)(IClanEntity*, int64_t))(Il2CppBase() + 0x0))(this, newId);
	}
	template <typename R = void> R RemoveClan() {
		return ((R (*)(IClanEntity*))(Il2CppBase() + 0x0))(this);
	}

};

