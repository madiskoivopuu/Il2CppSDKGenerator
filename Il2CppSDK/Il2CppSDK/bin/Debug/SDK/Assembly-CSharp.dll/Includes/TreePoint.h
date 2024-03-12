#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TreePoint
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TreePoint"));
	}

	template <typename T = Il2CppVector3> T& point() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& data() {
		return *(T*)((uintptr_t)this + 0x1C);
	}


};

}
