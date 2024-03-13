#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DescriptionType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DescriptionType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DescriptionType*> static T& NotDefined() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DescriptionType*> static T& From() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DescriptionType*> static T& To() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

