#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "StringNamesComponent.h" 

class EffectByCountComponent : public StringNamesComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EffectByCountComponent"));
	}


	template <typename R = Il2CppString*> R GetName(int32_t count) {
		return ((R (*)(EffectByCountComponent*, int32_t))(Il2CppBase() + 0x1A9B998))(this, count);
	}

};

