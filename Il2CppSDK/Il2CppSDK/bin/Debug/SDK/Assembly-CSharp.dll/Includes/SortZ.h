#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortZ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortZ"));
	}


	template <typename R = int32_t> R Compare(TreePoint* a, TreePoint* b) {
		return ((R (*)(SortZ*, TreePoint*, TreePoint*))(Il2CppBase() + 0x10C24A4))(this, a, b);
	}

};

