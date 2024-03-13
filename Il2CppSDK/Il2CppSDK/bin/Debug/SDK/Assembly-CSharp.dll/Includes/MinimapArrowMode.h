#pragma once
#include <Il2Cpp/Il2Cpp.h>

class MinimapArrowMode
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "MinimapArrowMode"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = MinimapArrowMode*> static T& Arrow() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = MinimapArrowMode*> static T& Exit() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

