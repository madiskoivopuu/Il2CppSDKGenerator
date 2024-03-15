#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActivateNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActivateNotifyEntity"));
	}


	template <typename R = ActivateNotifyComponent*> R get_activateNotify() {
		return ((R (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasActivateNotify() {
		return ((R (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddActivateNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(IActivateNotifyEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R ReplaceActivateNotify(NotifyType newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((R (*)(IActivateNotifyEntity*, NotifyType, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename R = void> R RemoveActivateNotify() {
		return ((R (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

