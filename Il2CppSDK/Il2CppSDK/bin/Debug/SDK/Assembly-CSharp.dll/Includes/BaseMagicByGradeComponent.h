#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent.h" 

class BaseMagicByGradeComponent : public StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BaseMagicByGradeComponent"));
	}


	template <typename R = Il2CppString*> R GetName(int32_t grade) {
		return ((R (*)(BaseMagicByGradeComponent*, int32_t))(Il2CppBase() + 0x166F3DC))(this, grade);
	}

};

