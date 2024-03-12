#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalEntity"));
	}


	template <typename T = uintptr_t> T get_portal() {
		return ((T (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = bool> T get_hasPortal() {
		return ((T (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T AddPortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(IPortalEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T ReplacePortal(Il2CppString* newName, Il2CppArray<uintptr_t>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<uintptr_t>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((T (*)(IPortalEntity*, Il2CppString*, Il2CppArray<uintptr_t>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<uintptr_t>*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename T = void> T RemovePortal() {
		return ((T (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

}
