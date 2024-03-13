#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICompleteNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICompleteNotifyEntity"));
	}


	template <typename T = CompleteNotifyComponent*> T get_completeNotify() {
		return ((T (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasCompleteNotify() {
		return ((T (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddCompleteNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(ICompleteNotifyEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceCompleteNotify(NotifyType* newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(ICompleteNotifyEntity*, NotifyType*, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveCompleteNotify() {
		return ((T (*)(ICompleteNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

