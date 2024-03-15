#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IPortalEntity
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IPortalEntity"));
	}


	template <typename R = PortalComponent*> R get_portal() {
		return ((R (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = bool> R get_hasPortal() {
		return ((R (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R AddPortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(IPortalEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R ReplacePortal(Il2CppString* newName, Il2CppArray<Il2CppString*>* newExitTagIn, Il2CppString* newExitTagOut, Il2CppString* newToLocationName, bool newDisabled, bool newWithoutParent, float newShieldRevealTime, Il2CppArray<Vec2SL>* newPoints, int32_t newPointIndex, bool newToGlobalMap, bool newSkipGlobalMap) {
		return ((R (*)(IPortalEntity*, Il2CppString*, Il2CppArray<Il2CppString*>*, Il2CppString*, Il2CppString*, bool, bool, float, Il2CppArray<Vec2SL>*, int32_t, bool, bool))(Il2CppBase() + 0x0))(this, newName, newExitTagIn, newExitTagOut, newToLocationName, newDisabled, newWithoutParent, newShieldRevealTime, newPoints, newPointIndex, newToGlobalMap, newSkipGlobalMap);
	}
	template <typename R = void> R RemovePortal() {
		return ((R (*)(IPortalEntity*))(Il2CppBase() + 0x0))(this);
	}

};

