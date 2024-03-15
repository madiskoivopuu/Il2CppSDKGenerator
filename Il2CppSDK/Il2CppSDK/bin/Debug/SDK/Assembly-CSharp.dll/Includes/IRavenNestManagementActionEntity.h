#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestManagementActionEntity"));
	}


	template <typename R = RavenNestManagementActionComponent*> R get_ravenNestManagementAction() {
		return ((R (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasRavenNestManagementAction() {
		return ((R (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(IRavenNestManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((R (*)(IRavenNestManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename R = void> R RemoveRavenNestManagementAction() {
		return ((R (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

