#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountExtensions"));
	}


	template <typename T = void> static T UpdateLevel(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE560))(0, account);
	}
	template <typename T = int32_t> static T GetLocationAutoCount(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE59C))(0, account, pointName, now);
	}
	template <typename T = Attempt*> static T GetLocationAutoAttempt(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE67C))(0, account, pointName, now);
	}
	template <typename T = void> static T IncLocationAuto(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((T (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE760))(0, account, pointName, now);
	}
	template <typename T = bool> static T IsRenameFree(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE8C4))(0, account);
	}
	template <typename T = bool> static T IsClanRenameFree(AccountEntity* account) {
		return ((T (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE944))(0, account);
	}

};

