#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationsComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationsComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& List() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(LocationsComponent*, Il2CppObject*))(Il2CppBase() + 0x17261DC))(this, targetObject);
	}

};

