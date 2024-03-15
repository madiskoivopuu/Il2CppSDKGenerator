#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SetPoolExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SetPoolExtensions"));
	}


	template <typename R = void> static R Release(HashSet1uintptr_t>* set) {
		return ((R (*)(void *, HashSet1uintptr_t>*))(Il2CppBase() + 0x0))(0, set);
	}

};

