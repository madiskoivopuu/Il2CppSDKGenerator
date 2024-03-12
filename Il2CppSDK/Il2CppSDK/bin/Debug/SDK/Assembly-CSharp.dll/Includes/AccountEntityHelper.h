#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountEntityHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountEntityHelper"));
	}


	template <typename T = int64_t> static T GetDeathTimeout(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCDE24))(0, account);
	}
	template <typename T = uintptr_t> static T GetEndPoint(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCDF94))(0, account);
	}
	template <typename T = bool> static T Send(uintptr_t account, uintptr_t writer, uintptr_t options, bool ifWorldWasSent, bool force) {
		return ((T (*)(void *, uintptr_t, uintptr_t, uintptr_t, bool, bool))(Il2CppBase() + 0xFCDFE0))(0, account, writer, options, ifWorldWasSent, force);
	}
	template <typename T = void> static T RestoreIfIsDead(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCE08C))(0, account);
	}
	template <typename T = int32_t> static T GetDistrictLevel(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCE130))(0, account);
	}
	template <typename T = int32_t> static T GetFontanelGrade(uintptr_t account) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0xFCE17C))(0, account);
	}
	template <typename T = int32_t> static T GetDistrictLevel_1(uintptr_t actor, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCE1C8))(0, actor, contexts);
	}
	template <typename T = int32_t> static T GetFontanelGrade_1(uintptr_t actor, uintptr_t contexts) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0xFCE394))(0, actor, contexts);
	}

};

}
