#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent" 

class TestGroupComponent: IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestGroupComponent"));
	}


	template <typename T = uintptr_t> T GetTestGroup() {
		return ((T (*)(TestGroupComponent*))(Il2CppBase() + 0x16B64C4))(this);
	}

};

}
