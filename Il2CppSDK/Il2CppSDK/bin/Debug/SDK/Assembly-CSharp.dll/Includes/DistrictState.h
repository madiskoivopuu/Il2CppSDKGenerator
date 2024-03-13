#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DistrictState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DistrictState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DistrictState*> static T& Reset() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DistrictState*> static T& AddResources() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DistrictState*> static T& ReadyToBuild() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

