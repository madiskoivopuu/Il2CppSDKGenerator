#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailExtensions"));
	}

	 static IAllOfMatcher1<MailEntity*>*& _tournamentsMailsMatcher() {
		return *(IAllOfMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static IAllOfMatcher1<MailEntity*>*& _guildJoinMailsMatcher() {
		return *(IAllOfMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 static IAllOfMatcher1<MailEntity*>*& _windowDataMailsMatcher() {
		return *(IAllOfMatcher1<MailEntity*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}

	template <typename R = MailEntity*> static R GetTournamentResultMail(IMailContexts* world) {
		return ((R (*)(void *, IMailContexts*))(Il2CppBase() + 0x125B468))(0, world);
	}
	template <typename R = MailEntity*> static R GetGuildTournamentResultMail(IMailContexts* world) {
		return ((R (*)(void *, IMailContexts*))(Il2CppBase() + 0x125B7B8))(0, world);
	}
	template <typename R = MailEntity*> static R GetGlobalTournamentResultMail(IMailContexts* world) {
		return ((R (*)(void *, IMailContexts*))(Il2CppBase() + 0x125BB4C))(0, world);
	}
	template <typename R = MailEntity*> static R GetGuildJoinResultMail(IMailContexts* world) {
		return ((R (*)(void *, IMailContexts*))(Il2CppBase() + 0x125BF04))(0, world);
	}
	 static IGroup1<MailEntity*>* GetMailWithWindows(IMailContexts* world) {
		return ((IGroup1<MailEntity*>* (*)(void *, IMailContexts*))(Il2CppBase() + 0x125C1D0))(0, world);
	}

};

