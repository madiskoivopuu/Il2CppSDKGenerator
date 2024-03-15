#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyResurrectComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyResurrectComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyResurrectComponent*, Il2CppObject*))(Il2CppBase() + 0x18953B8))(this, target);
	}

};

