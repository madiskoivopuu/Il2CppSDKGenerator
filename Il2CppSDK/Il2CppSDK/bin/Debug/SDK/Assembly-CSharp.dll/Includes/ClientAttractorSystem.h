#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientAttractorSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientAttractorSystem"));
	}

	template <typename T = void*> T& _targetMagics() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientAttractorSystem*))(Il2CppBase() + 0x19120C8))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientAttractorSystem*))(Il2CppBase() + 0x1912284))(this);
	}

};

}
