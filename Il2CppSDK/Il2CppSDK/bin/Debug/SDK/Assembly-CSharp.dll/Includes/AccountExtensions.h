#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountExtensions"));
	}


	template <typename R = void> static R UpdateLevel(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE560))(0, account);
	}
	template <typename R = int32_t> static R GetLocationAutoCount(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE59C))(0, account, pointName, now);
	}
	template <typename R = Attempt> static R GetLocationAutoAttempt(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE67C))(0, account, pointName, now);
	}
	template <typename R = void> static R IncLocationAuto(AccountEntity* account, Il2CppString* pointName, int64_t now) {
		return ((R (*)(void *, AccountEntity*, Il2CppString*, int64_t))(Il2CppBase() + 0xFCE760))(0, account, pointName, now);
	}
	template <typename R = bool> static R IsRenameFree(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE8C4))(0, account);
	}
	template <typename R = bool> static R IsClanRenameFree(AccountEntity* account) {
		return ((R (*)(void *, AccountEntity*))(Il2CppBase() + 0xFCE944))(0, account);
	}

};

