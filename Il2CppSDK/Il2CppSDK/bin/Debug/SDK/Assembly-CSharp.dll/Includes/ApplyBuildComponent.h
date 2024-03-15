#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyBuildComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyBuildComponent"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x10);
	}


};

