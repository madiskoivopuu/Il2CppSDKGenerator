#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceUtils
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceUtils"));
	}

	template <typename R = Il2CppString*> static R& ERROR_CODE() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& ERROR_DESCRIPTION() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& INSTANCE_ID_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> static R& PLACEMENT_KEY() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = IronSourceError*> static R getErrorFromErrorObject(Il2CppObject* descriptionObject) {
		return ((R (*)(void *, Il2CppObject*))(Il2CppBase() + 0x10D8FC0))(0, descriptionObject);
	}
	template <typename R = IronSourcePlacement*> static R getPlacementFromObject(Il2CppObject* placementObject) {
		return ((R (*)(void *, Il2CppObject*))(Il2CppBase() + 0x10DFF84))(0, placementObject);
	}

};

