#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SourcesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SourcesComponent"));
	}

	template <typename T = Il2CppDictionary<int32_t, int32_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}


};

}
