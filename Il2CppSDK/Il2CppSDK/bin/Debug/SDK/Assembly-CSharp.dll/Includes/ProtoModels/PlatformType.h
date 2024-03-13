#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PlatformType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PlatformType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = PlatformType*> static T& Other() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> static T& Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> static T& IOs() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> static T& Huawei() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = PlatformType*> static T& Samsung() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
