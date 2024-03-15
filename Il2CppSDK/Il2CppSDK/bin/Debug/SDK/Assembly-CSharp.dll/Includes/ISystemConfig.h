#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ISystemConfig
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ISystemConfig"));
	}


	template <typename R = uintptr_t> R GetSystems() {
		return ((R (*)(ISystemConfig*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = void> R Initialize() {
		return ((R (*)(ISystemConfig*))(Il2CppBase() + 0x0))(this);
	}

};

