#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class CanType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "CanType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& CanNone() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& CanMembersStartRaid() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
