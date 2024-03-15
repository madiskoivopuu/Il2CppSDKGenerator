#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "FloatValueComponent.h" 

class DelayComponent : public FloatValueComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DelayComponent"));
	}


	template <typename R = int64_t> R GetTicks() {
		return ((R (*)(DelayComponent*))(Il2CppBase() + 0xEB82C0))(this);
	}

};

