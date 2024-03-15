#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SaveableComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SaveableComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(SaveableComponent*, Il2CppObject*))(Il2CppBase() + 0x1356E08))(this, targetObject);
	}

};

