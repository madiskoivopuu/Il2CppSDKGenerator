#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "IntValueComponent.h" 

class TestGroupComponent : public IntValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TestGroupComponent"));
	}


	template <typename R = TestGroup> R GetTestGroup() {
		return ((R (*)(TestGroupComponent*))(Il2CppBase() + 0x16B64C4))(this);
	}

};

