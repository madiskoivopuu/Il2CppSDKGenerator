#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class TcpCommandEnum
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "TcpCommandEnum"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = TcpCommandEnum*> static T& Empty() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TcpCommandEnum*> static T& LoginUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = TcpCommandEnum*> static T& HelloUser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
