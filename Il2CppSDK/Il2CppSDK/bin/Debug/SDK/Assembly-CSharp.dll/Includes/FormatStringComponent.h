#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringValueComponent.h" 

class FormatStringComponent : public StringValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FormatStringComponent"));
	}


	template <typename R = Il2CppString*> R ToString(float value) {
		return ((R (*)(FormatStringComponent*, float))(Il2CppBase() + 0x15FC940))(this, value);
	}

};

