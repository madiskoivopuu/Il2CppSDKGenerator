#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICompleteNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICompleteNotifyEntity"));
	}


	template <typename R = CompleteNotifyComponent*> R get_completeNotify() {
		return ((R (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasCompleteNotify() {
		return ((R (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(ICompleteNotifyEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceCompleteNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(ICompleteNotifyEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveCompleteNotify() {
		return ((R (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

