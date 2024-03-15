#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OffersViewSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OffersViewSystem"));
	}

	template <typename R = ICommonUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1<QuestEntity*>*& _activeOffers() {
		return *(IGroup1<QuestEntity*>**)((uintptr_t)this + 0x18);
	}
	 IGroup1<MailEntity*>*& _mailWindows() {
		return *(IGroup1<MailEntity*>**)((uintptr_t)this + 0x20);
	}
	 HashSet1<int64_t>*& _checkedMails() {
		return *(HashSet1<int64_t>**)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(OffersViewSystem*))(Il2CppBase() + 0x11D8784))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(OffersViewSystem*))(Il2CppBase() + 0x11D8AB0))(this);
	}

};

