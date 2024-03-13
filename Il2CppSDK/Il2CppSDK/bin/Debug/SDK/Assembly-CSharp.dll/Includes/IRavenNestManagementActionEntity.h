#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRavenNestManagementActionEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRavenNestManagementActionEntity"));
	}


	template <typename T = RavenNestManagementActionComponent*> T get_ravenNestManagementAction() {
		return ((T (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasRavenNestManagementAction() {
		return ((T (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(IRavenNestManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T ReplaceRavenNestManagementAction(Il2CppString* newName) {
		return ((T (*)(IRavenNestManagementActionEntity*, Il2CppString*))(Il2CppBase() + 0x0))(this, newName);
	}
	template <typename T = void> T RemoveRavenNestManagementAction() {
		return ((T (*)(IRavenNestManagementActionEntity*))(Il2CppBase() + 0x0))(this);
	}

};

