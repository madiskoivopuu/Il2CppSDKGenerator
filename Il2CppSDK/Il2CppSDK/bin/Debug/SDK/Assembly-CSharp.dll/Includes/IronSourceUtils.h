#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceUtils"));
	}

	template <typename T = Il2CppString*> static T& ERROR_CODE() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& ERROR_DESCRIPTION() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& INSTANCE_ID_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> static T& PLACEMENT_KEY() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = IronSourceError*> static T getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((T (*)(void *, Il2CppObject*))(Il2CppBase() + 0x10D8FC0))(0, descriptionObject);
	}
	template <typename T = IronSourcePlacement*> static T getPlacementFromObject(Il2CppObject* placementObject) {
		return ((T (*)(void *, Il2CppObject*))(Il2CppBase() + 0x10DFF84))(0, placementObject);
	}

};

