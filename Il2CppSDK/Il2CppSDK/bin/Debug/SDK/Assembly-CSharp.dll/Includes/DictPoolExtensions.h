#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DictPoolExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DictPoolExtensions"));
	}


	template <typename R = void> static R Release(Il2CppDictionary<uintptr_t, uintptr_t>* dict) {
		return ((R (*)(void *, Il2CppDictionary<uintptr_t, uintptr_t>*))(Il2CppBase() + 0x0))(0, dict);
	}

};

