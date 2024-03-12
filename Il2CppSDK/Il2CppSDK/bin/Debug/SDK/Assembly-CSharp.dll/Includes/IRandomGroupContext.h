#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IRandomGroupContext
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IRandomGroupContext"));
	}


	template <typename T = uintptr_t> T get_randomGroup() {
		return ((T (*)(IRandomGroupContext*))(Il2CppBase() + 0x0))(this);
	}

};

}
