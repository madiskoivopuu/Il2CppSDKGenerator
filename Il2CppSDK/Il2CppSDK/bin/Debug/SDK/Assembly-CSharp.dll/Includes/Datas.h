#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Datas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Datas"));
	}

	template <typename T = Parameters*> T& Default() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Themes() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

