#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountEntityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountEntityHelper"));
	}


	template <typename R = int64_t> static R GetDeathTimeout(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCDE24))(0, account);
	}
	template <typename R = uintptr_t> static R GetEndPoint(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCDF94))(0, account);
	}
	template <typename R = bool> static R Send(AccountEntity* account, uintptr_t writer, uintptr_t options, bool ifWorldWasSent, bool force) {
		return ((R (*)(void *, AccountEntity*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0xFCDFE0))(0, account, writer, options, ifWorldWasSent, force);
	}
	template <typename R = void> static R RestoreIfIsDead(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE08C))(0, account);
	}
	template <typename R = int32_t> static R GetDistrictLevel(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE130))(0, account);
	}
	template <typename R = int32_t> static R GetFontanelGrade(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE17C))(0, account);
	}
	template <typename R = int32_t> static R GetDistrictLevel_1(IPlayerIdEntity* actor, ICommonContexts* contexts) {
		return ((R (*)(void *, IPlayerIdEntity*, ICommonContexts*))(Il2CppBase() + 0xFCE1C8))(0, actor, contexts);
	}
	template <typename R = int32_t> static R GetFontanelGrade_1(IPlayerIdEntity* actor, ICommonContexts* contexts) {
		return ((R (*)(void *, IPlayerIdEntity*, ICommonContexts*))(Il2CppBase() + 0xFCE394))(0, actor, contexts);
	}

};

