#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMailStackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMailStackEntity"));
	}


	template <typename T = MailStackComponent*> T get_mailStack() {
		return ((T (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasMailStack() {
		return ((T (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddMailStack(int32_t newValue) {
		return ((T (*)(IMailStackEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T ReplaceMailStack(int32_t newValue) {
		return ((T (*)(IMailStackEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename T = void> T RemoveMailStack() {
		return ((T (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

