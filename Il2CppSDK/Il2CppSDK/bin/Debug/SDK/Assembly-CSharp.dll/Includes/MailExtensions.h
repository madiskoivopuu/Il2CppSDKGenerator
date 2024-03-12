#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailExtensions"));
	}

	template <typename T = void*> static T& _tournamentsMailsMatcher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = void*> static T& _guildJoinMailsMatcher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	template <typename T = void*> static T& _windowDataMailsMatcher() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename T = uintptr_t> static T GetTournamentResultMail(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x125B468))(0, world);
	}
	template <typename T = uintptr_t> static T GetGuildTournamentResultMail(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x125B7B8))(0, world);
	}
	template <typename T = uintptr_t> static T GetGlobalTournamentResultMail(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x125BB4C))(0, world);
	}
	template <typename T = uintptr_t> static T GetGuildJoinResultMail(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x125BF04))(0, world);
	}
	template <typename T = void*> static T GetMailWithWindows(uintptr_t world) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x125C1D0))(0, world);
	}

};

}
