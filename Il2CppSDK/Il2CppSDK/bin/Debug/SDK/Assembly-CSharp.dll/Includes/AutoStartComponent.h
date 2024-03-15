#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AutoStartComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AutoStartComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(AutoStartComponent*, Il2CppObject*))(Il2CppBase() + 0x1A65BE8))(this, targetObject);
	}

};

