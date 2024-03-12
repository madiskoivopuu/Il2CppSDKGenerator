#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent" 

class BaseMagicByGradeComponent: StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMagicByGradeComponent"));
	}


	template <typename T = Il2CppString*> T GetName(int32_t grade) {
		return ((T (*)(BaseMagicByGradeComponent*, int32_t))(Il2CppBase() + 0x166F3DC))(this, grade);
	}

};

}
