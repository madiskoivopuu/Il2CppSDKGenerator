#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDCredentials
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDCredentials"));
	}

	template <typename T = DTDPlatform*> T& Platform() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& Key() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& Secret() {
		return *(T*)((uintptr_t)this + 0x20);
	}


};

}
