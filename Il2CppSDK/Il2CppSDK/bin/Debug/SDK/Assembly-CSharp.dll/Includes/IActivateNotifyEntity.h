#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IActivateNotifyEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IActivateNotifyEntity"));
	}


	template <typename T = uintptr_t> T get_activateNotify() {
		return ((T (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasActivateNotify() {
		return ((T (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(IActivateNotifyEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T ReplaceActivateNotify(uintptr_t newType, Il2CppString* newIcon, Il2CppString* newCaption, Il2CppString* newText, Il2CppString* newSound) {
		return ((T (*)(IActivateNotifyEntity*, uintptr_t, Il2CppString*, Il2CppString*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x0))(this, newType, newIcon, newCaption, newText, newSound);
	}
	template <typename T = void> T RemoveActivateNotify() {
		return ((T (*)(IActivateNotifyEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
