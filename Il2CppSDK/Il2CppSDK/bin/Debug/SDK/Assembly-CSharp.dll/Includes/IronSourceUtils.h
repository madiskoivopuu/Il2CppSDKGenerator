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

	template <typename T = uintptr_t> static T getErrorFromErrorObject(uintptr_t descriptionObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10D8FC0))(0, descriptionObject);
	}
	template <typename T = uintptr_t> static T getPlacementFromObject(uintptr_t placementObject) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x10DFF84))(0, placementObject);
	}

};

}
