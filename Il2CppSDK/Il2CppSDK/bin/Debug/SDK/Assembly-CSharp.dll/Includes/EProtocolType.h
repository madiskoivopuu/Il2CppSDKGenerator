#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EProtocolType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EProtocolType"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = uintptr_t> static T& Udp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> static T& Tcp() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
