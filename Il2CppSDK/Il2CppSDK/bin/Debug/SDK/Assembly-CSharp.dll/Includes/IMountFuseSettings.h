#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountFuseSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountFuseSettings"));
	}


	template <typename T = Il2CppArray<uintptr_t>*> T get_GradeSettings() {
		return ((T (*)(IMountFuseSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T get_MountsRandomGroupByType() {
		return ((T (*)(IMountFuseSettings*))(Il2CppBase() + 0x0))(this);
	}

};

