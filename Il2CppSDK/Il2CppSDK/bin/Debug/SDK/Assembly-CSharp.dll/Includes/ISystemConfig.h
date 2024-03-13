#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISystemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISystemConfig"));
	}


	template <typename T = uintptr_t> T GetSystems() {
		return ((T (*)(ISystemConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = void> T Initialize() {
		return ((T (*)(ISystemConfig*))(Il2CppBase() + 0x0))(this);
	}

};

