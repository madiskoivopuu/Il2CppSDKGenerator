#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class AvailableProductAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "AvailableProductAction"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = AvailableProductAction*> static T& ApUpdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = AvailableProductAction*> static T& ApDestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
