#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class LinkUserType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "LinkUserType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = LinkUserType*> static T& Google() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = LinkUserType*> static T& Apple() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
