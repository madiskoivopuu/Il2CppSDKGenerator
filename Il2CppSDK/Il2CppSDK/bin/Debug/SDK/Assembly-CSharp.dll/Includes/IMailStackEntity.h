#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMailStackEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMailStackEntity"));
	}


	template <typename R = MailStackComponent*> R get_mailStack() {
		return ((R (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasMailStack() {
		return ((R (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddMailStack(int32_t newValue) {
		return ((R (*)(IMailStackEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R ReplaceMailStack(int32_t newValue) {
		return ((R (*)(IMailStackEntity*, int32_t))(Il2CppBase() + 0x0))(this, newValue);
	}
	template <typename R = void> R RemoveMailStack() {
		return ((R (*)(IMailStackEntity*))(Il2CppBase() + 0x0))(this);
	}

};

