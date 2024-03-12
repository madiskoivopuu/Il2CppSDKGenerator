#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalActionEntity"));
	}


	template <typename T = uintptr_t> T get_portalAction() {
		return ((T (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPortalAction() {
		return ((T (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPortalAction(Il2CppString* newName) {
		return ((T (*)(IPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplacePortalAction(Il2CppString* newName) {
		return ((T (*)(IPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemovePortalAction() {
		return ((T (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
