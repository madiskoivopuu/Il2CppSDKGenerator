#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ListPoolExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ListPoolExtensions"));
	}


	template <typename R = void> static R Release(Il2CppList<uintptr_t>* list) {
		return ((R (*)(void *, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, list);
	}

};

