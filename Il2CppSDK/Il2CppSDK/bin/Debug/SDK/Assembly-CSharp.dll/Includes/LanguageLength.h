#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LanguageLength
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LanguageLength"));
	}

	template <typename T = uintptr_t> T& Language() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Length() {
		return *(T*)((uintptr_t)this + 0x14);
	}


};

