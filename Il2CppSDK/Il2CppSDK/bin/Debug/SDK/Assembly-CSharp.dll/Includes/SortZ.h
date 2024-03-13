#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SortZ
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SortZ"));
	}


	template <typename T = int32_t> T Compare(TreePoint* a, TreePoint* b) {
		return ((T (*)(SortZ*, TreePoint*, TreePoint*))(Il2CppBase() + 0x10C24A4))(this, a, b);
	}

};

