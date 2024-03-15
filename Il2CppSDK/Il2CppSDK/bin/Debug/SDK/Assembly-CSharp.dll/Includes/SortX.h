#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortX
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortX"));
	}


	template <typename R = int32_t> R Compare(TreePoint* a, TreePoint* b) {
		return ((R (*)(SortX*, TreePoint*, TreePoint*))(Il2CppBase() + 0x10C2444))(this, a, b);
	}

};

