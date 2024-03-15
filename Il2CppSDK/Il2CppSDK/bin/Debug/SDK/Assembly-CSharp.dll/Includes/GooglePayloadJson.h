#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GooglePayloadJson
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePayloadJson"));
	}

	template <typename R = Il2CppString*> R& json() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& signature() {
		return *(R*)((uintptr_t)this + 0x18);
	}


};

