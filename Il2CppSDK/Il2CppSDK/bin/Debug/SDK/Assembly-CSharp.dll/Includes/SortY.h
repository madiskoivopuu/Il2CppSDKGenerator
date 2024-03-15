#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortY
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortY"));
	}


	template <typename R = int32_t> R Compare(TreePoint* a, TreePoint* b) {
		return ((R (*)(SortY*, TreePoint*, TreePoint*))(Il2CppBase() + 0x10C2474))(this, a, b);
	}

};

