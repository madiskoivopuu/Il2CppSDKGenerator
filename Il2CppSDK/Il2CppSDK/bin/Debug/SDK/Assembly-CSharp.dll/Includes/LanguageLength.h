#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageLength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageLength"));
	}

	template <typename R = uintptr_t> R& Language() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Length() {
		return *(R*)((uintptr_t)this + 0x14);
	}


};

