#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationsComponent"));
	}

	template <typename R = Il2CppArray<Il2CppString*>*> R& List() {
		return *(R*)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LocationsComponent*, Il2CppObject*))(Il2CppBase() + 0x17261DC))(this, targetObject);
	}

};
