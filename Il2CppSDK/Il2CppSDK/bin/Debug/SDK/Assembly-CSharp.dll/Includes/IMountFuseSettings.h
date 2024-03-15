#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IMountFuseSettings
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IMountFuseSettings"));
	}


	template <typename R = Il2CppArray<GradeSetting*>*> R get_GradeSettings() {
		return ((R (*)(IMountFuseSettings*))(Il2CppBase() + 0x0))(this);
	}
	template <typename R = Il2CppArray<TypeRandomGroup*>*> R get_MountsRandomGroupByType() {
		return ((R (*)(IMountFuseSettings*))(Il2CppBase() + 0x0))(this);
	}

};

