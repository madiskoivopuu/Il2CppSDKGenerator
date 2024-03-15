#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalActionEntity"));
	}


	template <typename R = PortalActionComponent*> R get_portalAction() {
		return ((R (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPortalAction() {
		return ((R (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPortalAction(Il2CppString* newName) {
		return ((R (*)(IPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplacePortalAction(Il2CppString* newName) {
		return ((R (*)(IPortalActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemovePortalAction() {
		return ((R (*)(IPortalActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

