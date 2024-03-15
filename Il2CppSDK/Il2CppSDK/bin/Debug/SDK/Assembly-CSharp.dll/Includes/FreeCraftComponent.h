#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FreeCraftComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FreeCraftComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(FreeCraftComponent*, Il2CppObject*))(Il2CppBase() + 0x15FCA18))(this, target);
	}

};

