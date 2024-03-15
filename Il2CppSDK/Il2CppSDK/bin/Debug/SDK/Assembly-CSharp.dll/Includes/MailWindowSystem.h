#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MailWindowSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MailWindowSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<MailEntity*>*& _mailWindows() {
		return *(IGroup1<MailEntity*>**)((uintptr_t)this + 0x18);
	}
	 HashSet1<int64_t>*& _checkedMails() {
		return *(HashSet1<int64_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(MailWindowSystem*))(Il2CppBase() + 0x125F6DC))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(MailWindowSystem*))(Il2CppBase() + 0x125F750))(this);
	}

};

