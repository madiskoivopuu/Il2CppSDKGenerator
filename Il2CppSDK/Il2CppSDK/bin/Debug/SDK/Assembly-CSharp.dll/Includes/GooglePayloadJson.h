#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GooglePayloadJson
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePayloadJson"));
	}

	template <typename T = Il2CppString*> T& json() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& signature() {
		return *(T*)((uintptr_t)this + 0x18);
	}


};

}
