#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ICommonContexts
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ICommonContexts"));
	}


	template <typename T = uintptr_t> T get_MainContext() {
		return ((T (*)(ICommonContexts*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = uintptr_t> T get_Relationship() {
		return ((T (*)(ICommonContexts*))(Il2CppBase() + 0x0))(this);
	}

};

}
