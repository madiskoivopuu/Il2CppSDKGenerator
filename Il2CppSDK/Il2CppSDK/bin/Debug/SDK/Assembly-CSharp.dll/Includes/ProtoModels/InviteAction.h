#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class InviteAction
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "InviteAction"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = InviteAction*> static T& IAupdate() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = InviteAction*> static T& IAdestroy() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
