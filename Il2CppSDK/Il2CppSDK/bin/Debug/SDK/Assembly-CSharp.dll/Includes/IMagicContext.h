#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMagicContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMagicContext"));
	}


	template <typename T = uintptr_t> T get_magic() {
		return ((T (*)(IMagicContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
