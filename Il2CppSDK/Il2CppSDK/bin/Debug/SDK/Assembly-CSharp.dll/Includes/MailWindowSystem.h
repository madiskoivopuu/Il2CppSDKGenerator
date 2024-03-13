#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailWindowSystem"));
	}

	template <typename T = ICommonUnityWorld*> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = IGroup1MailEntity*>*> T& _mailWindows() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = HashSet1int64_t>*> T& _checkedMails() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(MailWindowSystem*))(Il2CppBase() + 0x125F6DC))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(MailWindowSystem*))(Il2CppBase() + 0x125F750))(this);
	}

};

