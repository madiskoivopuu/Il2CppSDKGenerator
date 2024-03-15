#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Datas
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Datas"));
	}

	template <typename R = Parameters> R& Default() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<AudioTheme*>*> R& Themes() {
		return *(R*)((uintptr_t)this + 0x38);
	}


};

