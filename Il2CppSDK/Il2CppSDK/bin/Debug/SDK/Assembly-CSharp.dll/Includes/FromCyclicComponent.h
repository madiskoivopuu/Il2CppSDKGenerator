#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FromCyclicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FromCyclicComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(FromCyclicComponent*, Il2CppObject*))(Il2CppBase() + 0x15FE628))(this, targetObject);
	}

};

