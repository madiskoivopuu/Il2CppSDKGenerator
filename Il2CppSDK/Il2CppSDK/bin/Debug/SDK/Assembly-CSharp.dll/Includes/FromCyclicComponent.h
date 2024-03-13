#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FromCyclicComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FromCyclicComponent"));
	}


	template <typename T = void> T CopyTo(Il2CppObject* targetObject) {
		return ((T (*)(FromCyclicComponent*, Il2CppObject*))(Il2CppBase() + 0x15FE628))(this, targetObject);
	}

};

