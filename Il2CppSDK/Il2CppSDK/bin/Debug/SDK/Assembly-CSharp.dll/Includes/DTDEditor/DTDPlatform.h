#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace DTDEditor {

class DTDPlatform
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "DTDEditor", "DTDPlatform"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = DTDPlatform*> static T& Android() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDPlatform*> static T& iOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDPlatform*> static T& MacOS() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDPlatform*> static T& Windows() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDPlatform*> static T& WebGL() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = DTDPlatform*> static T& WinStore() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

}
