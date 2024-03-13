#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountEntityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountEntityHelper"));
	}


	template <typename T = int64_t> static T GetDeathTimeout(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCDE24))(0, account);
	}
	template <typename T = uintptr_t> static T GetEndPoint(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCDF94))(0, account);
	}
	template <typename T = bool> static T Send(AccountEntity* account, uintptr_t writer, uintptr_t options, bool ifWorldWasSent, bool force) {
		return ((T (*)(void *, AccountEntity*, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0xFCDFE0))(0, account, writer, options, ifWorldWasSent, force);
	}
	template <typename T = void> static T RestoreIfIsDead(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE08C))(0, account);
	}
	template <typename T = int32_t> static T GetDistrictLevel(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE130))(0, account);
	}
	template <typename T = int32_t> static T GetFontanelGrade(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE17C))(0, account);
	}
	template <typename T = int32_t> static T GetDistrictLevel_1(IPlayerIdEntity* actor, ICommonContexts* contexts) {
		return ((T (*)(void *, IPlayerIdEntity*, ICommonContexts*))(Il2CppBase() + 0xFCE1C8))(0, actor, contexts);
	}
	template <typename T = int32_t> static T GetFontanelGrade_1(IPlayerIdEntity* actor, ICommonContexts* contexts) {
		return ((T (*)(void *, IPlayerIdEntity*, ICommonContexts*))(Il2CppBase() + 0xFCE394))(0, actor, contexts);
	}

};

